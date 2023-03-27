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
 * @file AccelWithCovariance.i
 * This header file contains the SWIG interface of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

%module AccelWithCovariance

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

%include "Accel.i"

%{
#include "AccelWithCovariance.h"

#include <fastdds/dds/core/LoanableSequence.hpp>
%}

%import(module="fastdds") "fastdds/dds/core/LoanableCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableTypedCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableSequence.hpp"

// Include the class interfaces
%include "AccelWithCovariance.h"


////////////////////////////////////////////////////////
// Binding for class geometry_msgs::msg::AccelWithCovariance
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore geometry_msgs::msg::AccelWithCovariance::AccelWithCovariance(AccelWithCovariance&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore geometry_msgs::msg::AccelWithCovariance::accel(geometry_msgs::msg::Accel&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore geometry_msgs::msg::AccelWithCovariance::accel();
%rename("%s") geometry_msgs::msg::AccelWithCovariance::accel() const;

%ignore geometry_msgs::msg::AccelWithCovariance::covariance(geometry_msgs::msg::double__36&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore geometry_msgs::msg::AccelWithCovariance::covariance() const;
%template(double_36_array) std::array<double,36>;

%template(_AccelWithCovarianceSeq) eprosima::fastdds::dds::LoanableTypedCollection<geometry_msgs::msg::AccelWithCovariance, std::false_type>;
%template(AccelWithCovarianceSeq) eprosima::fastdds::dds::LoanableSequence<geometry_msgs::msg::AccelWithCovariance, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<geometry_msgs::msg::AccelWithCovariance, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const geometry_msgs::msg::AccelWithCovariance& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}


// Include the corresponding TopicDataType
%include "AccelWithCovariancePubSubTypes.i"