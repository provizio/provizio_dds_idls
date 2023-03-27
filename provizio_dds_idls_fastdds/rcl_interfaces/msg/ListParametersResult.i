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
 * @file ListParametersResult.i
 * This header file contains the SWIG interface of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

%module ListParametersResult

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
#include "ListParametersResult.h"

#include <fastdds/dds/core/LoanableSequence.hpp>
%}

%import(module="fastdds") "fastdds/dds/core/LoanableCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableTypedCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableSequence.hpp"

// Include the class interfaces
%include "ListParametersResult.h"

////////////////////////////////////////////////////////
// Binding for class rcl_interfaces::msg::ListParametersResult
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore rcl_interfaces::msg::ListParametersResult::ListParametersResult(ListParametersResult&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore rcl_interfaces::msg::ListParametersResult::names(std::vector<std::string>&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore rcl_interfaces::msg::ListParametersResult::names() const;
%template(char_vector) std::vector<std::string>;

%ignore rcl_interfaces::msg::ListParametersResult::prefixes(std::vector<std::string>&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore rcl_interfaces::msg::ListParametersResult::prefixes() const;
%template(char_vector) std::vector<std::string>;


%template(_ListParametersResultSeq) eprosima::fastdds::dds::LoanableTypedCollection<rcl_interfaces::msg::ListParametersResult, std::false_type>;
%template(ListParametersResultSeq) eprosima::fastdds::dds::LoanableSequence<rcl_interfaces::msg::ListParametersResult, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<rcl_interfaces::msg::ListParametersResult, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const rcl_interfaces::msg::ListParametersResult& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}


// Include the corresponding TopicDataType
%include "ListParametersResultPubSubTypes.i"
