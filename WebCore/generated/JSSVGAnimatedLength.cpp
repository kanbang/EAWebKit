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

#if ENABLE(SVG)

#include "JSSVGAnimatedLength.h"

#include "JSSVGLength.h"
#include "SVGLength.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGAnimatedLength);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAnimatedLengthTableValues[] =
{
    { "baseVal", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedLengthBaseVal), (intptr_t)0 THUNK_GENERATOR(0) },
    { "animVal", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedLengthAnimVal), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedLengthConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedLengthTable = { 8, 7, JSSVGAnimatedLengthTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAnimatedLengthConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedLengthConstructorTable = { 1, 0, JSSVGAnimatedLengthConstructorTableValues, 0 };
class JSSVGAnimatedLengthConstructor : public DOMConstructorObject {
private:
    JSSVGAnimatedLengthConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGAnimatedLengthConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGAnimatedLengthConstructor* ptr = new (JSC::allocateCell<JSSVGAnimatedLengthConstructor>(*exec->heap())) JSSVGAnimatedLengthConstructor(structure, globalObject);
        ptr->finishCreation(exec, globalObject);
        return ptr;
    }

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSSVGAnimatedLengthConstructor::s_info = { "SVGAnimatedLengthConstructor", &DOMConstructorObject::s_info, &JSSVGAnimatedLengthConstructorTable, 0 };

JSSVGAnimatedLengthConstructor::JSSVGAnimatedLengthConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGAnimatedLengthConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGAnimatedLengthPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGAnimatedLengthConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimatedLengthConstructor, JSDOMWrapper>(exec, &JSSVGAnimatedLengthConstructorTable, this, propertyName, slot);
}

bool JSSVGAnimatedLengthConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAnimatedLengthConstructor, JSDOMWrapper>(exec, &JSSVGAnimatedLengthConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAnimatedLengthPrototypeTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedLengthPrototypeTable = { 1, 0, JSSVGAnimatedLengthPrototypeTableValues, 0 };
const ClassInfo JSSVGAnimatedLengthPrototype::s_info = { "SVGAnimatedLengthPrototype", &JSC::JSNonFinalObject::s_info, &JSSVGAnimatedLengthPrototypeTable, 0 };

JSObject* JSSVGAnimatedLengthPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAnimatedLength>(exec, globalObject);
}

const ClassInfo JSSVGAnimatedLength::s_info = { "SVGAnimatedLength", &JSDOMWrapper::s_info, &JSSVGAnimatedLengthTable, 0 };

JSSVGAnimatedLength::JSSVGAnimatedLength(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGAnimatedLength> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
}

void JSSVGAnimatedLength::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGAnimatedLength::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGAnimatedLengthPrototype::create(exec->globalData(), globalObject, JSSVGAnimatedLengthPrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

bool JSSVGAnimatedLength::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSSVGAnimatedLength, Base>(exec, &JSSVGAnimatedLengthTable, this, propertyName, slot);
}

bool JSSVGAnimatedLength::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSSVGAnimatedLength, Base>(exec, &JSSVGAnimatedLengthTable, this, propertyName, descriptor);
}

JSValue jsSVGAnimatedLengthBaseVal(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedLength* castedThis = static_cast<JSSVGAnimatedLength*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAnimatedLength* imp = static_cast<SVGAnimatedLength*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(static_cast<SVGPropertyTearOff<SVGLength>*>(imp->baseVal())));
    return result;
}


JSValue jsSVGAnimatedLengthAnimVal(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedLength* castedThis = static_cast<JSSVGAnimatedLength*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAnimatedLength* imp = static_cast<SVGAnimatedLength*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(static_cast<SVGPropertyTearOff<SVGLength>*>(imp->animVal())));
    return result;
}


JSValue jsSVGAnimatedLengthConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedLength* domObject = static_cast<JSSVGAnimatedLength*>(asObject(slotBase));
    return JSSVGAnimatedLength::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGAnimatedLength::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGAnimatedLengthConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGAnimatedLength* impl)
{
    return wrap<JSSVGAnimatedLength>(exec, globalObject, impl);
}

SVGAnimatedLength* toSVGAnimatedLength(JSC::JSValue value)
{
    return value.inherits(&JSSVGAnimatedLength::s_info) ? static_cast<JSSVGAnimatedLength*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
