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

#ifndef JSEvent_h
#define JSEvent_h

#include "Event.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSEvent : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSEvent* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Event> impl)
    {
        JSEvent* ptr = new (JSC::allocateCell<JSEvent>(globalObject->globalData().heap)) JSEvent(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);

    // Custom attributes
    JSC::JSValue clipboardData(JSC::ExecState*) const;
    Event* impl() const { return m_impl.get(); }

private:
    RefPtr<Event> m_impl;
protected:
    JSEvent(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<Event>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, Event*);
Event* toEvent(JSC::JSValue);

class JSEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSEventPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSEventPrototype* ptr = new (JSC::allocateCell<JSEventPrototype>(globalData.heap)) JSEventPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSEventPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSEventConstructor : public DOMConstructorObject {
private:
    JSEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSEventConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSEventConstructor* ptr = new (JSC::allocateCell<JSEventConstructor>(*exec->heap())) JSEventConstructor(structure, globalObject);
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
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSEvent(JSC::ExecState*);
    virtual JSC::ConstructType getConstructData(JSC::ConstructData&);
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsEventPrototypeFunctionStopPropagation(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsEventPrototypeFunctionPreventDefault(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsEventPrototypeFunctionInitEvent(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsEventPrototypeFunctionStopImmediatePropagation(JSC::ExecState*);
// Attributes

JSC::JSValue jsEventType(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventTarget(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventCurrentTarget(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventEventPhase(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventBubbles(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventCancelable(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventTimeStamp(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventDefaultPrevented(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventSrcElement(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventReturnValue(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSEventReturnValue(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsEventCancelBubble(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSEventCancelBubble(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsEventClipboardData(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
// Constants

JSC::JSValue jsEventCAPTURING_PHASE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventAT_TARGET(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventBUBBLING_PHASE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventMOUSEDOWN(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventMOUSEUP(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventMOUSEOVER(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventMOUSEOUT(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventMOUSEMOVE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventMOUSEDRAG(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventCLICK(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventDBLCLICK(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventKEYDOWN(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventKEYUP(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventKEYPRESS(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventDRAGDROP(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventFOCUS(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventBLUR(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventSELECT(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsEventCHANGE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif
