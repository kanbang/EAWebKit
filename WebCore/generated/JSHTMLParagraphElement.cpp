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
#include "JSHTMLParagraphElement.h"

#include "HTMLNames.h"
#include "HTMLParagraphElement.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLParagraphElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLParagraphElementTableValues[] =
{
    { "align", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLParagraphElementAlign), (intptr_t)setJSHTMLParagraphElementAlign THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLParagraphElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLParagraphElementTable = { 5, 3, JSHTMLParagraphElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLParagraphElementConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLParagraphElementConstructorTable = { 1, 0, JSHTMLParagraphElementConstructorTableValues, 0 };
class JSHTMLParagraphElementConstructor : public DOMConstructorObject {
private:
    JSHTMLParagraphElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLParagraphElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLParagraphElementConstructor* ptr = new (JSC::allocateCell<JSHTMLParagraphElementConstructor>(*exec->heap())) JSHTMLParagraphElementConstructor(structure, globalObject);
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

const ClassInfo JSHTMLParagraphElementConstructor::s_info = { "HTMLParagraphElementConstructor", &DOMConstructorObject::s_info, &JSHTMLParagraphElementConstructorTable, 0 };

JSHTMLParagraphElementConstructor::JSHTMLParagraphElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLParagraphElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSHTMLParagraphElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLParagraphElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLParagraphElementConstructor, JSDOMWrapper>(exec, &JSHTMLParagraphElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLParagraphElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLParagraphElementConstructor, JSDOMWrapper>(exec, &JSHTMLParagraphElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLParagraphElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLParagraphElementPrototypeTable = { 1, 0, JSHTMLParagraphElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLParagraphElementPrototype::s_info = { "HTMLParagraphElementPrototype", &JSC::JSNonFinalObject::s_info, &JSHTMLParagraphElementPrototypeTable, 0 };

JSObject* JSHTMLParagraphElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLParagraphElement>(exec, globalObject);
}

const ClassInfo JSHTMLParagraphElement::s_info = { "HTMLParagraphElement", &JSHTMLElement::s_info, &JSHTMLParagraphElementTable, 0 };

JSHTMLParagraphElement::JSHTMLParagraphElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLParagraphElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLParagraphElement::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLParagraphElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSHTMLParagraphElementPrototype::create(exec->globalData(), globalObject, JSHTMLParagraphElementPrototype::createStructure(exec->globalData(), globalObject, JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLParagraphElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSHTMLParagraphElement, Base>(exec, &JSHTMLParagraphElementTable, this, propertyName, slot);
}

bool JSHTMLParagraphElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSHTMLParagraphElement, Base>(exec, &JSHTMLParagraphElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLParagraphElementAlign(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLParagraphElement* castedThis = static_cast<JSHTMLParagraphElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLParagraphElement* imp = static_cast<HTMLParagraphElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::alignAttr));
    return result;
}


JSValue jsHTMLParagraphElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLParagraphElement* domObject = static_cast<JSHTMLParagraphElement*>(asObject(slotBase));
    return JSHTMLParagraphElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLParagraphElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    lookupPut<JSHTMLParagraphElement, Base>(exec, propertyName, value, &JSHTMLParagraphElementTable, this, slot);
}

void setJSHTMLParagraphElementAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLParagraphElement* castedThis = static_cast<JSHTMLParagraphElement*>(thisObject);
    HTMLParagraphElement* imp = static_cast<HTMLParagraphElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::alignAttr, valueToStringWithNullCheck(exec, value));
}


JSValue JSHTMLParagraphElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLParagraphElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
