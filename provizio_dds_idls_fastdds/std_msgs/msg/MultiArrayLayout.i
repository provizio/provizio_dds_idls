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
 * @file MultiArrayLayout.i
 * This header file contains the SWIG interface of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

%module MultiArrayLayout

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

%include "MultiArrayDimension.i"

%{
#include "MultiArrayLayout.h"

#include <fastdds/dds/core/LoanableSequence.hpp>
%}

%import(module="fastdds") "fastdds/dds/core/LoanableCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableTypedCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableSequence.hpp"

// Include the class interfaces
%include "MultiArrayLayout.h"

////////////////////////////////////////////////////////
// Binding for class std_msgs::msg::MultiArrayLayout
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore std_msgs::msg::MultiArrayLayout::MultiArrayLayout(MultiArrayLayout&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore std_msgs::msg::MultiArrayLayout::dim(std::vector<std_msgs::msg::MultiArrayDimension>&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore std_msgs::msg::MultiArrayLayout::dim() const;
%template(std_msgs_msg_MultiArrayDimension_vector) std::vector<std_msgs::msg::MultiArrayDimension>;

%ignore std_msgs::msg::MultiArrayLayout::data_offset(uint32_t&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore std_msgs::msg::MultiArrayLayout::data_offset();
%rename("%s") std_msgs::msg::MultiArrayLayout::data_offset() const;


%template(_MultiArrayLayoutSeq) eprosima::fastdds::dds::LoanableTypedCollection<std_msgs::msg::MultiArrayLayout, std::false_type>;
%template(MultiArrayLayoutSeq) eprosima::fastdds::dds::LoanableSequence<std_msgs::msg::MultiArrayLayout, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<std_msgs::msg::MultiArrayLayout, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const std_msgs::msg::MultiArrayLayout& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}


// Include the corresponding TopicDataType
%include "MultiArrayLayoutPubSubTypes.i"
