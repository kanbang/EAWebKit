/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSSVGAnimateTransformElement_h
#define JSSVGAnimateTransformElement_h

#if ENABLE(SVG) && ENABLE(SVG_ANIMATION)

#include "JSSVGAnimationElement.h"
#include "SVGAnimateTransformElement.h"
#include "SVGElement.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSSVGAnimateTransformElement : public JSSVGAnimationElement {
public:
    typedef JSSVGAnimationElement Base;
    static JSSVGAnimateTransformElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGAnimateTransformElement> impl)
    {
        JSSVGAnimateTransformElement* ptr = new (JSC::allocateCell<JSSVGAnimateTransformElement>(globalObject->globalData().heap)) JSSVGAnimateTransformElement(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    JSSVGAnimateTransformElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SVGAnimateTransformElement>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSSVGAnimateTransformElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSSVGAnimateTransformElementPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGAnimateTransformElementPrototype* ptr = new (JSC::allocateCell<JSSVGAnimateTransformElementPrototype>(globalData.heap)) JSSVGAnimateTransformElementPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSSVGAnimateTransformElementPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

// Attributes

JSC::JSValue jsSVGAnimateTransformElementConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(SVG) && ENABLE(SVG_ANIMATION)

#endif
