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
 * @file Point.i
 * This header file contains the SWIG interface of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

%module Point

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
#include "Point.h"

#include <fastdds/dds/core/LoanableSequence.hpp>
%}

%import(module="fastdds") "fastdds/dds/core/LoanableCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableTypedCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableSequence.hpp"

////////////////////////////////////////////////////////
// Binding for class geometry_msgs::msg::Point
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore geometry_msgs::msg::Point::Point(Point&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore geometry_msgs::msg::Point::x(double&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore geometry_msgs::msg::Point::x();
%rename("%s") geometry_msgs::msg::Point::x() const;

%ignore geometry_msgs::msg::Point::y(double&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore geometry_msgs::msg::Point::y();
%rename("%s") geometry_msgs::msg::Point::y() const;

%ignore geometry_msgs::msg::Point::z(double&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore geometry_msgs::msg::Point::z();
%rename("%s") geometry_msgs::msg::Point::z() const;


%template(_PointSeq) eprosima::fastdds::dds::LoanableTypedCollection<geometry_msgs::msg::Point, std::false_type>;
%template(PointSeq) eprosima::fastdds::dds::LoanableSequence<geometry_msgs::msg::Point, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<geometry_msgs::msg::Point, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const geometry_msgs::msg::Point& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}


// Include the class interfaces
%include "Point.h"

// Include the corresponding TopicDataType
%include "PointPubSubTypes.i"
