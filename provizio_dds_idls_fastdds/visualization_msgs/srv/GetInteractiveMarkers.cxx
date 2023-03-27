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
 * @file GetInteractiveMarkers.cpp
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

#include "GetInteractiveMarkers.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define visualization_msgs_msg_InteractiveMarker_max_cdr_typesize 72510856ULL;
#define visualization_msgs_msg_InteractiveMarkerControl_max_cdr_typesize 724568ULL;
#define visualization_msgs_msg_MenuEntry_max_cdr_typesize 529ULL;
#define visualization_msgs_srv_GetInteractiveMarkers_Request_max_cdr_typesize 1ULL;
#define geometry_msgs_msg_Quaternion_max_cdr_typesize 32ULL;
#define sensor_msgs_msg_CompressedImage_max_cdr_typesize 632ULL;
#define builtin_interfaces_msg_Time_max_cdr_typesize 8ULL;
#define geometry_msgs_msg_Vector3_max_cdr_typesize 24ULL;
#define visualization_msgs_msg_MeshFile_max_cdr_typesize 364ULL;
#define visualization_msgs_srv_GetInteractiveMarkers_Response_max_cdr_typesize 7251085608ULL;
#define geometry_msgs_msg_Pose_max_cdr_typesize 56ULL;
#define visualization_msgs_msg_Marker_max_cdr_typesize 7241ULL;
#define builtin_interfaces_msg_Duration_max_cdr_typesize 8ULL;
#define visualization_msgs_msg_UVCoordinate_max_cdr_typesize 8ULL;
#define geometry_msgs_msg_Point_max_cdr_typesize 24ULL;
#define std_msgs_msg_ColorRGBA_max_cdr_typesize 16ULL;
#define std_msgs_msg_Header_max_cdr_typesize 268ULL;
#define visualization_msgs_msg_InteractiveMarker_max_key_cdr_typesize 0ULL;
#define visualization_msgs_msg_InteractiveMarkerControl_max_key_cdr_typesize 0ULL;
#define visualization_msgs_msg_MenuEntry_max_key_cdr_typesize 0ULL;
#define visualization_msgs_srv_GetInteractiveMarkers_Request_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_Quaternion_max_key_cdr_typesize 0ULL;
#define sensor_msgs_msg_CompressedImage_max_key_cdr_typesize 0ULL;
#define builtin_interfaces_msg_Time_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_Vector3_max_key_cdr_typesize 0ULL;
#define visualization_msgs_msg_MeshFile_max_key_cdr_typesize 0ULL;
#define visualization_msgs_srv_GetInteractiveMarkers_Response_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_Pose_max_key_cdr_typesize 0ULL;
#define visualization_msgs_msg_Marker_max_key_cdr_typesize 0ULL;
#define builtin_interfaces_msg_Duration_max_key_cdr_typesize 0ULL;
#define visualization_msgs_msg_UVCoordinate_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_Point_max_key_cdr_typesize 0ULL;
#define std_msgs_msg_ColorRGBA_max_key_cdr_typesize 0ULL;
#define std_msgs_msg_Header_max_key_cdr_typesize 0ULL;

visualization_msgs::srv::GetInteractiveMarkers_Request::GetInteractiveMarkers_Request()
{
    // uint8 m_structure_needs_at_least_one_member
    m_structure_needs_at_least_one_member = 0;

}

visualization_msgs::srv::GetInteractiveMarkers_Request::~GetInteractiveMarkers_Request()
{
}

visualization_msgs::srv::GetInteractiveMarkers_Request::GetInteractiveMarkers_Request(
        const GetInteractiveMarkers_Request& x)
{
    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;
}

visualization_msgs::srv::GetInteractiveMarkers_Request::GetInteractiveMarkers_Request(
        GetInteractiveMarkers_Request&& x) noexcept 
{
    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;
}

visualization_msgs::srv::GetInteractiveMarkers_Request& visualization_msgs::srv::GetInteractiveMarkers_Request::operator =(
        const GetInteractiveMarkers_Request& x)
{

    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;

    return *this;
}

visualization_msgs::srv::GetInteractiveMarkers_Request& visualization_msgs::srv::GetInteractiveMarkers_Request::operator =(
        GetInteractiveMarkers_Request&& x) noexcept
{

    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;

    return *this;
}

bool visualization_msgs::srv::GetInteractiveMarkers_Request::operator ==(
        const GetInteractiveMarkers_Request& x) const
{

    return (m_structure_needs_at_least_one_member == x.m_structure_needs_at_least_one_member);
}

bool visualization_msgs::srv::GetInteractiveMarkers_Request::operator !=(
        const GetInteractiveMarkers_Request& x) const
{
    return !(*this == x);
}

size_t visualization_msgs::srv::GetInteractiveMarkers_Request::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return visualization_msgs_srv_GetInteractiveMarkers_Request_max_cdr_typesize;
}

size_t visualization_msgs::srv::GetInteractiveMarkers_Request::getCdrSerializedSize(
        const visualization_msgs::srv::GetInteractiveMarkers_Request& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

void visualization_msgs::srv::GetInteractiveMarkers_Request::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_structure_needs_at_least_one_member;

}

void visualization_msgs::srv::GetInteractiveMarkers_Request::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_structure_needs_at_least_one_member;
}

/*!
 * @brief This function sets a value in member structure_needs_at_least_one_member
 * @param _structure_needs_at_least_one_member New value for member structure_needs_at_least_one_member
 */
void visualization_msgs::srv::GetInteractiveMarkers_Request::structure_needs_at_least_one_member(
        uint8_t _structure_needs_at_least_one_member)
{
    m_structure_needs_at_least_one_member = _structure_needs_at_least_one_member;
}

/*!
 * @brief This function returns the value of member structure_needs_at_least_one_member
 * @return Value of member structure_needs_at_least_one_member
 */
uint8_t visualization_msgs::srv::GetInteractiveMarkers_Request::structure_needs_at_least_one_member() const
{
    return m_structure_needs_at_least_one_member;
}

/*!
 * @brief This function returns a reference to member structure_needs_at_least_one_member
 * @return Reference to member structure_needs_at_least_one_member
 */
uint8_t& visualization_msgs::srv::GetInteractiveMarkers_Request::structure_needs_at_least_one_member()
{
    return m_structure_needs_at_least_one_member;
}



size_t visualization_msgs::srv::GetInteractiveMarkers_Request::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return visualization_msgs_srv_GetInteractiveMarkers_Request_max_key_cdr_typesize;
}

bool visualization_msgs::srv::GetInteractiveMarkers_Request::isKeyDefined()
{
    return false;
}

void visualization_msgs::srv::GetInteractiveMarkers_Request::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

visualization_msgs::srv::GetInteractiveMarkers_Response::GetInteractiveMarkers_Response()
{
    // unsigned long long m_sequence_number
    m_sequence_number = 0;
    // sequence<visualization_msgs::msg::InteractiveMarker> m_markers


}

visualization_msgs::srv::GetInteractiveMarkers_Response::~GetInteractiveMarkers_Response()
{


}

visualization_msgs::srv::GetInteractiveMarkers_Response::GetInteractiveMarkers_Response(
        const GetInteractiveMarkers_Response& x)
{
    m_sequence_number = x.m_sequence_number;
    m_markers = x.m_markers;
}

visualization_msgs::srv::GetInteractiveMarkers_Response::GetInteractiveMarkers_Response(
        GetInteractiveMarkers_Response&& x) noexcept 
{
    m_sequence_number = x.m_sequence_number;
    m_markers = std::move(x.m_markers);
}

visualization_msgs::srv::GetInteractiveMarkers_Response& visualization_msgs::srv::GetInteractiveMarkers_Response::operator =(
        const GetInteractiveMarkers_Response& x)
{

    m_sequence_number = x.m_sequence_number;
    m_markers = x.m_markers;

    return *this;
}

visualization_msgs::srv::GetInteractiveMarkers_Response& visualization_msgs::srv::GetInteractiveMarkers_Response::operator =(
        GetInteractiveMarkers_Response&& x) noexcept
{

    m_sequence_number = x.m_sequence_number;
    m_markers = std::move(x.m_markers);

    return *this;
}

bool visualization_msgs::srv::GetInteractiveMarkers_Response::operator ==(
        const GetInteractiveMarkers_Response& x) const
{

    return (m_sequence_number == x.m_sequence_number && m_markers == x.m_markers);
}

bool visualization_msgs::srv::GetInteractiveMarkers_Response::operator !=(
        const GetInteractiveMarkers_Response& x) const
{
    return !(*this == x);
}

size_t visualization_msgs::srv::GetInteractiveMarkers_Response::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return visualization_msgs_srv_GetInteractiveMarkers_Response_max_cdr_typesize;
}

size_t visualization_msgs::srv::GetInteractiveMarkers_Response::getCdrSerializedSize(
        const visualization_msgs::srv::GetInteractiveMarkers_Response& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.markers().size(); ++a)
    {
        current_alignment += visualization_msgs::msg::InteractiveMarker::getCdrSerializedSize(data.markers().at(a), current_alignment);}


    return current_alignment - initial_alignment;
}

void visualization_msgs::srv::GetInteractiveMarkers_Response::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_sequence_number;
    scdr << m_markers;

}

void visualization_msgs::srv::GetInteractiveMarkers_Response::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_sequence_number;
    dcdr >> m_markers;
}

/*!
 * @brief This function sets a value in member sequence_number
 * @param _sequence_number New value for member sequence_number
 */
void visualization_msgs::srv::GetInteractiveMarkers_Response::sequence_number(
        uint64_t _sequence_number)
{
    m_sequence_number = _sequence_number;
}

/*!
 * @brief This function returns the value of member sequence_number
 * @return Value of member sequence_number
 */
uint64_t visualization_msgs::srv::GetInteractiveMarkers_Response::sequence_number() const
{
    return m_sequence_number;
}

/*!
 * @brief This function returns a reference to member sequence_number
 * @return Reference to member sequence_number
 */
uint64_t& visualization_msgs::srv::GetInteractiveMarkers_Response::sequence_number()
{
    return m_sequence_number;
}

/*!
 * @brief This function copies the value in member markers
 * @param _markers New value to be copied in member markers
 */
void visualization_msgs::srv::GetInteractiveMarkers_Response::markers(
        const std::vector<visualization_msgs::msg::InteractiveMarker>& _markers)
{
    m_markers = _markers;
}

/*!
 * @brief This function moves the value in member markers
 * @param _markers New value to be moved in member markers
 */
void visualization_msgs::srv::GetInteractiveMarkers_Response::markers(
        std::vector<visualization_msgs::msg::InteractiveMarker>&& _markers)
{
    m_markers = std::move(_markers);
}

/*!
 * @brief This function returns a constant reference to member markers
 * @return Constant reference to member markers
 */
const std::vector<visualization_msgs::msg::InteractiveMarker>& visualization_msgs::srv::GetInteractiveMarkers_Response::markers() const
{
    return m_markers;
}

/*!
 * @brief This function returns a reference to member markers
 * @return Reference to member markers
 */
std::vector<visualization_msgs::msg::InteractiveMarker>& visualization_msgs::srv::GetInteractiveMarkers_Response::markers()
{
    return m_markers;
}


size_t visualization_msgs::srv::GetInteractiveMarkers_Response::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return visualization_msgs_srv_GetInteractiveMarkers_Response_max_key_cdr_typesize;
}

bool visualization_msgs::srv::GetInteractiveMarkers_Response::isKeyDefined()
{
    return false;
}

void visualization_msgs::srv::GetInteractiveMarkers_Response::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

