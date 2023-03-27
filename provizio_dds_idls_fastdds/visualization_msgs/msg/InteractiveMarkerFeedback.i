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
 * @file InteractiveMarkerFeedback.i
 * This header file contains the SWIG interface of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

%module InteractiveMarkerFeedback

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
%include "geometry_msgs/msg/Pose.i"

%{
#include "InteractiveMarkerFeedback.h"

#include <fastdds/dds/core/LoanableSequence.hpp>
%}

%import(module="fastdds") "fastdds/dds/core/LoanableCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableTypedCollection.hpp"
%import(module="fastdds") "fastdds/dds/core/LoanableSequence.hpp"

// Include the class interfaces
%include "InteractiveMarkerFeedback.h"







////////////////////////////////////////////////////////
// Binding for class visualization_msgs::msg::InteractiveMarkerFeedback
////////////////////////////////////////////////////////

// Ignore overloaded methods that have no application on Python
// Otherwise they will issue a warning
%ignore visualization_msgs::msg::InteractiveMarkerFeedback::InteractiveMarkerFeedback(InteractiveMarkerFeedback&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Avoid a warning ignoring all but one
%ignore visualization_msgs::msg::InteractiveMarkerFeedback::header(std_msgs::msg::Header&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore visualization_msgs::msg::InteractiveMarkerFeedback::header();
%rename("%s") visualization_msgs::msg::InteractiveMarkerFeedback::header() const;

%ignore visualization_msgs::msg::InteractiveMarkerFeedback::client_id(std::string&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore visualization_msgs::msg::InteractiveMarkerFeedback::client_id();
%rename("%s") visualization_msgs::msg::InteractiveMarkerFeedback::client_id() const;

%ignore visualization_msgs::msg::InteractiveMarkerFeedback::marker_name(std::string&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore visualization_msgs::msg::InteractiveMarkerFeedback::marker_name();
%rename("%s") visualization_msgs::msg::InteractiveMarkerFeedback::marker_name() const;

%ignore visualization_msgs::msg::InteractiveMarkerFeedback::control_name(std::string&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore visualization_msgs::msg::InteractiveMarkerFeedback::control_name();
%rename("%s") visualization_msgs::msg::InteractiveMarkerFeedback::control_name() const;

%ignore visualization_msgs::msg::InteractiveMarkerFeedback::event_type(uint8_t&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore visualization_msgs::msg::InteractiveMarkerFeedback::event_type();
%rename("%s") visualization_msgs::msg::InteractiveMarkerFeedback::event_type() const;

%ignore visualization_msgs::msg::InteractiveMarkerFeedback::pose(geometry_msgs::msg::Pose&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore visualization_msgs::msg::InteractiveMarkerFeedback::pose();
%rename("%s") visualization_msgs::msg::InteractiveMarkerFeedback::pose() const;

%ignore visualization_msgs::msg::InteractiveMarkerFeedback::menu_entry_id(uint32_t&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore visualization_msgs::msg::InteractiveMarkerFeedback::menu_entry_id();
%rename("%s") visualization_msgs::msg::InteractiveMarkerFeedback::menu_entry_id() const;

%ignore visualization_msgs::msg::InteractiveMarkerFeedback::mouse_point(geometry_msgs::msg::Point&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore visualization_msgs::msg::InteractiveMarkerFeedback::mouse_point();
%rename("%s") visualization_msgs::msg::InteractiveMarkerFeedback::mouse_point() const;

%ignore visualization_msgs::msg::InteractiveMarkerFeedback::mouse_point_valid(bool&&);

// Overloaded getter methods shadow each other and are equivalent in python
// Const accesors produced constant enums instead of arrays/dictionaries when used
// We ignore them to prevent this
%ignore visualization_msgs::msg::InteractiveMarkerFeedback::mouse_point_valid();
%rename("%s") visualization_msgs::msg::InteractiveMarkerFeedback::mouse_point_valid() const;


%template(_InteractiveMarkerFeedbackSeq) eprosima::fastdds::dds::LoanableTypedCollection<visualization_msgs::msg::InteractiveMarkerFeedback, std::false_type>;
%template(InteractiveMarkerFeedbackSeq) eprosima::fastdds::dds::LoanableSequence<visualization_msgs::msg::InteractiveMarkerFeedback, std::false_type>;
%extend eprosima::fastdds::dds::LoanableSequence<visualization_msgs::msg::InteractiveMarkerFeedback, std::false_type>
{
    size_t __len__() const
    {
        return self->length();
    }

    const visualization_msgs::msg::InteractiveMarkerFeedback& __getitem__(size_t i) const
    {
        return (*self)[i];
    }
}


// Include the corresponding TopicDataType
%include "InteractiveMarkerFeedbackPubSubTypes.i"