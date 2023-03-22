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
 * @file InteractiveMarker.cpp
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

#include "InteractiveMarker.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

visualization_msgs::msg::InteractiveMarker::InteractiveMarker()
{
    // m_header com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@3c82bac3

    // m_pose com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@3ddac0b6

    // m_name com.eprosima.idl.parser.typecode.StringTypeCode@446a5aa5
    m_name ="";
    // m_description com.eprosima.idl.parser.typecode.StringTypeCode@628bcf2c
    m_description ="";
    // m_scale com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4b76251c
    m_scale = 0.0;
    // m_menu_entries com.eprosima.idl.parser.typecode.SequenceTypeCode@20c283b4

    // m_controls com.eprosima.idl.parser.typecode.SequenceTypeCode@366b4a7b


}

visualization_msgs::msg::InteractiveMarker::~InteractiveMarker()
{







}

visualization_msgs::msg::InteractiveMarker::InteractiveMarker(
        const InteractiveMarker& x)
{
    m_header = x.m_header;
    m_pose = x.m_pose;
    m_name = x.m_name;
    m_description = x.m_description;
    m_scale = x.m_scale;
    m_menu_entries = x.m_menu_entries;
    m_controls = x.m_controls;
}

visualization_msgs::msg::InteractiveMarker::InteractiveMarker(
        InteractiveMarker&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_pose = std::move(x.m_pose);
    m_name = std::move(x.m_name);
    m_description = std::move(x.m_description);
    m_scale = x.m_scale;
    m_menu_entries = std::move(x.m_menu_entries);
    m_controls = std::move(x.m_controls);
}

visualization_msgs::msg::InteractiveMarker& visualization_msgs::msg::InteractiveMarker::operator =(
        const InteractiveMarker& x)
{

    m_header = x.m_header;
    m_pose = x.m_pose;
    m_name = x.m_name;
    m_description = x.m_description;
    m_scale = x.m_scale;
    m_menu_entries = x.m_menu_entries;
    m_controls = x.m_controls;

    return *this;
}

visualization_msgs::msg::InteractiveMarker& visualization_msgs::msg::InteractiveMarker::operator =(
        InteractiveMarker&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_pose = std::move(x.m_pose);
    m_name = std::move(x.m_name);
    m_description = std::move(x.m_description);
    m_scale = x.m_scale;
    m_menu_entries = std::move(x.m_menu_entries);
    m_controls = std::move(x.m_controls);

    return *this;
}

bool visualization_msgs::msg::InteractiveMarker::operator ==(
        const InteractiveMarker& x) const
{

    return (m_header == x.m_header && m_pose == x.m_pose && m_name == x.m_name && m_description == x.m_description && m_scale == x.m_scale && m_menu_entries == x.m_menu_entries && m_controls == x.m_controls);
}

bool visualization_msgs::msg::InteractiveMarker::operator !=(
        const InteractiveMarker& x) const
{
    return !(*this == x);
}

size_t visualization_msgs::msg::InteractiveMarker::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getMaxCdrSerializedSize(current_alignment);
    current_alignment += geometry_msgs::msg::Pose::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += visualization_msgs::msg::MenuEntry::getMaxCdrSerializedSize(current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += visualization_msgs::msg::InteractiveMarkerControl::getMaxCdrSerializedSize(current_alignment);}


    return current_alignment - initial_alignment;
}

size_t visualization_msgs::msg::InteractiveMarker::getCdrSerializedSize(
        const visualization_msgs::msg::InteractiveMarker& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += geometry_msgs::msg::Pose::getCdrSerializedSize(data.pose(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.name().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.description().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.menu_entries().size(); ++a)
    {
        current_alignment += visualization_msgs::msg::MenuEntry::getCdrSerializedSize(data.menu_entries().at(a), current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.controls().size(); ++a)
    {
        current_alignment += visualization_msgs::msg::InteractiveMarkerControl::getCdrSerializedSize(data.controls().at(a), current_alignment);}


    return current_alignment - initial_alignment;
}

void visualization_msgs::msg::InteractiveMarker::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_pose;
    scdr << m_name.c_str();
    scdr << m_description.c_str();
    scdr << m_scale;
    scdr << m_menu_entries;
    scdr << m_controls;

}

void visualization_msgs::msg::InteractiveMarker::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_pose;
    dcdr >> m_name;
    dcdr >> m_description;
    dcdr >> m_scale;
    dcdr >> m_menu_entries;
    dcdr >> m_controls;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void visualization_msgs::msg::InteractiveMarker::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void visualization_msgs::msg::InteractiveMarker::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& visualization_msgs::msg::InteractiveMarker::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& visualization_msgs::msg::InteractiveMarker::header()
{
    return m_header;
}
/*!
 * @brief This function copies the value in member pose
 * @param _pose New value to be copied in member pose
 */
void visualization_msgs::msg::InteractiveMarker::pose(
        const geometry_msgs::msg::Pose& _pose)
{
    m_pose = _pose;
}

/*!
 * @brief This function moves the value in member pose
 * @param _pose New value to be moved in member pose
 */
void visualization_msgs::msg::InteractiveMarker::pose(
        geometry_msgs::msg::Pose&& _pose)
{
    m_pose = std::move(_pose);
}

/*!
 * @brief This function returns a constant reference to member pose
 * @return Constant reference to member pose
 */
const geometry_msgs::msg::Pose& visualization_msgs::msg::InteractiveMarker::pose() const
{
    return m_pose;
}

/*!
 * @brief This function returns a reference to member pose
 * @return Reference to member pose
 */
geometry_msgs::msg::Pose& visualization_msgs::msg::InteractiveMarker::pose()
{
    return m_pose;
}
/*!
 * @brief This function copies the value in member name
 * @param _name New value to be copied in member name
 */
void visualization_msgs::msg::InteractiveMarker::name(
        const std::string& _name)
{
    m_name = _name;
}

/*!
 * @brief This function moves the value in member name
 * @param _name New value to be moved in member name
 */
void visualization_msgs::msg::InteractiveMarker::name(
        std::string&& _name)
{
    m_name = std::move(_name);
}

/*!
 * @brief This function returns a constant reference to member name
 * @return Constant reference to member name
 */
const std::string& visualization_msgs::msg::InteractiveMarker::name() const
{
    return m_name;
}

/*!
 * @brief This function returns a reference to member name
 * @return Reference to member name
 */
std::string& visualization_msgs::msg::InteractiveMarker::name()
{
    return m_name;
}
/*!
 * @brief This function copies the value in member description
 * @param _description New value to be copied in member description
 */
void visualization_msgs::msg::InteractiveMarker::description(
        const std::string& _description)
{
    m_description = _description;
}

/*!
 * @brief This function moves the value in member description
 * @param _description New value to be moved in member description
 */
void visualization_msgs::msg::InteractiveMarker::description(
        std::string&& _description)
{
    m_description = std::move(_description);
}

/*!
 * @brief This function returns a constant reference to member description
 * @return Constant reference to member description
 */
const std::string& visualization_msgs::msg::InteractiveMarker::description() const
{
    return m_description;
}

/*!
 * @brief This function returns a reference to member description
 * @return Reference to member description
 */
std::string& visualization_msgs::msg::InteractiveMarker::description()
{
    return m_description;
}
/*!
 * @brief This function sets a value in member scale
 * @param _scale New value for member scale
 */
void visualization_msgs::msg::InteractiveMarker::scale(
        float _scale)
{
    m_scale = _scale;
}

/*!
 * @brief This function returns the value of member scale
 * @return Value of member scale
 */
float visualization_msgs::msg::InteractiveMarker::scale() const
{
    return m_scale;
}

/*!
 * @brief This function returns a reference to member scale
 * @return Reference to member scale
 */
float& visualization_msgs::msg::InteractiveMarker::scale()
{
    return m_scale;
}

/*!
 * @brief This function copies the value in member menu_entries
 * @param _menu_entries New value to be copied in member menu_entries
 */
void visualization_msgs::msg::InteractiveMarker::menu_entries(
        const std::vector<visualization_msgs::msg::MenuEntry>& _menu_entries)
{
    m_menu_entries = _menu_entries;
}

/*!
 * @brief This function moves the value in member menu_entries
 * @param _menu_entries New value to be moved in member menu_entries
 */
void visualization_msgs::msg::InteractiveMarker::menu_entries(
        std::vector<visualization_msgs::msg::MenuEntry>&& _menu_entries)
{
    m_menu_entries = std::move(_menu_entries);
}

/*!
 * @brief This function returns a constant reference to member menu_entries
 * @return Constant reference to member menu_entries
 */
const std::vector<visualization_msgs::msg::MenuEntry>& visualization_msgs::msg::InteractiveMarker::menu_entries() const
{
    return m_menu_entries;
}

/*!
 * @brief This function returns a reference to member menu_entries
 * @return Reference to member menu_entries
 */
std::vector<visualization_msgs::msg::MenuEntry>& visualization_msgs::msg::InteractiveMarker::menu_entries()
{
    return m_menu_entries;
}
/*!
 * @brief This function copies the value in member controls
 * @param _controls New value to be copied in member controls
 */
void visualization_msgs::msg::InteractiveMarker::controls(
        const std::vector<visualization_msgs::msg::InteractiveMarkerControl>& _controls)
{
    m_controls = _controls;
}

/*!
 * @brief This function moves the value in member controls
 * @param _controls New value to be moved in member controls
 */
void visualization_msgs::msg::InteractiveMarker::controls(
        std::vector<visualization_msgs::msg::InteractiveMarkerControl>&& _controls)
{
    m_controls = std::move(_controls);
}

/*!
 * @brief This function returns a constant reference to member controls
 * @return Constant reference to member controls
 */
const std::vector<visualization_msgs::msg::InteractiveMarkerControl>& visualization_msgs::msg::InteractiveMarker::controls() const
{
    return m_controls;
}

/*!
 * @brief This function returns a reference to member controls
 * @return Reference to member controls
 */
std::vector<visualization_msgs::msg::InteractiveMarkerControl>& visualization_msgs::msg::InteractiveMarker::controls()
{
    return m_controls;
}

size_t visualization_msgs::msg::InteractiveMarker::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;










    return current_align;
}

bool visualization_msgs::msg::InteractiveMarker::isKeyDefined()
{
    return false;
}

void visualization_msgs::msg::InteractiveMarker::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
           
}


