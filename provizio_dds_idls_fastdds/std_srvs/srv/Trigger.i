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
 * @file Trigger.i
 * This header file contains the SWIG interface of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

%module Trigger

// SWIG helper modules
%include "stdint.i"
%include "std_array.i"
%include "std_map.i"
%include "std_string.i"
%include "std_vector.i"
%include "typemaps.i"

// Assignemt operators are ignored, as there is no such thing in Python.
// Trying to export them issues a warning
%ignore *::operator=;

// Macro declarations
// Any macro used on the Fast DDS header files will give an error if it is not redefined here
#define RTPS_DllAPI
#define eProsima_user_DllExport


%{
#include "Trigger.h"

#include <fastdds/dds/core/LoanableSequence.hpp>
%}

%import(module="fastdds") "fastdds/dds/core/LoanableCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableTypedCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableSequence.hpp"

////////////////////////////////////////////////////////
// Binding for class std_srvs::srv::Trigger_Request
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore std_srvs::srv::Trigger_Request::Trigger_Request(std_srvs::srv::Trigger_Request&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore std_srvs::srv::Trigger_Request::structure_needs_at_least_one_member(uint8_t&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore std_srvs::srv::Trigger_Request::structure_needs_at_least_one_member();
%rename("%s") std_srvs::srv::Trigger_Request::structure_needs_at_least_one_member() const;



%template(_Trigger_RequestSeq) eprosima::fastdds::dds::LoanableTypedCollection<std_srvs::srv::Trigger_Request, std::false_type>;
%template(Trigger_RequestSeq) eprosima::fastdds::dds::LoanableSequence<std_srvs::srv::Trigger_Request, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<std_srvs::srv::Trigger_Request, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const std_srvs::srv::Trigger_Request& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}

////////////////////////////////////////////////////////
// Binding for class std_srvs::srv::Trigger_Response
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore std_srvs::srv::Trigger_Response::Trigger_Response(std_srvs::srv::Trigger_Response&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore std_srvs::srv::Trigger_Response::success(bool&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore std_srvs::srv::Trigger_Response::success();
%rename("%s") std_srvs::srv::Trigger_Response::success() const;


%ignore std_srvs::srv::Trigger_Response::message(std::string&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore std_srvs::srv::Trigger_Response::message();
%rename("%s") std_srvs::srv::Trigger_Response::message() const;



%template(_Trigger_ResponseSeq) eprosima::fastdds::dds::LoanableTypedCollection<std_srvs::srv::Trigger_Response, std::false_type>;
%template(Trigger_ResponseSeq) eprosima::fastdds::dds::LoanableSequence<std_srvs::srv::Trigger_Response, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<std_srvs::srv::Trigger_Response, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const std_srvs::srv::Trigger_Response& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}




// Include the class interfaces
%include "Trigger.h"

// Include the corresponding TopicDataType
%include "TriggerPubSubTypes.i"

