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
 * @file GridCells.i
 * This header file contains the SWIG interface of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

%module GridCells

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

%include "geometry_msgs/msg/Point.i"
%include "std_msgs/msg/Header.i"

%{
#include "GridCells.h"

#include <fastdds/dds/core/LoanableSequence.hpp>
%}

%import(module="fastdds") "fastdds/dds/core/LoanableCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableTypedCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableSequence.hpp"

////////////////////////////////////////////////////////
// Binding for class nav_msgs::msg::GridCells
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore nav_msgs::msg::GridCells::GridCells(GridCells&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore nav_msgs::msg::GridCells::header(std_msgs::msg::Header&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore nav_msgs::msg::GridCells::header();
%rename("%s") nav_msgs::msg::GridCells::header() const;

%ignore nav_msgs::msg::GridCells::cell_width(float&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore nav_msgs::msg::GridCells::cell_width();
%rename("%s") nav_msgs::msg::GridCells::cell_width() const;

%ignore nav_msgs::msg::GridCells::cell_height(float&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore nav_msgs::msg::GridCells::cell_height();
%rename("%s") nav_msgs::msg::GridCells::cell_height() const;

%ignore nav_msgs::msg::GridCells::cells(std::vector<geometry_msgs::msg::Point>&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore nav_msgs::msg::GridCells::cells() const;
%template(geometry_msgs_msg_Point_vector) std::vector<geometry_msgs::msg::Point>;


%template(_GridCellsSeq) eprosima::fastdds::dds::LoanableTypedCollection<nav_msgs::msg::GridCells, std::false_type>;
%template(GridCellsSeq) eprosima::fastdds::dds::LoanableSequence<nav_msgs::msg::GridCells, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<nav_msgs::msg::GridCells, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const nav_msgs::msg::GridCells& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}


// Include the class interfaces
%include "GridCells.h"

// Include the corresponding TopicDataType
%include "GridCellsPubSubTypes.i"
