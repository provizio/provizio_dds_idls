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
 * @file FrameGraph.i
 * This header file contains the SWIG interface of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

%module FrameGraph

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


%{
#include "FrameGraph.h"

#include <fastdds/dds/core/LoanableSequence.hpp>
%}

%import(module="fastdds") "fastdds/dds/core/LoanableCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableTypedCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableSequence.hpp"

// Include the class interfaces
%include "FrameGraph.h"

////////////////////////////////////////////////////////
// Binding for class tf2_msgs::srv::FrameGraph_Request
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore tf2_msgs::srv::FrameGraph_Request::FrameGraph_Request(FrameGraph_Request&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore tf2_msgs::srv::FrameGraph_Request::structure_needs_at_least_one_member(uint8_t&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore tf2_msgs::srv::FrameGraph_Request::structure_needs_at_least_one_member();
%rename("%s") tf2_msgs::srv::FrameGraph_Request::structure_needs_at_least_one_member() const;


%template(_FrameGraph_RequestSeq) eprosima::fastdds::dds::LoanableTypedCollection<tf2_msgs::srv::FrameGraph_Request, std::false_type>;
%template(FrameGraph_RequestSeq) eprosima::fastdds::dds::LoanableSequence<tf2_msgs::srv::FrameGraph_Request, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<tf2_msgs::srv::FrameGraph_Request, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const tf2_msgs::srv::FrameGraph_Request& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}

////////////////////////////////////////////////////////
// Binding for class tf2_msgs::srv::FrameGraph_Response
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore tf2_msgs::srv::FrameGraph_Response::FrameGraph_Response(FrameGraph_Response&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore tf2_msgs::srv::FrameGraph_Response::frame_yaml(std::string&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore tf2_msgs::srv::FrameGraph_Response::frame_yaml();
%rename("%s") tf2_msgs::srv::FrameGraph_Response::frame_yaml() const;


%template(_FrameGraph_ResponseSeq) eprosima::fastdds::dds::LoanableTypedCollection<tf2_msgs::srv::FrameGraph_Response, std::false_type>;
%template(FrameGraph_ResponseSeq) eprosima::fastdds::dds::LoanableSequence<tf2_msgs::srv::FrameGraph_Response, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<tf2_msgs::srv::FrameGraph_Response, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const tf2_msgs::srv::FrameGraph_Response& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}


// Include the corresponding TopicDataType
%include "FrameGraphPubSubTypes.i"