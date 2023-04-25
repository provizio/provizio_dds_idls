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
 * @file MultiEchoLaserScan.i
 * This header file contains the SWIG interface of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

%module MultiEchoLaserScan

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

%include "LaserEcho.i"
%include "std_msgs/msg/Header.i"

%{
#include "MultiEchoLaserScan.h"

#include <fastdds/dds/core/LoanableSequence.hpp>
%}

%import(module="fastdds") "fastdds/dds/core/LoanableCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableTypedCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableSequence.hpp"

////////////////////////////////////////////////////////
// Binding for class sensor_msgs::msg::MultiEchoLaserScan
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore sensor_msgs::msg::MultiEchoLaserScan::MultiEchoLaserScan(MultiEchoLaserScan&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore sensor_msgs::msg::MultiEchoLaserScan::header(std_msgs::msg::Header&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::MultiEchoLaserScan::header();
%rename("%s") sensor_msgs::msg::MultiEchoLaserScan::header() const;

%ignore sensor_msgs::msg::MultiEchoLaserScan::angle_min(float&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::MultiEchoLaserScan::angle_min();
%rename("%s") sensor_msgs::msg::MultiEchoLaserScan::angle_min() const;

%ignore sensor_msgs::msg::MultiEchoLaserScan::angle_max(float&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::MultiEchoLaserScan::angle_max();
%rename("%s") sensor_msgs::msg::MultiEchoLaserScan::angle_max() const;

%ignore sensor_msgs::msg::MultiEchoLaserScan::angle_increment(float&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::MultiEchoLaserScan::angle_increment();
%rename("%s") sensor_msgs::msg::MultiEchoLaserScan::angle_increment() const;

%ignore sensor_msgs::msg::MultiEchoLaserScan::time_increment(float&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::MultiEchoLaserScan::time_increment();
%rename("%s") sensor_msgs::msg::MultiEchoLaserScan::time_increment() const;

%ignore sensor_msgs::msg::MultiEchoLaserScan::scan_time(float&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::MultiEchoLaserScan::scan_time();
%rename("%s") sensor_msgs::msg::MultiEchoLaserScan::scan_time() const;

%ignore sensor_msgs::msg::MultiEchoLaserScan::range_min(float&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::MultiEchoLaserScan::range_min();
%rename("%s") sensor_msgs::msg::MultiEchoLaserScan::range_min() const;

%ignore sensor_msgs::msg::MultiEchoLaserScan::range_max(float&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::MultiEchoLaserScan::range_max();
%rename("%s") sensor_msgs::msg::MultiEchoLaserScan::range_max() const;

%ignore sensor_msgs::msg::MultiEchoLaserScan::ranges(std::vector<sensor_msgs::msg::LaserEcho>&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::MultiEchoLaserScan::ranges() const;
%template(sensor_msgs_msg_LaserEcho_vector) std::vector<sensor_msgs::msg::LaserEcho>;

%ignore sensor_msgs::msg::MultiEchoLaserScan::intensities(std::vector<sensor_msgs::msg::LaserEcho>&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore sensor_msgs::msg::MultiEchoLaserScan::intensities() const;
%template(sensor_msgs_msg_LaserEcho_vector) std::vector<sensor_msgs::msg::LaserEcho>;


%template(_MultiEchoLaserScanSeq) eprosima::fastdds::dds::LoanableTypedCollection<sensor_msgs::msg::MultiEchoLaserScan, std::false_type>;
%template(MultiEchoLaserScanSeq) eprosima::fastdds::dds::LoanableSequence<sensor_msgs::msg::MultiEchoLaserScan, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<sensor_msgs::msg::MultiEchoLaserScan, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const sensor_msgs::msg::MultiEchoLaserScan& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}


// Include the class interfaces
%include "MultiEchoLaserScan.h"

// Include the corresponding TopicDataType
%include "MultiEchoLaserScanPubSubTypes.i"
