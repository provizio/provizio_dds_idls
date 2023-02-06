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
 * @file InteractiveMarkerFeedback.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "InteractiveMarkerFeedback.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>








visualization_msgs::msg::InteractiveMarkerFeedback::InteractiveMarkerFeedback()
{
    // m_header com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@14ac77b9

    // m_client_id com.eprosima.idl.parser.typecode.StringTypeCode@3f4cd155
    m_client_id ="";
    // m_marker_name com.eprosima.idl.parser.typecode.StringTypeCode@563a89b5
    m_marker_name ="";
    // m_control_name com.eprosima.idl.parser.typecode.StringTypeCode@506dcf55
    m_control_name ="";
    // m_event_type com.eprosima.idl.parser.typecode.PrimitiveTypeCode@270b6b5e
    m_event_type = 0;
    // m_pose com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@7e94d093

    // m_menu_entry_id com.eprosima.idl.parser.typecode.PrimitiveTypeCode@7c6189d5
    m_menu_entry_id = 0;
    // m_mouse_point com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@4248e66b

    // m_mouse_point_valid com.eprosima.idl.parser.typecode.PrimitiveTypeCode@3e6534e7
    m_mouse_point_valid = false;

}

visualization_msgs::msg::InteractiveMarkerFeedback::~InteractiveMarkerFeedback()
{









}

visualization_msgs::msg::InteractiveMarkerFeedback::InteractiveMarkerFeedback(
        const InteractiveMarkerFeedback& x)
{
    m_header = x.m_header;
    m_client_id = x.m_client_id;
    m_marker_name = x.m_marker_name;
    m_control_name = x.m_control_name;
    m_event_type = x.m_event_type;
    m_pose = x.m_pose;
    m_menu_entry_id = x.m_menu_entry_id;
    m_mouse_point = x.m_mouse_point;
    m_mouse_point_valid = x.m_mouse_point_valid;
}

visualization_msgs::msg::InteractiveMarkerFeedback::InteractiveMarkerFeedback(
        InteractiveMarkerFeedback&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_client_id = std::move(x.m_client_id);
    m_marker_name = std::move(x.m_marker_name);
    m_control_name = std::move(x.m_control_name);
    m_event_type = x.m_event_type;
    m_pose = std::move(x.m_pose);
    m_menu_entry_id = x.m_menu_entry_id;
    m_mouse_point = std::move(x.m_mouse_point);
    m_mouse_point_valid = x.m_mouse_point_valid;
}

visualization_msgs::msg::InteractiveMarkerFeedback& visualization_msgs::msg::InteractiveMarkerFeedback::operator =(
        const InteractiveMarkerFeedback& x)
{

    m_header = x.m_header;
    m_client_id = x.m_client_id;
    m_marker_name = x.m_marker_name;
    m_control_name = x.m_control_name;
    m_event_type = x.m_event_type;
    m_pose = x.m_pose;
    m_menu_entry_id = x.m_menu_entry_id;
    m_mouse_point = x.m_mouse_point;
    m_mouse_point_valid = x.m_mouse_point_valid;

    return *this;
}

visualization_msgs::msg::InteractiveMarkerFeedback& visualization_msgs::msg::InteractiveMarkerFeedback::operator =(
        InteractiveMarkerFeedback&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_client_id = std::move(x.m_client_id);
    m_marker_name = std::move(x.m_marker_name);
    m_control_name = std::move(x.m_control_name);
    m_event_type = x.m_event_type;
    m_pose = std::move(x.m_pose);
    m_menu_entry_id = x.m_menu_entry_id;
    m_mouse_point = std::move(x.m_mouse_point);
    m_mouse_point_valid = x.m_mouse_point_valid;

    return *this;
}

bool visualization_msgs::msg::InteractiveMarkerFeedback::operator ==(
        const InteractiveMarkerFeedback& x) const
{

    return (m_header == x.m_header && m_client_id == x.m_client_id && m_marker_name == x.m_marker_name && m_control_name == x.m_control_name && m_event_type == x.m_event_type && m_pose == x.m_pose && m_menu_entry_id == x.m_menu_entry_id && m_mouse_point == x.m_mouse_point && m_mouse_point_valid == x.m_mouse_point_valid);
}

bool visualization_msgs::msg::InteractiveMarkerFeedback::operator !=(
        const InteractiveMarkerFeedback& x) const
{
    return !(*this == x);
}

size_t visualization_msgs::msg::InteractiveMarkerFeedback::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += geometry_msgs::msg::Pose::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += geometry_msgs::msg::Point::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t visualization_msgs::msg::InteractiveMarkerFeedback::getCdrSerializedSize(
        const visualization_msgs::msg::InteractiveMarkerFeedback& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.client_id().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.marker_name().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.control_name().size() + 1;

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += geometry_msgs::msg::Pose::getCdrSerializedSize(data.pose(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += geometry_msgs::msg::Point::getCdrSerializedSize(data.mouse_point(), current_alignment);
    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

void visualization_msgs::msg::InteractiveMarkerFeedback::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_client_id.c_str();
    scdr << m_marker_name.c_str();
    scdr << m_control_name.c_str();
    scdr << m_event_type;
    scdr << m_pose;
    scdr << m_menu_entry_id;
    scdr << m_mouse_point;
    scdr << m_mouse_point_valid;

}

void visualization_msgs::msg::InteractiveMarkerFeedback::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_client_id;
    dcdr >> m_marker_name;
    dcdr >> m_control_name;
    dcdr >> m_event_type;
    dcdr >> m_pose;
    dcdr >> m_menu_entry_id;
    dcdr >> m_mouse_point;
    dcdr >> m_mouse_point_valid;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void visualization_msgs::msg::InteractiveMarkerFeedback::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void visualization_msgs::msg::InteractiveMarkerFeedback::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& visualization_msgs::msg::InteractiveMarkerFeedback::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& visualization_msgs::msg::InteractiveMarkerFeedback::header()
{
    return m_header;
}
/*!
 * @brief This function copies the value in member client_id
 * @param _client_id New value to be copied in member client_id
 */
void visualization_msgs::msg::InteractiveMarkerFeedback::client_id(
        const std::string& _client_id)
{
    m_client_id = _client_id;
}

/*!
 * @brief This function moves the value in member client_id
 * @param _client_id New value to be moved in member client_id
 */
void visualization_msgs::msg::InteractiveMarkerFeedback::client_id(
        std::string&& _client_id)
{
    m_client_id = std::move(_client_id);
}

/*!
 * @brief This function returns a constant reference to member client_id
 * @return Constant reference to member client_id
 */
const std::string& visualization_msgs::msg::InteractiveMarkerFeedback::client_id() const
{
    return m_client_id;
}

/*!
 * @brief This function returns a reference to member client_id
 * @return Reference to member client_id
 */
std::string& visualization_msgs::msg::InteractiveMarkerFeedback::client_id()
{
    return m_client_id;
}
/*!
 * @brief This function copies the value in member marker_name
 * @param _marker_name New value to be copied in member marker_name
 */
void visualization_msgs::msg::InteractiveMarkerFeedback::marker_name(
        const std::string& _marker_name)
{
    m_marker_name = _marker_name;
}

/*!
 * @brief This function moves the value in member marker_name
 * @param _marker_name New value to be moved in member marker_name
 */
void visualization_msgs::msg::InteractiveMarkerFeedback::marker_name(
        std::string&& _marker_name)
{
    m_marker_name = std::move(_marker_name);
}

/*!
 * @brief This function returns a constant reference to member marker_name
 * @return Constant reference to member marker_name
 */
const std::string& visualization_msgs::msg::InteractiveMarkerFeedback::marker_name() const
{
    return m_marker_name;
}

/*!
 * @brief This function returns a reference to member marker_name
 * @return Reference to member marker_name
 */
std::string& visualization_msgs::msg::InteractiveMarkerFeedback::marker_name()
{
    return m_marker_name;
}
/*!
 * @brief This function copies the value in member control_name
 * @param _control_name New value to be copied in member control_name
 */
void visualization_msgs::msg::InteractiveMarkerFeedback::control_name(
        const std::string& _control_name)
{
    m_control_name = _control_name;
}

/*!
 * @brief This function moves the value in member control_name
 * @param _control_name New value to be moved in member control_name
 */
void visualization_msgs::msg::InteractiveMarkerFeedback::control_name(
        std::string&& _control_name)
{
    m_control_name = std::move(_control_name);
}

/*!
 * @brief This function returns a constant reference to member control_name
 * @return Constant reference to member control_name
 */
const std::string& visualization_msgs::msg::InteractiveMarkerFeedback::control_name() const
{
    return m_control_name;
}

/*!
 * @brief This function returns a reference to member control_name
 * @return Reference to member control_name
 */
std::string& visualization_msgs::msg::InteractiveMarkerFeedback::control_name()
{
    return m_control_name;
}
/*!
 * @brief This function sets a value in member event_type
 * @param _event_type New value for member event_type
 */
void visualization_msgs::msg::InteractiveMarkerFeedback::event_type(
        uint8_t _event_type)
{
    m_event_type = _event_type;
}

/*!
 * @brief This function returns the value of member event_type
 * @return Value of member event_type
 */
uint8_t visualization_msgs::msg::InteractiveMarkerFeedback::event_type() const
{
    return m_event_type;
}

/*!
 * @brief This function returns a reference to member event_type
 * @return Reference to member event_type
 */
uint8_t& visualization_msgs::msg::InteractiveMarkerFeedback::event_type()
{
    return m_event_type;
}

/*!
 * @brief This function copies the value in member pose
 * @param _pose New value to be copied in member pose
 */
void visualization_msgs::msg::InteractiveMarkerFeedback::pose(
        const geometry_msgs::msg::Pose& _pose)
{
    m_pose = _pose;
}

/*!
 * @brief This function moves the value in member pose
 * @param _pose New value to be moved in member pose
 */
void visualization_msgs::msg::InteractiveMarkerFeedback::pose(
        geometry_msgs::msg::Pose&& _pose)
{
    m_pose = std::move(_pose);
}

/*!
 * @brief This function returns a constant reference to member pose
 * @return Constant reference to member pose
 */
const geometry_msgs::msg::Pose& visualization_msgs::msg::InteractiveMarkerFeedback::pose() const
{
    return m_pose;
}

/*!
 * @brief This function returns a reference to member pose
 * @return Reference to member pose
 */
geometry_msgs::msg::Pose& visualization_msgs::msg::InteractiveMarkerFeedback::pose()
{
    return m_pose;
}
/*!
 * @brief This function sets a value in member menu_entry_id
 * @param _menu_entry_id New value for member menu_entry_id
 */
void visualization_msgs::msg::InteractiveMarkerFeedback::menu_entry_id(
        uint32_t _menu_entry_id)
{
    m_menu_entry_id = _menu_entry_id;
}

/*!
 * @brief This function returns the value of member menu_entry_id
 * @return Value of member menu_entry_id
 */
uint32_t visualization_msgs::msg::InteractiveMarkerFeedback::menu_entry_id() const
{
    return m_menu_entry_id;
}

/*!
 * @brief This function returns a reference to member menu_entry_id
 * @return Reference to member menu_entry_id
 */
uint32_t& visualization_msgs::msg::InteractiveMarkerFeedback::menu_entry_id()
{
    return m_menu_entry_id;
}

/*!
 * @brief This function copies the value in member mouse_point
 * @param _mouse_point New value to be copied in member mouse_point
 */
void visualization_msgs::msg::InteractiveMarkerFeedback::mouse_point(
        const geometry_msgs::msg::Point& _mouse_point)
{
    m_mouse_point = _mouse_point;
}

/*!
 * @brief This function moves the value in member mouse_point
 * @param _mouse_point New value to be moved in member mouse_point
 */
void visualization_msgs::msg::InteractiveMarkerFeedback::mouse_point(
        geometry_msgs::msg::Point&& _mouse_point)
{
    m_mouse_point = std::move(_mouse_point);
}

/*!
 * @brief This function returns a constant reference to member mouse_point
 * @return Constant reference to member mouse_point
 */
const geometry_msgs::msg::Point& visualization_msgs::msg::InteractiveMarkerFeedback::mouse_point() const
{
    return m_mouse_point;
}

/*!
 * @brief This function returns a reference to member mouse_point
 * @return Reference to member mouse_point
 */
geometry_msgs::msg::Point& visualization_msgs::msg::InteractiveMarkerFeedback::mouse_point()
{
    return m_mouse_point;
}
/*!
 * @brief This function sets a value in member mouse_point_valid
 * @param _mouse_point_valid New value for member mouse_point_valid
 */
void visualization_msgs::msg::InteractiveMarkerFeedback::mouse_point_valid(
        bool _mouse_point_valid)
{
    m_mouse_point_valid = _mouse_point_valid;
}

/*!
 * @brief This function returns the value of member mouse_point_valid
 * @return Value of member mouse_point_valid
 */
bool visualization_msgs::msg::InteractiveMarkerFeedback::mouse_point_valid() const
{
    return m_mouse_point_valid;
}

/*!
 * @brief This function returns a reference to member mouse_point_valid
 * @return Reference to member mouse_point_valid
 */
bool& visualization_msgs::msg::InteractiveMarkerFeedback::mouse_point_valid()
{
    return m_mouse_point_valid;
}


size_t visualization_msgs::msg::InteractiveMarkerFeedback::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;












    return current_align;
}

bool visualization_msgs::msg::InteractiveMarkerFeedback::isKeyDefined()
{
    return false;
}

void visualization_msgs::msg::InteractiveMarkerFeedback::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
             
}


