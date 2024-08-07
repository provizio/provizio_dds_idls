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
 * @file nav_sat_fix_with_heading.i
 * This header file contains the SWIG interface of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

%module nav_sat_fix_with_heading

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
#include "nav_sat_fix_with_heading.h"

#include <fastdds/dds/core/LoanableSequence.hpp>
%}

%import(module="fastdds") "fastdds/dds/core/LoanableCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableTypedCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableSequence.hpp"

////////////////////////////////////////////////////////
// Binding for class provizio::msg::nav_sat_fix_with_heading
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore provizio::msg::nav_sat_fix_with_heading::nav_sat_fix_with_heading(provizio::msg::nav_sat_fix_with_heading&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore provizio::msg::nav_sat_fix_with_heading::header(std_msgs::msg::Header&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore provizio::msg::nav_sat_fix_with_heading::header();
%rename("%s") provizio::msg::nav_sat_fix_with_heading::header() const;


%ignore provizio::msg::nav_sat_fix_with_heading::latitude(double&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore provizio::msg::nav_sat_fix_with_heading::latitude();
%rename("%s") provizio::msg::nav_sat_fix_with_heading::latitude() const;


%ignore provizio::msg::nav_sat_fix_with_heading::longitude(double&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore provizio::msg::nav_sat_fix_with_heading::longitude();
%rename("%s") provizio::msg::nav_sat_fix_with_heading::longitude() const;


%ignore provizio::msg::nav_sat_fix_with_heading::altitude(double&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore provizio::msg::nav_sat_fix_with_heading::altitude();
%rename("%s") provizio::msg::nav_sat_fix_with_heading::altitude() const;


%ignore provizio::msg::nav_sat_fix_with_heading::heading(double&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore provizio::msg::nav_sat_fix_with_heading::heading();
%rename("%s") provizio::msg::nav_sat_fix_with_heading::heading() const;



%template(_nav_sat_fix_with_headingSeq) eprosima::fastdds::dds::LoanableTypedCollection<provizio::msg::nav_sat_fix_with_heading, std::false_type>;
%template(nav_sat_fix_with_headingSeq) eprosima::fastdds::dds::LoanableSequence<provizio::msg::nav_sat_fix_with_heading, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<provizio::msg::nav_sat_fix_with_heading, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const provizio::msg::nav_sat_fix_with_heading& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}




// Include the class interfaces
%include "nav_sat_fix_with_heading.h"

// Include the corresponding TopicDataType
%include "nav_sat_fix_with_headingPubSubTypes.i"

