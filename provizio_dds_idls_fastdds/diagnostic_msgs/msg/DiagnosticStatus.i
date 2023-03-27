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
 * @file DiagnosticStatus.i
 * This header file contains the SWIG interface of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

%module DiagnosticStatus

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

%include "KeyValue.i"

%{
#include "DiagnosticStatus.h"

#include <fastdds/dds/core/LoanableSequence.hpp>
%}

%import(module="fastdds") "fastdds/dds/core/LoanableCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableTypedCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableSequence.hpp"

// Include the class interfaces
%include "DiagnosticStatus.h"





////////////////////////////////////////////////////////
// Binding for class diagnostic_msgs::msg::DiagnosticStatus
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore diagnostic_msgs::msg::DiagnosticStatus::DiagnosticStatus(DiagnosticStatus&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore diagnostic_msgs::msg::DiagnosticStatus::level(uint8_t&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore diagnostic_msgs::msg::DiagnosticStatus::level();
%rename("%s") diagnostic_msgs::msg::DiagnosticStatus::level() const;

%ignore diagnostic_msgs::msg::DiagnosticStatus::name(std::string&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore diagnostic_msgs::msg::DiagnosticStatus::name();
%rename("%s") diagnostic_msgs::msg::DiagnosticStatus::name() const;

%ignore diagnostic_msgs::msg::DiagnosticStatus::message(std::string&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore diagnostic_msgs::msg::DiagnosticStatus::message();
%rename("%s") diagnostic_msgs::msg::DiagnosticStatus::message() const;

%ignore diagnostic_msgs::msg::DiagnosticStatus::hardware_id(std::string&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore diagnostic_msgs::msg::DiagnosticStatus::hardware_id();
%rename("%s") diagnostic_msgs::msg::DiagnosticStatus::hardware_id() const;

%ignore diagnostic_msgs::msg::DiagnosticStatus::values(std::vector<diagnostic_msgs::msg::KeyValue>&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore diagnostic_msgs::msg::DiagnosticStatus::values() const;
%template(diagnostic_msgs_msg_KeyValue_vector) std::vector<diagnostic_msgs::msg::KeyValue>;


%template(_DiagnosticStatusSeq) eprosima::fastdds::dds::LoanableTypedCollection<diagnostic_msgs::msg::DiagnosticStatus, std::false_type>;
%template(DiagnosticStatusSeq) eprosima::fastdds::dds::LoanableSequence<diagnostic_msgs::msg::DiagnosticStatus, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<diagnostic_msgs::msg::DiagnosticStatus, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const diagnostic_msgs::msg::DiagnosticStatus& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}


// Include the corresponding TopicDataType
%include "DiagnosticStatusPubSubTypes.i"
