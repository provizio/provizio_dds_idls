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
 * @file GetPlan.i
 * This header file contains the SWIG interface of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

%module GetPlan

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

%include "geometry_msgs/msg/PoseStamped.i"
%include "nav_msgs/msg/Path.i"

%{
#include "GetPlan.h"

#include <fastdds/dds/core/LoanableSequence.hpp>
%}

%import(module="fastdds") "fastdds/dds/core/LoanableCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableTypedCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableSequence.hpp"

////////////////////////////////////////////////////////
// Binding for class nav_msgs::srv::GetPlan_Request
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore nav_msgs::srv::GetPlan_Request::GetPlan_Request(GetPlan_Request&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore nav_msgs::srv::GetPlan_Request::start(geometry_msgs::msg::PoseStamped&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore nav_msgs::srv::GetPlan_Request::start();
%rename("%s") nav_msgs::srv::GetPlan_Request::start() const;

%ignore nav_msgs::srv::GetPlan_Request::goal(geometry_msgs::msg::PoseStamped&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore nav_msgs::srv::GetPlan_Request::goal();
%rename("%s") nav_msgs::srv::GetPlan_Request::goal() const;

%ignore nav_msgs::srv::GetPlan_Request::tolerance(float&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore nav_msgs::srv::GetPlan_Request::tolerance();
%rename("%s") nav_msgs::srv::GetPlan_Request::tolerance() const;


%template(_GetPlan_RequestSeq) eprosima::fastdds::dds::LoanableTypedCollection<nav_msgs::srv::GetPlan_Request, std::false_type>;
%template(GetPlan_RequestSeq) eprosima::fastdds::dds::LoanableSequence<nav_msgs::srv::GetPlan_Request, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<nav_msgs::srv::GetPlan_Request, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const nav_msgs::srv::GetPlan_Request& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}

////////////////////////////////////////////////////////
// Binding for class nav_msgs::srv::GetPlan_Response
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore nav_msgs::srv::GetPlan_Response::GetPlan_Response(GetPlan_Response&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore nav_msgs::srv::GetPlan_Response::plan(nav_msgs::msg::Path&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore nav_msgs::srv::GetPlan_Response::plan();
%rename("%s") nav_msgs::srv::GetPlan_Response::plan() const;


%template(_GetPlan_ResponseSeq) eprosima::fastdds::dds::LoanableTypedCollection<nav_msgs::srv::GetPlan_Response, std::false_type>;
%template(GetPlan_ResponseSeq) eprosima::fastdds::dds::LoanableSequence<nav_msgs::srv::GetPlan_Response, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<nav_msgs::srv::GetPlan_Response, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const nav_msgs::srv::GetPlan_Response& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}


// Include the class interfaces
%include "GetPlan.h"

// Include the corresponding TopicDataType
%include "GetPlanPubSubTypes.i"
