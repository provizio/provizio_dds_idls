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
 * @file OccupancyGrid.cpp
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

#include "OccupancyGrid.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define builtin_interfaces_msg_Time_max_cdr_typesize 8ULL;
#define geometry_msgs_msg_Pose_max_cdr_typesize 56ULL;
#define geometry_msgs_msg_Point_max_cdr_typesize 24ULL;
#define geometry_msgs_msg_Quaternion_max_cdr_typesize 32ULL;
#define nav_msgs_msg_MapMetaData_max_cdr_typesize 80ULL;
#define std_msgs_msg_Header_max_cdr_typesize 268ULL;
#define nav_msgs_msg_OccupancyGrid_max_cdr_typesize 448ULL;
#define builtin_interfaces_msg_Time_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_Pose_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_Point_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_Quaternion_max_key_cdr_typesize 0ULL;
#define nav_msgs_msg_MapMetaData_max_key_cdr_typesize 0ULL;
#define std_msgs_msg_Header_max_key_cdr_typesize 0ULL;
#define nav_msgs_msg_OccupancyGrid_max_key_cdr_typesize 0ULL;

nav_msgs::msg::OccupancyGrid::OccupancyGrid()
{
    // std_msgs::msg::Header m_header

    // nav_msgs::msg::MapMetaData m_info

    // sequence<int8> m_data


}

nav_msgs::msg::OccupancyGrid::~OccupancyGrid()
{



}

nav_msgs::msg::OccupancyGrid::OccupancyGrid(
        const OccupancyGrid& x)
{
    m_header = x.m_header;
    m_info = x.m_info;
    m_data = x.m_data;
}

nav_msgs::msg::OccupancyGrid::OccupancyGrid(
        OccupancyGrid&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_info = std::move(x.m_info);
    m_data = std::move(x.m_data);
}

nav_msgs::msg::OccupancyGrid& nav_msgs::msg::OccupancyGrid::operator =(
        const OccupancyGrid& x)
{

    m_header = x.m_header;
    m_info = x.m_info;
    m_data = x.m_data;

    return *this;
}

nav_msgs::msg::OccupancyGrid& nav_msgs::msg::OccupancyGrid::operator =(
        OccupancyGrid&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_info = std::move(x.m_info);
    m_data = std::move(x.m_data);

    return *this;
}

bool nav_msgs::msg::OccupancyGrid::operator ==(
        const OccupancyGrid& x) const
{

    return (m_header == x.m_header && m_info == x.m_info && m_data == x.m_data);
}

bool nav_msgs::msg::OccupancyGrid::operator !=(
        const OccupancyGrid& x) const
{
    return !(*this == x);
}

size_t nav_msgs::msg::OccupancyGrid::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return nav_msgs_msg_OccupancyGrid_max_cdr_typesize;
}

size_t nav_msgs::msg::OccupancyGrid::getCdrSerializedSize(
        const nav_msgs::msg::OccupancyGrid& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += nav_msgs::msg::MapMetaData::getCdrSerializedSize(data.info(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.data().size() > 0)
    {
        current_alignment += (data.data().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }




    return current_alignment - initial_alignment;
}

void nav_msgs::msg::OccupancyGrid::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_info;
    scdr << m_data;

}

void nav_msgs::msg::OccupancyGrid::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_info;
    dcdr >> m_data;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void nav_msgs::msg::OccupancyGrid::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void nav_msgs::msg::OccupancyGrid::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& nav_msgs::msg::OccupancyGrid::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& nav_msgs::msg::OccupancyGrid::header()
{
    return m_header;
}
/*!
 * @brief This function copies the value in member info
 * @param _info New value to be copied in member info
 */
void nav_msgs::msg::OccupancyGrid::info(
        const nav_msgs::msg::MapMetaData& _info)
{
    m_info = _info;
}

/*!
 * @brief This function moves the value in member info
 * @param _info New value to be moved in member info
 */
void nav_msgs::msg::OccupancyGrid::info(
        nav_msgs::msg::MapMetaData&& _info)
{
    m_info = std::move(_info);
}

/*!
 * @brief This function returns a constant reference to member info
 * @return Constant reference to member info
 */
const nav_msgs::msg::MapMetaData& nav_msgs::msg::OccupancyGrid::info() const
{
    return m_info;
}

/*!
 * @brief This function returns a reference to member info
 * @return Reference to member info
 */
nav_msgs::msg::MapMetaData& nav_msgs::msg::OccupancyGrid::info()
{
    return m_info;
}
/*!
 * @brief This function copies the value in member data
 * @param _data New value to be copied in member data
 */
void nav_msgs::msg::OccupancyGrid::data(
        const std::vector<int8_t>& _data)
{
    m_data = _data;
}

/*!
 * @brief This function moves the value in member data
 * @param _data New value to be moved in member data
 */
void nav_msgs::msg::OccupancyGrid::data(
        std::vector<int8_t>&& _data)
{
    m_data = std::move(_data);
}

/*!
 * @brief This function returns a constant reference to member data
 * @return Constant reference to member data
 */
const std::vector<int8_t>& nav_msgs::msg::OccupancyGrid::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
std::vector<int8_t>& nav_msgs::msg::OccupancyGrid::data()
{
    return m_data;
}


size_t nav_msgs::msg::OccupancyGrid::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return nav_msgs_msg_OccupancyGrid_max_key_cdr_typesize;
}

bool nav_msgs::msg::OccupancyGrid::isKeyDefined()
{
    return false;
}

void nav_msgs::msg::OccupancyGrid::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


