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
 * @file InteractiveMarkerUpdate.cpp
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

#include "InteractiveMarkerUpdate.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>




visualization_msgs::msg::InteractiveMarkerUpdate::InteractiveMarkerUpdate()
{
    // m_server_id com.eprosima.idl.parser.typecode.StringTypeCode@75769ab0
    m_server_id ="";
    // m_seq_num com.eprosima.idl.parser.typecode.PrimitiveTypeCode@6869a3b3
    m_seq_num = 0;
    // m_type com.eprosima.idl.parser.typecode.PrimitiveTypeCode@6ab4ba9f
    m_type = 0;
    // m_markers com.eprosima.idl.parser.typecode.SequenceTypeCode@27ace0b1

    // m_poses com.eprosima.idl.parser.typecode.SequenceTypeCode@664e5dee

    // m_erases com.eprosima.idl.parser.typecode.SequenceTypeCode@431f1eaf


}

visualization_msgs::msg::InteractiveMarkerUpdate::~InteractiveMarkerUpdate()
{






}

visualization_msgs::msg::InteractiveMarkerUpdate::InteractiveMarkerUpdate(
        const InteractiveMarkerUpdate& x)
{
    m_server_id = x.m_server_id;
    m_seq_num = x.m_seq_num;
    m_type = x.m_type;
    m_markers = x.m_markers;
    m_poses = x.m_poses;
    m_erases = x.m_erases;
}

visualization_msgs::msg::InteractiveMarkerUpdate::InteractiveMarkerUpdate(
        InteractiveMarkerUpdate&& x) noexcept 
{
    m_server_id = std::move(x.m_server_id);
    m_seq_num = x.m_seq_num;
    m_type = x.m_type;
    m_markers = std::move(x.m_markers);
    m_poses = std::move(x.m_poses);
    m_erases = std::move(x.m_erases);
}

visualization_msgs::msg::InteractiveMarkerUpdate& visualization_msgs::msg::InteractiveMarkerUpdate::operator =(
        const InteractiveMarkerUpdate& x)
{

    m_server_id = x.m_server_id;
    m_seq_num = x.m_seq_num;
    m_type = x.m_type;
    m_markers = x.m_markers;
    m_poses = x.m_poses;
    m_erases = x.m_erases;

    return *this;
}

visualization_msgs::msg::InteractiveMarkerUpdate& visualization_msgs::msg::InteractiveMarkerUpdate::operator =(
        InteractiveMarkerUpdate&& x) noexcept
{

    m_server_id = std::move(x.m_server_id);
    m_seq_num = x.m_seq_num;
    m_type = x.m_type;
    m_markers = std::move(x.m_markers);
    m_poses = std::move(x.m_poses);
    m_erases = std::move(x.m_erases);

    return *this;
}

bool visualization_msgs::msg::InteractiveMarkerUpdate::operator ==(
        const InteractiveMarkerUpdate& x) const
{

    return (m_server_id == x.m_server_id && m_seq_num == x.m_seq_num && m_type == x.m_type && m_markers == x.m_markers && m_poses == x.m_poses && m_erases == x.m_erases);
}

bool visualization_msgs::msg::InteractiveMarkerUpdate::operator !=(
        const InteractiveMarkerUpdate& x) const
{
    return !(*this == x);
}

size_t visualization_msgs::msg::InteractiveMarkerUpdate::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += visualization_msgs::msg::InteractiveMarker::getMaxCdrSerializedSize(current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += visualization_msgs::msg::InteractiveMarkerPose::getMaxCdrSerializedSize(current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;
    }

    return current_alignment - initial_alignment;
}

size_t visualization_msgs::msg::InteractiveMarkerUpdate::getCdrSerializedSize(
        const visualization_msgs::msg::InteractiveMarkerUpdate& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.server_id().size() + 1;

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.markers().size(); ++a)
    {
        current_alignment += visualization_msgs::msg::InteractiveMarker::getCdrSerializedSize(data.markers().at(a), current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.poses().size(); ++a)
    {
        current_alignment += visualization_msgs::msg::InteractiveMarkerPose::getCdrSerializedSize(data.poses().at(a), current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.erases().size(); ++a)
    {
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) +
            data.erases().at(a).size() + 1;
    }

    return current_alignment - initial_alignment;
}

void visualization_msgs::msg::InteractiveMarkerUpdate::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_server_id.c_str();
    scdr << m_seq_num;
    scdr << m_type;
    scdr << m_markers;
    scdr << m_poses;
    scdr << m_erases;

}

void visualization_msgs::msg::InteractiveMarkerUpdate::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_server_id;
    dcdr >> m_seq_num;
    dcdr >> m_type;
    dcdr >> m_markers;
    dcdr >> m_poses;
    dcdr >> m_erases;
}

/*!
 * @brief This function copies the value in member server_id
 * @param _server_id New value to be copied in member server_id
 */
void visualization_msgs::msg::InteractiveMarkerUpdate::server_id(
        const std::string& _server_id)
{
    m_server_id = _server_id;
}

/*!
 * @brief This function moves the value in member server_id
 * @param _server_id New value to be moved in member server_id
 */
void visualization_msgs::msg::InteractiveMarkerUpdate::server_id(
        std::string&& _server_id)
{
    m_server_id = std::move(_server_id);
}

/*!
 * @brief This function returns a constant reference to member server_id
 * @return Constant reference to member server_id
 */
const std::string& visualization_msgs::msg::InteractiveMarkerUpdate::server_id() const
{
    return m_server_id;
}

/*!
 * @brief This function returns a reference to member server_id
 * @return Reference to member server_id
 */
std::string& visualization_msgs::msg::InteractiveMarkerUpdate::server_id()
{
    return m_server_id;
}
/*!
 * @brief This function sets a value in member seq_num
 * @param _seq_num New value for member seq_num
 */
void visualization_msgs::msg::InteractiveMarkerUpdate::seq_num(
        uint64_t _seq_num)
{
    m_seq_num = _seq_num;
}

/*!
 * @brief This function returns the value of member seq_num
 * @return Value of member seq_num
 */
uint64_t visualization_msgs::msg::InteractiveMarkerUpdate::seq_num() const
{
    return m_seq_num;
}

/*!
 * @brief This function returns a reference to member seq_num
 * @return Reference to member seq_num
 */
uint64_t& visualization_msgs::msg::InteractiveMarkerUpdate::seq_num()
{
    return m_seq_num;
}

/*!
 * @brief This function sets a value in member type
 * @param _type New value for member type
 */
void visualization_msgs::msg::InteractiveMarkerUpdate::type(
        uint8_t _type)
{
    m_type = _type;
}

/*!
 * @brief This function returns the value of member type
 * @return Value of member type
 */
uint8_t visualization_msgs::msg::InteractiveMarkerUpdate::type() const
{
    return m_type;
}

/*!
 * @brief This function returns a reference to member type
 * @return Reference to member type
 */
uint8_t& visualization_msgs::msg::InteractiveMarkerUpdate::type()
{
    return m_type;
}

/*!
 * @brief This function copies the value in member markers
 * @param _markers New value to be copied in member markers
 */
void visualization_msgs::msg::InteractiveMarkerUpdate::markers(
        const std::vector<visualization_msgs::msg::InteractiveMarker>& _markers)
{
    m_markers = _markers;
}

/*!
 * @brief This function moves the value in member markers
 * @param _markers New value to be moved in member markers
 */
void visualization_msgs::msg::InteractiveMarkerUpdate::markers(
        std::vector<visualization_msgs::msg::InteractiveMarker>&& _markers)
{
    m_markers = std::move(_markers);
}

/*!
 * @brief This function returns a constant reference to member markers
 * @return Constant reference to member markers
 */
const std::vector<visualization_msgs::msg::InteractiveMarker>& visualization_msgs::msg::InteractiveMarkerUpdate::markers() const
{
    return m_markers;
}

/*!
 * @brief This function returns a reference to member markers
 * @return Reference to member markers
 */
std::vector<visualization_msgs::msg::InteractiveMarker>& visualization_msgs::msg::InteractiveMarkerUpdate::markers()
{
    return m_markers;
}
/*!
 * @brief This function copies the value in member poses
 * @param _poses New value to be copied in member poses
 */
void visualization_msgs::msg::InteractiveMarkerUpdate::poses(
        const std::vector<visualization_msgs::msg::InteractiveMarkerPose>& _poses)
{
    m_poses = _poses;
}

/*!
 * @brief This function moves the value in member poses
 * @param _poses New value to be moved in member poses
 */
void visualization_msgs::msg::InteractiveMarkerUpdate::poses(
        std::vector<visualization_msgs::msg::InteractiveMarkerPose>&& _poses)
{
    m_poses = std::move(_poses);
}

/*!
 * @brief This function returns a constant reference to member poses
 * @return Constant reference to member poses
 */
const std::vector<visualization_msgs::msg::InteractiveMarkerPose>& visualization_msgs::msg::InteractiveMarkerUpdate::poses() const
{
    return m_poses;
}

/*!
 * @brief This function returns a reference to member poses
 * @return Reference to member poses
 */
std::vector<visualization_msgs::msg::InteractiveMarkerPose>& visualization_msgs::msg::InteractiveMarkerUpdate::poses()
{
    return m_poses;
}
/*!
 * @brief This function copies the value in member erases
 * @param _erases New value to be copied in member erases
 */
void visualization_msgs::msg::InteractiveMarkerUpdate::erases(
        const std::vector<std::string>& _erases)
{
    m_erases = _erases;
}

/*!
 * @brief This function moves the value in member erases
 * @param _erases New value to be moved in member erases
 */
void visualization_msgs::msg::InteractiveMarkerUpdate::erases(
        std::vector<std::string>&& _erases)
{
    m_erases = std::move(_erases);
}

/*!
 * @brief This function returns a constant reference to member erases
 * @return Constant reference to member erases
 */
const std::vector<std::string>& visualization_msgs::msg::InteractiveMarkerUpdate::erases() const
{
    return m_erases;
}

/*!
 * @brief This function returns a reference to member erases
 * @return Reference to member erases
 */
std::vector<std::string>& visualization_msgs::msg::InteractiveMarkerUpdate::erases()
{
    return m_erases;
}

size_t visualization_msgs::msg::InteractiveMarkerUpdate::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;









    return current_align;
}

bool visualization_msgs::msg::InteractiveMarkerUpdate::isKeyDefined()
{
    return false;
}

void visualization_msgs::msg::InteractiveMarkerUpdate::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
          
}


