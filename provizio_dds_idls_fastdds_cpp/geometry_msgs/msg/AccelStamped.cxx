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
 * @file AccelStamped.cpp
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

#include "AccelStamped.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

geometry_msgs::msg::AccelStamped::AccelStamped()
{
    // m_header com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@eadd4fb

    // m_accel com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@740fb309


}

geometry_msgs::msg::AccelStamped::~AccelStamped()
{


}

geometry_msgs::msg::AccelStamped::AccelStamped(
        const AccelStamped& x)
{
    m_header = x.m_header;
    m_accel = x.m_accel;
}

geometry_msgs::msg::AccelStamped::AccelStamped(
        AccelStamped&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_accel = std::move(x.m_accel);
}

geometry_msgs::msg::AccelStamped& geometry_msgs::msg::AccelStamped::operator =(
        const AccelStamped& x)
{

    m_header = x.m_header;
    m_accel = x.m_accel;

    return *this;
}

geometry_msgs::msg::AccelStamped& geometry_msgs::msg::AccelStamped::operator =(
        AccelStamped&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_accel = std::move(x.m_accel);

    return *this;
}

bool geometry_msgs::msg::AccelStamped::operator ==(
        const AccelStamped& x) const
{

    return (m_header == x.m_header && m_accel == x.m_accel);
}

bool geometry_msgs::msg::AccelStamped::operator !=(
        const AccelStamped& x) const
{
    return !(*this == x);
}

size_t geometry_msgs::msg::AccelStamped::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getMaxCdrSerializedSize(current_alignment);
    current_alignment += geometry_msgs::msg::Accel::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t geometry_msgs::msg::AccelStamped::getCdrSerializedSize(
        const geometry_msgs::msg::AccelStamped& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += geometry_msgs::msg::Accel::getCdrSerializedSize(data.accel(), current_alignment);

    return current_alignment - initial_alignment;
}

void geometry_msgs::msg::AccelStamped::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_accel;

}

void geometry_msgs::msg::AccelStamped::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_accel;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void geometry_msgs::msg::AccelStamped::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void geometry_msgs::msg::AccelStamped::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& geometry_msgs::msg::AccelStamped::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& geometry_msgs::msg::AccelStamped::header()
{
    return m_header;
}
/*!
 * @brief This function copies the value in member accel
 * @param _accel New value to be copied in member accel
 */
void geometry_msgs::msg::AccelStamped::accel(
        const geometry_msgs::msg::Accel& _accel)
{
    m_accel = _accel;
}

/*!
 * @brief This function moves the value in member accel
 * @param _accel New value to be moved in member accel
 */
void geometry_msgs::msg::AccelStamped::accel(
        geometry_msgs::msg::Accel&& _accel)
{
    m_accel = std::move(_accel);
}

/*!
 * @brief This function returns a constant reference to member accel
 * @return Constant reference to member accel
 */
const geometry_msgs::msg::Accel& geometry_msgs::msg::AccelStamped::accel() const
{
    return m_accel;
}

/*!
 * @brief This function returns a reference to member accel
 * @return Reference to member accel
 */
geometry_msgs::msg::Accel& geometry_msgs::msg::AccelStamped::accel()
{
    return m_accel;
}

size_t geometry_msgs::msg::AccelStamped::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool geometry_msgs::msg::AccelStamped::isKeyDefined()
{
    return false;
}

void geometry_msgs::msg::AccelStamped::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}


