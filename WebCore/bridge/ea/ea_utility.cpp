/*
 * Copyright (C) 2008 Nokia Corporation and/or its subsidiary(-ies)
 * Copyright (C) 2011 Electronic Arts, Inc. All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#include "config.h"

#include "ea_utility.h"
#include "Strong.h"

namespace JSC { namespace Bindings {

void JStoEA(ExecState *exec, const JSValue &jsValue, EA::WebKit::JavascriptValue *resultOut)
{
    resultOut->Assign(&jsValue);
}

JSValue EAtoJS(ExecState *exec, const EA::WebKit::JavascriptValue &eaJS)
{
    return *reinterpret_cast<JSC::JSValue*>(eaJS.GetImpl());
}

}}