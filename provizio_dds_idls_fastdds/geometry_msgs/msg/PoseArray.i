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
 * @file PoseArray.i
 * This header file contains the SWIG interface of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

%module PoseArray

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

%include "std_msgs/msg/Header.i"
%include "Pose.i"

%{
#include "PoseArray.h"

#include <fastdds/dds/core/LoanableSequence.hpp>
%}

%import(module="fastdds") "fastdds/dds/core/LoanableCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableTypedCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableSequence.hpp"

////////////////////////////////////////////////////////
// Binding for class geometry_msgs::msg::PoseArray
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore geometry_msgs::msg::PoseArray::PoseArray(geometry_msgs::msg::PoseArray&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore geometry_msgs::msg::PoseArray::header(std_msgs::msg::Header&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore geometry_msgs::msg::PoseArray::header();
%rename("%s") geometry_msgs::msg::PoseArray::header() const;


%ignore geometry_msgs::msg::PoseArray::poses(std::vector<geometry_msgs::msg::Pose>&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore geometry_msgs::msg::PoseArray::poses() const;
%template(
geometry_msgs_msg_Pose_vector
) std::vector<geometry_msgs::msg::Pose>;


%template(_PoseArraySeq) eprosima::fastdds::dds::LoanableTypedCollection<geometry_msgs::msg::PoseArray, std::false_type>;
%template(PoseArraySeq) eprosima::fastdds::dds::LoanableSequence<geometry_msgs::msg::PoseArray, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<geometry_msgs::msg::PoseArray, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const geometry_msgs::msg::PoseArray& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}




// Include the class interfaces
%include "PoseArray.h"

// Include the corresponding TopicDataType
%include "PoseArrayPubSubTypes.i"

