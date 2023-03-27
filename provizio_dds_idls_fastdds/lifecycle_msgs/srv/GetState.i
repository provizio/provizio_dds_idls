// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file GetState.i
 * This header file contains the SWIG interface of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

%module GetState

// SWIG helper modules
%include "stdint.i"
%include "std_string.i"
%include "std_vector.i"
%include "std_array.i"
%include "std_map.i"
%include "typemaps.i"

// Assignemt operators are ignored, as there is no such thing in Python.
// Trying to export them issues a warning
%ignore *::operator=;

// Macro declarations
// Any macro used on the Fast DDS header files will give an error if it is not redefined here
#define RTPS_DllAPI
#define eProsima_user_DllExport

%include "lifecycle_msgs/msg/State.i"

%{
#include "GetState.h"

#include <fastdds/dds/core/LoanableSequence.hpp>
%}

%import(module="fastdds") "fastdds/dds/core/LoanableCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableTypedCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableSequence.hpp"

// Include the class interfaces
%include "GetState.h"

////////////////////////////////////////////////////////
// Binding for class lifecycle_msgs::srv::GetState_Request
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore lifecycle_msgs::srv::GetState_Request::GetState_Request(GetState_Request&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore lifecycle_msgs::srv::GetState_Request::structure_needs_at_least_one_member(uint8_t&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore lifecycle_msgs::srv::GetState_Request::structure_needs_at_least_one_member();
%rename("%s") lifecycle_msgs::srv::GetState_Request::structure_needs_at_least_one_member() const;


%template(_GetState_RequestSeq) eprosima::fastdds::dds::LoanableTypedCollection<lifecycle_msgs::srv::GetState_Request, std::false_type>;
%template(GetState_RequestSeq) eprosima::fastdds::dds::LoanableSequence<lifecycle_msgs::srv::GetState_Request, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<lifecycle_msgs::srv::GetState_Request, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const lifecycle_msgs::srv::GetState_Request& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}

////////////////////////////////////////////////////////
// Binding for class lifecycle_msgs::srv::GetState_Response
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore lifecycle_msgs::srv::GetState_Response::GetState_Response(GetState_Response&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore lifecycle_msgs::srv::GetState_Response::current_state(lifecycle_msgs::msg::State&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore lifecycle_msgs::srv::GetState_Response::current_state();
%rename("%s") lifecycle_msgs::srv::GetState_Response::current_state() const;


%template(_GetState_ResponseSeq) eprosima::fastdds::dds::LoanableTypedCollection<lifecycle_msgs::srv::GetState_Response, std::false_type>;
%template(GetState_ResponseSeq) eprosima::fastdds::dds::LoanableSequence<lifecycle_msgs::srv::GetState_Response, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<lifecycle_msgs::srv::GetState_Response, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const lifecycle_msgs::srv::GetState_Response& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}


// Include the corresponding TopicDataType
%include "GetStatePubSubTypes.i"