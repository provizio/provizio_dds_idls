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
 * @file ColorRGBA.i
 * This header file contains the SWIG interface of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

%module ColorRGBA

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
#include "ColorRGBA.h"

#include <fastdds/dds/core/LoanableSequence.hpp>
%}

%import(module="fastdds") "fastdds/dds/core/LoanableCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableTypedCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableSequence.hpp"

////////////////////////////////////////////////////////
// Binding for class std_msgs::msg::ColorRGBA
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore std_msgs::msg::ColorRGBA::ColorRGBA(std_msgs::msg::ColorRGBA&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore std_msgs::msg::ColorRGBA::r(float&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore std_msgs::msg::ColorRGBA::r();
%rename("%s") std_msgs::msg::ColorRGBA::r() const;


%ignore std_msgs::msg::ColorRGBA::g(float&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore std_msgs::msg::ColorRGBA::g();
%rename("%s") std_msgs::msg::ColorRGBA::g() const;


%ignore std_msgs::msg::ColorRGBA::b(float&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore std_msgs::msg::ColorRGBA::b();
%rename("%s") std_msgs::msg::ColorRGBA::b() const;


%ignore std_msgs::msg::ColorRGBA::a(float&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore std_msgs::msg::ColorRGBA::a();
%rename("%s") std_msgs::msg::ColorRGBA::a() const;



%template(_ColorRGBASeq) eprosima::fastdds::dds::LoanableTypedCollection<std_msgs::msg::ColorRGBA, std::false_type>;
%template(ColorRGBASeq) eprosima::fastdds::dds::LoanableSequence<std_msgs::msg::ColorRGBA, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<std_msgs::msg::ColorRGBA, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const std_msgs::msg::ColorRGBA& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}




// Include the class interfaces
%include "ColorRGBA.h"

// Include the corresponding TopicDataType
%include "ColorRGBAPubSubTypes.i"

