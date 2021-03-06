//
// ALMA - Atacama Large Millimiter Array
// (c) Associated Universities Inc., 2013
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA
//
#include "bindings.h"

namespace AmbManagerJs {
    Persistent<FunctionTemplate> AmbManager::constructor_template;

    void AmbManager::Initialize(Handle<Object> target) {
        Local<FunctionTemplate> t = FunctionTemplate::New(AmbManager::New);

        t->InstanceTemplate()->SetInternalFieldCount(1);

        //NODE_SET_PROTOTYPE_METHOD(t, "flush",
         //                             AmbManager::Flush);

        constructor_template = Persistent<FunctionTemplate>::New(t);
        constructor_template->SetClassName(String::NewSymbol("AmbManager"));

        target->Set(String::NewSymbol("AmbManager"), constructor_template->GetFunction());

        //mountpoint_sym        = NODE_PSYMBOL("mountpoint");
    }

    AmbManager::AmbManager() : ObjectWrap() {}
} //namespace AmbManagerJs
