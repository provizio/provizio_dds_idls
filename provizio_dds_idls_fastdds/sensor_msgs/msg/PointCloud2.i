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
 * @file PointCloud2.i
 * This header file contains the SWIG interface of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

%module PointCloud2

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
%include "PointField.i"

%{
#include "PointCloud2.h"

#include <fastdds/dds/core/LoanableSequence.hpp>
%}

%import(module="fastdds") "fastdds/dds/core/LoanableCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableTypedCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableSequence.hpp"

////////////////////////////////////////////////////////
// Binding for class sensor_msgs::msg::PointCloud2
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore sensor_msgs::msg::PointCloud2::PointCloud2(sensor_msgs::msg::PointCloud2&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore sensor_msgs::msg::PointCloud2::header(std_msgs::msg::Header&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::PointCloud2::header();
%rename("%s") sensor_msgs::msg::PointCloud2::header() const;


%ignore sensor_msgs::msg::PointCloud2::height(uint32_t&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::PointCloud2::height();
%rename("%s") sensor_msgs::msg::PointCloud2::height() const;


%ignore sensor_msgs::msg::PointCloud2::width(uint32_t&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::PointCloud2::width();
%rename("%s") sensor_msgs::msg::PointCloud2::width() const;


%ignore sensor_msgs::msg::PointCloud2::fields(std::vector<sensor_msgs::msg::PointField>&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::PointCloud2::fields() const;
%template(
sensor_msgs_msg_PointField_vector
) std::vector<sensor_msgs::msg::PointField>;

%ignore sensor_msgs::msg::PointCloud2::is_bigendian(bool&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::PointCloud2::is_bigendian();
%rename("%s") sensor_msgs::msg::PointCloud2::is_bigendian() const;


%ignore sensor_msgs::msg::PointCloud2::point_step(uint32_t&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::PointCloud2::point_step();
%rename("%s") sensor_msgs::msg::PointCloud2::point_step() const;


%ignore sensor_msgs::msg::PointCloud2::row_step(uint32_t&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::PointCloud2::row_step();
%rename("%s") sensor_msgs::msg::PointCloud2::row_step() const;


%ignore sensor_msgs::msg::PointCloud2::data(std::vector<uint8_t>&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::PointCloud2::data() const;
%extend std::vector<uint8_t>
{
    const uint8_t* get_buffer() const
    {
        return self->data();
    }
}

%template(
uint8_t_vector
) std::vector<uint8_t>;

%ignore sensor_msgs::msg::PointCloud2::is_dense(bool&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::PointCloud2::is_dense();
%rename("%s") sensor_msgs::msg::PointCloud2::is_dense() const;



%template(_PointCloud2Seq) eprosima::fastdds::dds::LoanableTypedCollection<sensor_msgs::msg::PointCloud2, std::false_type>;
%template(PointCloud2Seq) eprosima::fastdds::dds::LoanableSequence<sensor_msgs::msg::PointCloud2, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<sensor_msgs::msg::PointCloud2, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const sensor_msgs::msg::PointCloud2& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}




// Include the class interfaces
%include "PointCloud2.h"

// Include the corresponding TopicDataType
%include "PointCloud2PubSubTypes.i"

