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

#if ENABLE(DATABASE)

#include "JSSQLStatementErrorCallback.h"

#include "ScriptExecutionContext.h"
#include <runtime/JSLock.h>

using namespace JSC;

namespace WebCore {

JSSQLStatementErrorCallback::JSSQLStatementErrorCallback(JSObject* callback, JSDOMGlobalObject* globalObject)
    : ActiveDOMCallback(globalObject->scriptExecutionContext())
    , m_data(new JSCallbackData(callback, globalObject))
{
}

JSSQLStatementErrorCallback::~JSSQLStatementErrorCallback()
{
    ScriptExecutionContext* context = scriptExecutionContext();
    // When the context is destroyed, all tasks with a reference to a callback
    // should be deleted. So if the context is 0, we are on the context thread.
    if (!context || context->isContextThread())
        delete m_data;
    else
        context->postTask(DeleteCallbackDataTask::create(m_data));
#ifndef NDEBUG
    m_data = 0;
#endif
}

// Functions

}

#endif // ENABLE(DATABASE)
