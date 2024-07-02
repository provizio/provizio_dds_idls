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
 * @file CompressedImage.i
 * This header file contains the SWIG interface of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

%module CompressedImage

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
#include "CompressedImage.h"

#include <fastdds/dds/core/LoanableSequence.hpp>
%}

%import(module="fastdds") "fastdds/dds/core/LoanableCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableTypedCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableSequence.hpp"

////////////////////////////////////////////////////////
// Binding for class sensor_msgs::msg::CompressedImage
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore sensor_msgs::msg::CompressedImage::CompressedImage(sensor_msgs::msg::CompressedImage&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore sensor_msgs::msg::CompressedImage::header(std_msgs::msg::Header&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::CompressedImage::header();
%rename("%s") sensor_msgs::msg::CompressedImage::header() const;


%ignore sensor_msgs::msg::CompressedImage::format(std::string&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::CompressedImage::format();
%rename("%s") sensor_msgs::msg::CompressedImage::format() const;


%ignore sensor_msgs::msg::CompressedImage::data(std::vector<uint8_t>&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::CompressedImage::data() const;
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


%template(_CompressedImageSeq) eprosima::fastdds::dds::LoanableTypedCollection<sensor_msgs::msg::CompressedImage, std::false_type>;
%template(CompressedImageSeq) eprosima::fastdds::dds::LoanableSequence<sensor_msgs::msg::CompressedImage, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<sensor_msgs::msg::CompressedImage, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const sensor_msgs::msg::CompressedImage& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}




// Include the class interfaces
%include "CompressedImage.h"

// Include the corresponding TopicDataType
%include "CompressedImagePubSubTypes.i"

