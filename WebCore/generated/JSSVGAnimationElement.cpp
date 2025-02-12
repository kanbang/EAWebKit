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

#include "config.h"

#if ENABLE(SVG_ANIMATION)

#include "JSSVGAnimationElement.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGElement.h"
#include "JSSVGStringList.h"
#include "SVGAnimationElement.h"
#include "SVGElement.h"
#include "SVGStringList.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGAnimationElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAnimationElementTableValues[] =
{
    { "targetElement", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimationElementTargetElement), (intptr_t)0 THUNK_GENERATOR(0) },
    { "requiredFeatures", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimationElementRequiredFeatures), (intptr_t)0 THUNK_GENERATOR(0) },
    { "requiredExtensions", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimationElementRequiredExtensions), (intptr_t)0 THUNK_GENERATOR(0) },
    { "systemLanguage", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimationElementSystemLanguage), (intptr_t)0 THUNK_GENERATOR(0) },
    { "externalResourcesRequired", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimationElementExternalResourcesRequired), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAnimationElementTable = { 16, 15, JSSVGAnimationElementTableValues, 0 };
/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAnimationElementPrototypeTableValues[] =
{
    { "getStartTime", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGAnimationElementPrototypeFunctionGetStartTime), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getCurrentTime", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGAnimationElementPrototypeFunctionGetCurrentTime), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getSimpleDuration", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGAnimationElementPrototypeFunctionGetSimpleDuration), (intptr_t)0 THUNK_GENERATOR(0) },
    { "hasExtension", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGAnimationElementPrototypeFunctionHasExtension), (intptr_t)1 THUNK_GENERATOR(0) },
    { "beginElement", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGAnimationElementPrototypeFunctionBeginElement), (intptr_t)0 THUNK_GENERATOR(0) },
    { "beginElementAt", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGAnimationElementPrototypeFunctionBeginElementAt), (intptr_t)1 THUNK_GENERATOR(0) },
    { "endElement", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGAnimationElementPrototypeFunctionEndElement), (intptr_t)0 THUNK_GENERATOR(0) },
    { "endElementAt", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGAnimationElementPrototypeFunctionEndElementAt), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAnimationElementPrototypeTable = { 17, 15, JSSVGAnimationElementPrototypeTableValues, 0 };
const ClassInfo JSSVGAnimationElementPrototype::s_info = { "SVGAnimationElementPrototype", &JSC::JSNonFinalObject::s_info, &JSSVGAnimationElementPrototypeTable, 0 };

JSObject* JSSVGAnimationElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAnimationElement>(exec, globalObject);
}

bool JSSVGAnimationElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGAnimationElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGAnimationElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGAnimationElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGAnimationElement::s_info = { "SVGAnimationElement", &JSSVGElement::s_info, &JSSVGAnimationElementTable, 0 };

JSSVGAnimationElement::JSSVGAnimationElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGAnimationElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

void JSSVGAnimationElement::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGAnimationElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGAnimationElementPrototype::create(exec->globalData(), globalObject, JSSVGAnimationElementPrototype::createStructure(exec->globalData(), globalObject, JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGAnimationElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSSVGAnimationElement, Base>(exec, &JSSVGAnimationElementTable, this, propertyName, slot);
}

bool JSSVGAnimationElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSSVGAnimationElement, Base>(exec, &JSSVGAnimationElementTable, this, propertyName, descriptor);
}

JSValue jsSVGAnimationElementTargetElement(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimationElement* castedThis = static_cast<JSSVGAnimationElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->targetElement()));
    return result;
}


JSValue jsSVGAnimationElementRequiredFeatures(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimationElement* castedThis = static_cast<JSSVGAnimationElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(imp, imp->requiredFeatures())));
    return result;
}


JSValue jsSVGAnimationElementRequiredExtensions(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimationElement* castedThis = static_cast<JSSVGAnimationElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(imp, imp->requiredExtensions())));
    return result;
}


JSValue jsSVGAnimationElementSystemLanguage(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimationElement* castedThis = static_cast<JSSVGAnimationElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(imp, imp->systemLanguage())));
    return result;
}


JSValue jsSVGAnimationElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimationElement* castedThis = static_cast<JSSVGAnimationElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


EncodedJSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionGetStartTime(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGAnimationElement::s_info))
        return throwVMTypeError(exec);
    JSSVGAnimationElement* castedThis = static_cast<JSSVGAnimationElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGAnimationElement::s_info);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThis->impl());


    JSC::JSValue result = jsNumber(imp->getStartTime());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionGetCurrentTime(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGAnimationElement::s_info))
        return throwVMTypeError(exec);
    JSSVGAnimationElement* castedThis = static_cast<JSSVGAnimationElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGAnimationElement::s_info);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThis->impl());


    JSC::JSValue result = jsNumber(imp->getCurrentTime());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionGetSimpleDuration(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGAnimationElement::s_info))
        return throwVMTypeError(exec);
    JSSVGAnimationElement* castedThis = static_cast<JSSVGAnimationElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGAnimationElement::s_info);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThis->impl());
    ExceptionCode ec = 0;


    JSC::JSValue result = jsNumber(imp->getSimpleDuration(ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionHasExtension(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGAnimationElement::s_info))
        return throwVMTypeError(exec);
    JSSVGAnimationElement* castedThis = static_cast<JSSVGAnimationElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGAnimationElement::s_info);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThis->impl());
    const String& extension(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsBoolean(imp->hasExtension(extension));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionBeginElement(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGAnimationElement::s_info))
        return throwVMTypeError(exec);
    JSSVGAnimationElement* castedThis = static_cast<JSSVGAnimationElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGAnimationElement::s_info);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThis->impl());

    imp->beginElement();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionBeginElementAt(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGAnimationElement::s_info))
        return throwVMTypeError(exec);
    JSSVGAnimationElement* castedThis = static_cast<JSSVGAnimationElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGAnimationElement::s_info);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThis->impl());
    float offset(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->beginElementAt(offset);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionEndElement(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGAnimationElement::s_info))
        return throwVMTypeError(exec);
    JSSVGAnimationElement* castedThis = static_cast<JSSVGAnimationElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGAnimationElement::s_info);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThis->impl());

    imp->endElement();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionEndElementAt(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGAnimationElement::s_info))
        return throwVMTypeError(exec);
    JSSVGAnimationElement* castedThis = static_cast<JSSVGAnimationElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGAnimationElement::s_info);
    SVGAnimationElement* imp = static_cast<SVGAnimationElement*>(castedThis->impl());
    float offset(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->endElementAt(offset);
    return JSValue::encode(jsUndefined());
}


}

#endif // ENABLE(SVG_ANIMATION)
