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
 * @file NavSatStatus.cpp
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

#include "NavSatStatus.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define sensor_msgs_msg_NavSatStatus_max_cdr_typesize 4ULL;
#define sensor_msgs_msg_NavSatStatus_max_key_cdr_typesize 0ULL;










sensor_msgs::msg::NavSatStatus::NavSatStatus()
{
    // int8 m_status
    m_status = 0;
    // unsigned short m_service
    m_service = 0;

}

sensor_msgs::msg::NavSatStatus::~NavSatStatus()
{


}

sensor_msgs::msg::NavSatStatus::NavSatStatus(
        const NavSatStatus& x)
{
    m_status = x.m_status;
    m_service = x.m_service;
}

sensor_msgs::msg::NavSatStatus::NavSatStatus(
        NavSatStatus&& x) noexcept 
{
    m_status = x.m_status;
    m_service = x.m_service;
}

sensor_msgs::msg::NavSatStatus& sensor_msgs::msg::NavSatStatus::operator =(
        const NavSatStatus& x)
{

    m_status = x.m_status;
    m_service = x.m_service;

    return *this;
}

sensor_msgs::msg::NavSatStatus& sensor_msgs::msg::NavSatStatus::operator =(
        NavSatStatus&& x) noexcept
{

    m_status = x.m_status;
    m_service = x.m_service;

    return *this;
}

bool sensor_msgs::msg::NavSatStatus::operator ==(
        const NavSatStatus& x) const
{

    return (m_status == x.m_status && m_service == x.m_service);
}

bool sensor_msgs::msg::NavSatStatus::operator !=(
        const NavSatStatus& x) const
{
    return !(*this == x);
}

size_t sensor_msgs::msg::NavSatStatus::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return sensor_msgs_msg_NavSatStatus_max_cdr_typesize;
}

size_t sensor_msgs::msg::NavSatStatus::getCdrSerializedSize(
        const sensor_msgs::msg::NavSatStatus& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);



    return current_alignment - initial_alignment;
}

void sensor_msgs::msg::NavSatStatus::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_status;
    scdr << m_service;

}

void sensor_msgs::msg::NavSatStatus::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_status;
    dcdr >> m_service;
}

/*!
 * @brief This function sets a value in member status
 * @param _status New value for member status
 */
void sensor_msgs::msg::NavSatStatus::status(
        int8_t _status)
{
    m_status = _status;
}

/*!
 * @brief This function returns the value of member status
 * @return Value of member status
 */
int8_t sensor_msgs::msg::NavSatStatus::status() const
{
    return m_status;
}

/*!
 * @brief This function returns a reference to member status
 * @return Reference to member status
 */
int8_t& sensor_msgs::msg::NavSatStatus::status()
{
    return m_status;
}

/*!
 * @brief This function sets a value in member service
 * @param _service New value for member service
 */
void sensor_msgs::msg::NavSatStatus::service(
        uint16_t _service)
{
    m_service = _service;
}

/*!
 * @brief This function returns the value of member service
 * @return Value of member service
 */
uint16_t sensor_msgs::msg::NavSatStatus::service() const
{
    return m_service;
}

/*!
 * @brief This function returns a reference to member service
 * @return Reference to member service
 */
uint16_t& sensor_msgs::msg::NavSatStatus::service()
{
    return m_service;
}



size_t sensor_msgs::msg::NavSatStatus::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return sensor_msgs_msg_NavSatStatus_max_key_cdr_typesize;
}

bool sensor_msgs::msg::NavSatStatus::isKeyDefined()
{
    return false;
}

void sensor_msgs::msg::NavSatStatus::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


