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
 * @file Wrench.cpp
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

#include "Wrench.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

geometry_msgs::msg::Wrench::Wrench()
{
    // m_force com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@6df11e91

    // m_torque com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@6df11e91


}

geometry_msgs::msg::Wrench::~Wrench()
{


}

geometry_msgs::msg::Wrench::Wrench(
        const Wrench& x)
{
    m_force = x.m_force;
    m_torque = x.m_torque;
}

geometry_msgs::msg::Wrench::Wrench(
        Wrench&& x) noexcept 
{
    m_force = std::move(x.m_force);
    m_torque = std::move(x.m_torque);
}

geometry_msgs::msg::Wrench& geometry_msgs::msg::Wrench::operator =(
        const Wrench& x)
{

    m_force = x.m_force;
    m_torque = x.m_torque;

    return *this;
}

geometry_msgs::msg::Wrench& geometry_msgs::msg::Wrench::operator =(
        Wrench&& x) noexcept
{

    m_force = std::move(x.m_force);
    m_torque = std::move(x.m_torque);

    return *this;
}

bool geometry_msgs::msg::Wrench::operator ==(
        const Wrench& x) const
{

    return (m_force == x.m_force && m_torque == x.m_torque);
}

bool geometry_msgs::msg::Wrench::operator !=(
        const Wrench& x) const
{
    return !(*this == x);
}

size_t geometry_msgs::msg::Wrench::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += geometry_msgs::msg::Vector3::getMaxCdrSerializedSize(current_alignment);
    current_alignment += geometry_msgs::msg::Vector3::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t geometry_msgs::msg::Wrench::getCdrSerializedSize(
        const geometry_msgs::msg::Wrench& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += geometry_msgs::msg::Vector3::getCdrSerializedSize(data.force(), current_alignment);
    current_alignment += geometry_msgs::msg::Vector3::getCdrSerializedSize(data.torque(), current_alignment);

    return current_alignment - initial_alignment;
}

void geometry_msgs::msg::Wrench::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_force;
    scdr << m_torque;

}

void geometry_msgs::msg::Wrench::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_force;
    dcdr >> m_torque;
}

/*!
 * @brief This function copies the value in member force
 * @param _force New value to be copied in member force
 */
void geometry_msgs::msg::Wrench::force(
        const geometry_msgs::msg::Vector3& _force)
{
    m_force = _force;
}

/*!
 * @brief This function moves the value in member force
 * @param _force New value to be moved in member force
 */
void geometry_msgs::msg::Wrench::force(
        geometry_msgs::msg::Vector3&& _force)
{
    m_force = std::move(_force);
}

/*!
 * @brief This function returns a constant reference to member force
 * @return Constant reference to member force
 */
const geometry_msgs::msg::Vector3& geometry_msgs::msg::Wrench::force() const
{
    return m_force;
}

/*!
 * @brief This function returns a reference to member force
 * @return Reference to member force
 */
geometry_msgs::msg::Vector3& geometry_msgs::msg::Wrench::force()
{
    return m_force;
}
/*!
 * @brief This function copies the value in member torque
 * @param _torque New value to be copied in member torque
 */
void geometry_msgs::msg::Wrench::torque(
        const geometry_msgs::msg::Vector3& _torque)
{
    m_torque = _torque;
}

/*!
 * @brief This function moves the value in member torque
 * @param _torque New value to be moved in member torque
 */
void geometry_msgs::msg::Wrench::torque(
        geometry_msgs::msg::Vector3&& _torque)
{
    m_torque = std::move(_torque);
}

/*!
 * @brief This function returns a constant reference to member torque
 * @return Constant reference to member torque
 */
const geometry_msgs::msg::Vector3& geometry_msgs::msg::Wrench::torque() const
{
    return m_torque;
}

/*!
 * @brief This function returns a reference to member torque
 * @return Reference to member torque
 */
geometry_msgs::msg::Vector3& geometry_msgs::msg::Wrench::torque()
{
    return m_torque;
}

size_t geometry_msgs::msg::Wrench::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool geometry_msgs::msg::Wrench::isKeyDefined()
{
    return false;
}

void geometry_msgs::msg::Wrench::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}


