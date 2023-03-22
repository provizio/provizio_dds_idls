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
 * @file QuaternionStamped.cpp
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

#include "QuaternionStamped.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

geometry_msgs::msg::QuaternionStamped::QuaternionStamped()
{
    // m_header com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@1458ed9c

    // m_quaternion com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@10a9d961


}

geometry_msgs::msg::QuaternionStamped::~QuaternionStamped()
{


}

geometry_msgs::msg::QuaternionStamped::QuaternionStamped(
        const QuaternionStamped& x)
{
    m_header = x.m_header;
    m_quaternion = x.m_quaternion;
}

geometry_msgs::msg::QuaternionStamped::QuaternionStamped(
        QuaternionStamped&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_quaternion = std::move(x.m_quaternion);
}

geometry_msgs::msg::QuaternionStamped& geometry_msgs::msg::QuaternionStamped::operator =(
        const QuaternionStamped& x)
{

    m_header = x.m_header;
    m_quaternion = x.m_quaternion;

    return *this;
}

geometry_msgs::msg::QuaternionStamped& geometry_msgs::msg::QuaternionStamped::operator =(
        QuaternionStamped&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_quaternion = std::move(x.m_quaternion);

    return *this;
}

bool geometry_msgs::msg::QuaternionStamped::operator ==(
        const QuaternionStamped& x) const
{

    return (m_header == x.m_header && m_quaternion == x.m_quaternion);
}

bool geometry_msgs::msg::QuaternionStamped::operator !=(
        const QuaternionStamped& x) const
{
    return !(*this == x);
}

size_t geometry_msgs::msg::QuaternionStamped::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getMaxCdrSerializedSize(current_alignment);
    current_alignment += geometry_msgs::msg::Quaternion::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t geometry_msgs::msg::QuaternionStamped::getCdrSerializedSize(
        const geometry_msgs::msg::QuaternionStamped& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += geometry_msgs::msg::Quaternion::getCdrSerializedSize(data.quaternion(), current_alignment);

    return current_alignment - initial_alignment;
}

void geometry_msgs::msg::QuaternionStamped::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_quaternion;

}

void geometry_msgs::msg::QuaternionStamped::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_quaternion;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void geometry_msgs::msg::QuaternionStamped::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void geometry_msgs::msg::QuaternionStamped::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& geometry_msgs::msg::QuaternionStamped::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& geometry_msgs::msg::QuaternionStamped::header()
{
    return m_header;
}
/*!
 * @brief This function copies the value in member quaternion
 * @param _quaternion New value to be copied in member quaternion
 */
void geometry_msgs::msg::QuaternionStamped::quaternion(
        const geometry_msgs::msg::Quaternion& _quaternion)
{
    m_quaternion = _quaternion;
}

/*!
 * @brief This function moves the value in member quaternion
 * @param _quaternion New value to be moved in member quaternion
 */
void geometry_msgs::msg::QuaternionStamped::quaternion(
        geometry_msgs::msg::Quaternion&& _quaternion)
{
    m_quaternion = std::move(_quaternion);
}

/*!
 * @brief This function returns a constant reference to member quaternion
 * @return Constant reference to member quaternion
 */
const geometry_msgs::msg::Quaternion& geometry_msgs::msg::QuaternionStamped::quaternion() const
{
    return m_quaternion;
}

/*!
 * @brief This function returns a reference to member quaternion
 * @return Reference to member quaternion
 */
geometry_msgs::msg::Quaternion& geometry_msgs::msg::QuaternionStamped::quaternion()
{
    return m_quaternion;
}

size_t geometry_msgs::msg::QuaternionStamped::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool geometry_msgs::msg::QuaternionStamped::isKeyDefined()
{
    return false;
}

void geometry_msgs::msg::QuaternionStamped::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}


