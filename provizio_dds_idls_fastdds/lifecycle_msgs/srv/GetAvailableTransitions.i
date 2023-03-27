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
 * @file GetAvailableTransitions.i
 * This header file contains the SWIG interface of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

%module GetAvailableTransitions

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

%include "lifecycle_msgs/msg/TransitionDescription.i"

%{
#include "GetAvailableTransitions.h"

#include <fastdds/dds/core/LoanableSequence.hpp>
%}

%import(module="fastdds") "fastdds/dds/core/LoanableCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableTypedCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableSequence.hpp"

// Include the class interfaces
%include "GetAvailableTransitions.h"

////////////////////////////////////////////////////////
// Binding for class lifecycle_msgs::srv::GetAvailableTransitions_Request
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore lifecycle_msgs::srv::GetAvailableTransitions_Request::GetAvailableTransitions_Request(GetAvailableTransitions_Request&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore lifecycle_msgs::srv::GetAvailableTransitions_Request::structure_needs_at_least_one_member(uint8_t&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore lifecycle_msgs::srv::GetAvailableTransitions_Request::structure_needs_at_least_one_member();
%rename("%s") lifecycle_msgs::srv::GetAvailableTransitions_Request::structure_needs_at_least_one_member() const;


%template(_GetAvailableTransitions_RequestSeq) eprosima::fastdds::dds::LoanableTypedCollection<lifecycle_msgs::srv::GetAvailableTransitions_Request, std::false_type>;
%template(GetAvailableTransitions_RequestSeq) eprosima::fastdds::dds::LoanableSequence<lifecycle_msgs::srv::GetAvailableTransitions_Request, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<lifecycle_msgs::srv::GetAvailableTransitions_Request, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const lifecycle_msgs::srv::GetAvailableTransitions_Request& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}

////////////////////////////////////////////////////////
// Binding for class lifecycle_msgs::srv::GetAvailableTransitions_Response
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore lifecycle_msgs::srv::GetAvailableTransitions_Response::GetAvailableTransitions_Response(GetAvailableTransitions_Response&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore lifecycle_msgs::srv::GetAvailableTransitions_Response::available_transitions(std::vector<lifecycle_msgs::msg::TransitionDescription>&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore lifecycle_msgs::srv::GetAvailableTransitions_Response::available_transitions() const;
%template(lifecycle_msgs_msg_TransitionDescription_vector) std::vector<lifecycle_msgs::msg::TransitionDescription>;


%template(_GetAvailableTransitions_ResponseSeq) eprosima::fastdds::dds::LoanableTypedCollection<lifecycle_msgs::srv::GetAvailableTransitions_Response, std::false_type>;
%template(GetAvailableTransitions_ResponseSeq) eprosima::fastdds::dds::LoanableSequence<lifecycle_msgs::srv::GetAvailableTransitions_Response, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<lifecycle_msgs::srv::GetAvailableTransitions_Response, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const lifecycle_msgs::srv::GetAvailableTransitions_Response& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}


// Include the corresponding TopicDataType
%include "GetAvailableTransitionsPubSubTypes.i"
