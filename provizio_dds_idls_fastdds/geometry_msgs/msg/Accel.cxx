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
 * @file Accel.cpp
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

#include "Accel.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define geometry_msgs_msg_Vector3_max_cdr_typesize 24ULL;
#define geometry_msgs_msg_Accel_max_cdr_typesize 48ULL;
#define geometry_msgs_msg_Vector3_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_Accel_max_key_cdr_typesize 0ULL;

geometry_msgs::msg::Accel::Accel()
{
    // geometry_msgs::msg::Vector3 m_linear

    // geometry_msgs::msg::Vector3 m_angular


}

geometry_msgs::msg::Accel::~Accel()
{


}

geometry_msgs::msg::Accel::Accel(
        const Accel& x)
{
    m_linear = x.m_linear;
    m_angular = x.m_angular;
}

geometry_msgs::msg::Accel::Accel(
        Accel&& x) noexcept 
{
    m_linear = std::move(x.m_linear);
    m_angular = std::move(x.m_angular);
}

geometry_msgs::msg::Accel& geometry_msgs::msg::Accel::operator =(
        const Accel& x)
{

    m_linear = x.m_linear;
    m_angular = x.m_angular;

    return *this;
}

geometry_msgs::msg::Accel& geometry_msgs::msg::Accel::operator =(
        Accel&& x) noexcept
{

    m_linear = std::move(x.m_linear);
    m_angular = std::move(x.m_angular);

    return *this;
}

bool geometry_msgs::msg::Accel::operator ==(
        const Accel& x) const
{

    return (m_linear == x.m_linear && m_angular == x.m_angular);
}

bool geometry_msgs::msg::Accel::operator !=(
        const Accel& x) const
{
    return !(*this == x);
}

size_t geometry_msgs::msg::Accel::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return geometry_msgs_msg_Accel_max_cdr_typesize;
}

size_t geometry_msgs::msg::Accel::getCdrSerializedSize(
        const geometry_msgs::msg::Accel& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += geometry_msgs::msg::Vector3::getCdrSerializedSize(data.linear(), current_alignment);
    current_alignment += geometry_msgs::msg::Vector3::getCdrSerializedSize(data.angular(), current_alignment);

    return current_alignment - initial_alignment;
}

void geometry_msgs::msg::Accel::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_linear;
    scdr << m_angular;

}

void geometry_msgs::msg::Accel::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_linear;
    dcdr >> m_angular;
}

/*!
 * @brief This function copies the value in member linear
 * @param _linear New value to be copied in member linear
 */
void geometry_msgs::msg::Accel::linear(
        const geometry_msgs::msg::Vector3& _linear)
{
    m_linear = _linear;
}

/*!
 * @brief This function moves the value in member linear
 * @param _linear New value to be moved in member linear
 */
void geometry_msgs::msg::Accel::linear(
        geometry_msgs::msg::Vector3&& _linear)
{
    m_linear = std::move(_linear);
}

/*!
 * @brief This function returns a constant reference to member linear
 * @return Constant reference to member linear
 */
const geometry_msgs::msg::Vector3& geometry_msgs::msg::Accel::linear() const
{
    return m_linear;
}

/*!
 * @brief This function returns a reference to member linear
 * @return Reference to member linear
 */
geometry_msgs::msg::Vector3& geometry_msgs::msg::Accel::linear()
{
    return m_linear;
}
/*!
 * @brief This function copies the value in member angular
 * @param _angular New value to be copied in member angular
 */
void geometry_msgs::msg::Accel::angular(
        const geometry_msgs::msg::Vector3& _angular)
{
    m_angular = _angular;
}

/*!
 * @brief This function moves the value in member angular
 * @param _angular New value to be moved in member angular
 */
void geometry_msgs::msg::Accel::angular(
        geometry_msgs::msg::Vector3&& _angular)
{
    m_angular = std::move(_angular);
}

/*!
 * @brief This function returns a constant reference to member angular
 * @return Constant reference to member angular
 */
const geometry_msgs::msg::Vector3& geometry_msgs::msg::Accel::angular() const
{
    return m_angular;
}

/*!
 * @brief This function returns a reference to member angular
 * @return Reference to member angular
 */
geometry_msgs::msg::Vector3& geometry_msgs::msg::Accel::angular()
{
    return m_angular;
}


size_t geometry_msgs::msg::Accel::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return geometry_msgs_msg_Accel_max_key_cdr_typesize;
}

bool geometry_msgs::msg::Accel::isKeyDefined()
{
    return false;
}

void geometry_msgs::msg::Accel::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


