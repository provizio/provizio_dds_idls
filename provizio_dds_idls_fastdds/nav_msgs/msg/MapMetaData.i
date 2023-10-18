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
 * @file MapMetaData.i
 * This header file contains the SWIG interface of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

%module MapMetaData

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

%include "builtin_interfaces/msg/Time.i"
%include "geometry_msgs/msg/Pose.i"

%{
#include "MapMetaData.h"

#include <fastdds/dds/core/LoanableSequence.hpp>
%}

%import(module="fastdds") "fastdds/dds/core/LoanableCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableTypedCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableSequence.hpp"

////////////////////////////////////////////////////////
// Binding for class nav_msgs::msg::MapMetaData
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore nav_msgs::msg::MapMetaData::MapMetaData(nav_msgs::msg::MapMetaData&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore nav_msgs::msg::MapMetaData::map_load_time(builtin_interfaces::msg::Time&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore nav_msgs::msg::MapMetaData::map_load_time();
%rename("%s") nav_msgs::msg::MapMetaData::map_load_time() const;


%ignore nav_msgs::msg::MapMetaData::resolution(float&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore nav_msgs::msg::MapMetaData::resolution();
%rename("%s") nav_msgs::msg::MapMetaData::resolution() const;


%ignore nav_msgs::msg::MapMetaData::width(uint32_t&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore nav_msgs::msg::MapMetaData::width();
%rename("%s") nav_msgs::msg::MapMetaData::width() const;


%ignore nav_msgs::msg::MapMetaData::height(uint32_t&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore nav_msgs::msg::MapMetaData::height();
%rename("%s") nav_msgs::msg::MapMetaData::height() const;


%ignore nav_msgs::msg::MapMetaData::origin(geometry_msgs::msg::Pose&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore nav_msgs::msg::MapMetaData::origin();
%rename("%s") nav_msgs::msg::MapMetaData::origin() const;



%template(_MapMetaDataSeq) eprosima::fastdds::dds::LoanableTypedCollection<nav_msgs::msg::MapMetaData, std::false_type>;
%template(MapMetaDataSeq) eprosima::fastdds::dds::LoanableSequence<nav_msgs::msg::MapMetaData, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<nav_msgs::msg::MapMetaData, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const nav_msgs::msg::MapMetaData& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}




// Include the class interfaces
%include "MapMetaData.h"

// Include the corresponding TopicDataType
%include "MapMetaDataPubSubTypes.i"

