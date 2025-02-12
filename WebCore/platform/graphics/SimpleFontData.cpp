/*
 * Copyright (C) 2005, 2008, 2010 Apple Inc. All rights reserved.
 * Copyright (C) 2006 Alexey Proskuryakov
 * Copyright (C) 2013 Electronic Arts, Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer. 
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution. 
 * 3.  Neither the name of Apple Computer, Inc. ("Apple") nor the names of
 *     its contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission. 
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE AND ITS CONTRIBUTORS "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL APPLE OR ITS CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "SimpleFontData.h"

#include "Font.h"
#include "FontCache.h"

#include <wtf/MathExtras.h>
#include <wtf/UnusedParam.h>

using namespace std;

namespace WebCore {

SimpleFontData::SimpleFontData(const FontPlatformData& platformData, bool isCustomFont, bool isLoading, bool isTextOrientationFallback)
    : m_maxCharWidth(-1)
    , m_avgCharWidth(-1)
    , m_platformData(platformData)
    , m_treatAsFixedPitch(false)
    , m_isCustomFont(isCustomFont)
    , m_isLoading(isLoading)
    , m_isTextOrientationFallback(isTextOrientationFallback)
    , m_isBrokenIdeographFallback(false)
    , m_hasVerticalGlyphs(false)
{
    platformInit();
    platformGlyphInit();
    platformCharWidthInit();
}

SimpleFontData::SimpleFontData(PassOwnPtr<AdditionalFontData> fontData, float fontSize, bool syntheticBold, bool syntheticItalic)
    : m_platformData(FontPlatformData(fontSize, syntheticBold, syntheticItalic))
    , m_fontData(fontData)
    , m_treatAsFixedPitch(false)
    , m_isCustomFont(true)
    , m_isLoading(false)
    , m_isTextOrientationFallback(false)
    , m_isBrokenIdeographFallback(false)
    , m_hasVerticalGlyphs(false)
{
    m_fontData->initializeFontData(this, fontSize);
}

#if !(PLATFORM(QT) && !HAVE(QRAWFONT))
// Estimates of avgCharWidth and maxCharWidth for platforms that don't support accessing these values from the font.
void SimpleFontData::initCharWidths()
{
    GlyphPage* glyphPageZero = GlyphPageTreeNode::getRootChild(this, 0)->page();

    // Treat the width of a '0' as the avgCharWidth.
    if (m_avgCharWidth <= 0.f && glyphPageZero) {
        static const UChar32 digitZeroChar = '0';
        Glyph digitZeroGlyph = glyphPageZero->glyphDataForCharacter(digitZeroChar).glyph;
        if (digitZeroGlyph)
            m_avgCharWidth = widthForGlyph(digitZeroGlyph);
    }

    // If we can't retrieve the width of a '0', fall back to the x height.
    if (m_avgCharWidth <= 0.f)
        m_avgCharWidth = m_fontMetrics.xHeight();

    if (m_maxCharWidth <= 0.f)
        m_maxCharWidth = max(m_avgCharWidth, m_fontMetrics.floatAscent());
}

void SimpleFontData::platformGlyphInit()
{
    GlyphPage* glyphPageZero = GlyphPageTreeNode::getRootChild(this, 0)->page();
    if (!glyphPageZero) {
        LOG_ERROR("Failed to get glyph page zero.");
        m_spaceGlyph = 0;
        m_spaceWidth = 0;
        m_adjustedSpaceWidth = 0;
        determinePitch();
        m_zeroWidthSpaceGlyph = 0;
        m_missingGlyphData.fontData = this;
        m_missingGlyphData.glyph = 0;
        return;
    }

    m_zeroWidthSpaceGlyph = glyphPageZero->glyphDataForCharacter(0).glyph;

    // Nasty hack to determine if we should round or ceil space widths.
    // If the font is monospace or fake monospace we ceil to ensure that 
    // every character and the space are the same width.  Otherwise we round.
    m_spaceGlyph = glyphPageZero->glyphDataForCharacter(' ').glyph;
    float width = widthForGlyph(m_spaceGlyph);
    m_spaceWidth = width;
    determinePitch();
    m_adjustedSpaceWidth = m_treatAsFixedPitch ? ceilf(width) : roundf(width);

    // Force the glyph for ZERO WIDTH SPACE to have zero width, unless it is shared with SPACE.
    // Helvetica is an example of a non-zero width ZERO WIDTH SPACE glyph.
    // See <http://bugs.webkit.org/show_bug.cgi?id=13178>
    // Ask for the glyph for 0 to avoid paging in ZERO WIDTH SPACE. Control characters, including 0,
    // are mapped to the ZERO WIDTH SPACE glyph.
    if (m_zeroWidthSpaceGlyph == m_spaceGlyph) {
        m_zeroWidthSpaceGlyph = 0;
        LOG_ERROR("Font maps SPACE and ZERO WIDTH SPACE to the same glyph. Glyph width will not be overridden.");
    }

    m_missingGlyphData.fontData = this;
    m_missingGlyphData.glyph = 0;
}
#endif

SimpleFontData::~SimpleFontData()
{
#if ENABLE(SVG_FONTS)
    if (!m_fontData)
#endif
        platformDestroy();

    if (!isCustomFont())
        GlyphPageTreeNode::pruneTreeFontData(this);
    
    //+EAWebKitChange - There have been cases where a glyph can render yet the prune for custom fonts has
    // not yet been called.  This can cause a rare crash since the simpleFontData has now been destroyed.
    //2/19/2013
     else
        GlyphPageTreeNode::pruneTreeCustomFontData(this);
    //-EAWebKitChange   
}

const SimpleFontData* SimpleFontData::fontDataForCharacter(UChar32) const
{
    return this;
}

bool SimpleFontData::isSegmented() const
{
    return false;
}

SimpleFontData* SimpleFontData::verticalRightOrientationFontData() const
{
    if (!m_derivedFontData)
        m_derivedFontData = DerivedFontData::create(isCustomFont());
    if (!m_derivedFontData->verticalRightOrientation) {
        FontPlatformData verticalRightPlatformData(m_platformData);
        verticalRightPlatformData.setOrientation(Horizontal);
        m_derivedFontData->verticalRightOrientation = adoptPtr(new SimpleFontData(verticalRightPlatformData, isCustomFont(), false, true));
    }
    return m_derivedFontData->verticalRightOrientation.get();
}

SimpleFontData* SimpleFontData::uprightOrientationFontData() const
{
    if (!m_derivedFontData)
        m_derivedFontData = DerivedFontData::create(isCustomFont());
    if (!m_derivedFontData->uprightOrientation)
        m_derivedFontData->uprightOrientation = adoptPtr(new SimpleFontData(m_platformData, isCustomFont(), false, true));
    return m_derivedFontData->uprightOrientation.get();
}

SimpleFontData* SimpleFontData::brokenIdeographFontData() const
{
    if (!m_derivedFontData)
        m_derivedFontData = DerivedFontData::create(isCustomFont());
    if (!m_derivedFontData->brokenIdeograph) {
        m_derivedFontData->brokenIdeograph = adoptPtr(new SimpleFontData(m_platformData, isCustomFont(), false));
        m_derivedFontData->brokenIdeograph->m_isBrokenIdeographFallback = true;
    }
    return m_derivedFontData->brokenIdeograph.get();
}

#ifndef NDEBUG
String SimpleFontData::description() const
{
    if (isSVGFont())
        return "[SVG font]";
    if (isCustomFont())
        return "[custom font]";

    return platformData().description();
}
#endif

PassOwnPtr<SimpleFontData::DerivedFontData> SimpleFontData::DerivedFontData::create(bool forCustomFont)
{
    return adoptPtr(new DerivedFontData(forCustomFont));
}

SimpleFontData::DerivedFontData::~DerivedFontData()
{
    if (!forCustomFont)
        return;

    if (smallCaps)
        GlyphPageTreeNode::pruneTreeCustomFontData(smallCaps.get());
    if (emphasisMark)
        GlyphPageTreeNode::pruneTreeCustomFontData(emphasisMark.get());
    if (brokenIdeograph)
        GlyphPageTreeNode::pruneTreeCustomFontData(brokenIdeograph.get());
    if (verticalRightOrientation)
        GlyphPageTreeNode::pruneTreeCustomFontData(verticalRightOrientation.get());
    if (uprightOrientation)
        GlyphPageTreeNode::pruneTreeCustomFontData(uprightOrientation.get());
}

} // namespace WebCore
