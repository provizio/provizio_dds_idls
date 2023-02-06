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
 * @file WrenchStamped.cpp
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

#include "WrenchStamped.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

geometry_msgs::msg::WrenchStamped::WrenchStamped()
{
    // m_header com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@2654635

    // m_wrench com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@737a135b


}

geometry_msgs::msg::WrenchStamped::~WrenchStamped()
{


}

geometry_msgs::msg::WrenchStamped::WrenchStamped(
        const WrenchStamped& x)
{
    m_header = x.m_header;
    m_wrench = x.m_wrench;
}

geometry_msgs::msg::WrenchStamped::WrenchStamped(
        WrenchStamped&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_wrench = std::move(x.m_wrench);
}

geometry_msgs::msg::WrenchStamped& geometry_msgs::msg::WrenchStamped::operator =(
        const WrenchStamped& x)
{

    m_header = x.m_header;
    m_wrench = x.m_wrench;

    return *this;
}

geometry_msgs::msg::WrenchStamped& geometry_msgs::msg::WrenchStamped::operator =(
        WrenchStamped&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_wrench = std::move(x.m_wrench);

    return *this;
}

bool geometry_msgs::msg::WrenchStamped::operator ==(
        const WrenchStamped& x) const
{

    return (m_header == x.m_header && m_wrench == x.m_wrench);
}

bool geometry_msgs::msg::WrenchStamped::operator !=(
        const WrenchStamped& x) const
{
    return !(*this == x);
}

size_t geometry_msgs::msg::WrenchStamped::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getMaxCdrSerializedSize(current_alignment);
    current_alignment += geometry_msgs::msg::Wrench::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t geometry_msgs::msg::WrenchStamped::getCdrSerializedSize(
        const geometry_msgs::msg::WrenchStamped& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += geometry_msgs::msg::Wrench::getCdrSerializedSize(data.wrench(), current_alignment);

    return current_alignment - initial_alignment;
}

void geometry_msgs::msg::WrenchStamped::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_wrench;

}

void geometry_msgs::msg::WrenchStamped::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_wrench;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void geometry_msgs::msg::WrenchStamped::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void geometry_msgs::msg::WrenchStamped::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& geometry_msgs::msg::WrenchStamped::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& geometry_msgs::msg::WrenchStamped::header()
{
    return m_header;
}
/*!
 * @brief This function copies the value in member wrench
 * @param _wrench New value to be copied in member wrench
 */
void geometry_msgs::msg::WrenchStamped::wrench(
        const geometry_msgs::msg::Wrench& _wrench)
{
    m_wrench = _wrench;
}

/*!
 * @brief This function moves the value in member wrench
 * @param _wrench New value to be moved in member wrench
 */
void geometry_msgs::msg::WrenchStamped::wrench(
        geometry_msgs::msg::Wrench&& _wrench)
{
    m_wrench = std::move(_wrench);
}

/*!
 * @brief This function returns a constant reference to member wrench
 * @return Constant reference to member wrench
 */
const geometry_msgs::msg::Wrench& geometry_msgs::msg::WrenchStamped::wrench() const
{
    return m_wrench;
}

/*!
 * @brief This function returns a reference to member wrench
 * @return Reference to member wrench
 */
geometry_msgs::msg::Wrench& geometry_msgs::msg::WrenchStamped::wrench()
{
    return m_wrench;
}

size_t geometry_msgs::msg::WrenchStamped::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool geometry_msgs::msg::WrenchStamped::isKeyDefined()
{
    return false;
}

void geometry_msgs::msg::WrenchStamped::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}

