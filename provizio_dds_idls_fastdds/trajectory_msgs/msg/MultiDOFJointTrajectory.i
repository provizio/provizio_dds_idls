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
 * @file MultiDOFJointTrajectory.i
 * This header file contains the SWIG interface of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

%module MultiDOFJointTrajectory

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

%include "MultiDOFJointTrajectoryPoint.i"
%include "std_msgs/msg/Header.i"

%{
#include "MultiDOFJointTrajectory.h"

#include <fastdds/dds/core/LoanableSequence.hpp>
%}

%import(module="fastdds") "fastdds/dds/core/LoanableCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableTypedCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableSequence.hpp"

// Include the class interfaces
%include "MultiDOFJointTrajectory.h"

////////////////////////////////////////////////////////
// Binding for class trajectory_msgs::msg::MultiDOFJointTrajectory
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore trajectory_msgs::msg::MultiDOFJointTrajectory::MultiDOFJointTrajectory(MultiDOFJointTrajectory&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore trajectory_msgs::msg::MultiDOFJointTrajectory::header(std_msgs::msg::Header&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore trajectory_msgs::msg::MultiDOFJointTrajectory::header();
%rename("%s") trajectory_msgs::msg::MultiDOFJointTrajectory::header() const;

%ignore trajectory_msgs::msg::MultiDOFJointTrajectory::joint_names(std::vector<std::string>&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore trajectory_msgs::msg::MultiDOFJointTrajectory::joint_names() const;
%template(char_vector) std::vector<std::string>;

%ignore trajectory_msgs::msg::MultiDOFJointTrajectory::points(std::vector<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint>&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore trajectory_msgs::msg::MultiDOFJointTrajectory::points() const;
%template(trajectory_msgs_msg_MultiDOFJointTrajectoryPoint_vector) std::vector<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint>;


%template(_MultiDOFJointTrajectorySeq) eprosima::fastdds::dds::LoanableTypedCollection<trajectory_msgs::msg::MultiDOFJointTrajectory, std::false_type>;
%template(MultiDOFJointTrajectorySeq) eprosima::fastdds::dds::LoanableSequence<trajectory_msgs::msg::MultiDOFJointTrajectory, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<trajectory_msgs::msg::MultiDOFJointTrajectory, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const trajectory_msgs::msg::MultiDOFJointTrajectory& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}


// Include the corresponding TopicDataType
%include "MultiDOFJointTrajectoryPubSubTypes.i"
