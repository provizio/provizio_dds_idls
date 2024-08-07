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
 * @file JointState.i
 * This header file contains the SWIG interface of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

%module JointState

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

%{
#include "JointState.h"

#include <fastdds/dds/core/LoanableSequence.hpp>
%}

%import(module="fastdds") "fastdds/dds/core/LoanableCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableTypedCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableSequence.hpp"

////////////////////////////////////////////////////////
// Binding for class sensor_msgs::msg::JointState
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore sensor_msgs::msg::JointState::JointState(sensor_msgs::msg::JointState&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore sensor_msgs::msg::JointState::header(std_msgs::msg::Header&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::JointState::header();
%rename("%s") sensor_msgs::msg::JointState::header() const;


%ignore sensor_msgs::msg::JointState::name(std::vector<std::string>&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::JointState::name() const;
%template(
std_string_vector
) std::vector<std::string>;

%ignore sensor_msgs::msg::JointState::position(std::vector<double>&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::JointState::position() const;
%extend std::vector<double>
{
    const double* get_buffer() const
    {
        return self->data();
    }
}

%template(
double_vector
) std::vector<double>;

%ignore sensor_msgs::msg::JointState::velocity(std::vector<double>&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::JointState::velocity() const;
%extend std::vector<double>
{
    const double* get_buffer() const
    {
        return self->data();
    }
}

%template(
double_vector
) std::vector<double>;

%ignore sensor_msgs::msg::JointState::effort(std::vector<double>&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::JointState::effort() const;
%extend std::vector<double>
{
    const double* get_buffer() const
    {
        return self->data();
    }
}

%template(
double_vector
) std::vector<double>;


%template(_JointStateSeq) eprosima::fastdds::dds::LoanableTypedCollection<sensor_msgs::msg::JointState, std::false_type>;
%template(JointStateSeq) eprosima::fastdds::dds::LoanableSequence<sensor_msgs::msg::JointState, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<sensor_msgs::msg::JointState, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const sensor_msgs::msg::JointState& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}




// Include the class interfaces
%include "JointState.h"

// Include the corresponding TopicDataType
%include "JointStatePubSubTypes.i"

