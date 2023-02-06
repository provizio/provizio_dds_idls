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
 * @file InertiaStamped.cpp
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

#include "InertiaStamped.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

geometry_msgs::msg::InertiaStamped::InertiaStamped()
{
    // m_header com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@3b6d844d

    // m_inertia com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@36804139


}

geometry_msgs::msg::InertiaStamped::~InertiaStamped()
{


}

geometry_msgs::msg::InertiaStamped::InertiaStamped(
        const InertiaStamped& x)
{
    m_header = x.m_header;
    m_inertia = x.m_inertia;
}

geometry_msgs::msg::InertiaStamped::InertiaStamped(
        InertiaStamped&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_inertia = std::move(x.m_inertia);
}

geometry_msgs::msg::InertiaStamped& geometry_msgs::msg::InertiaStamped::operator =(
        const InertiaStamped& x)
{

    m_header = x.m_header;
    m_inertia = x.m_inertia;

    return *this;
}

geometry_msgs::msg::InertiaStamped& geometry_msgs::msg::InertiaStamped::operator =(
        InertiaStamped&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_inertia = std::move(x.m_inertia);

    return *this;
}

bool geometry_msgs::msg::InertiaStamped::operator ==(
        const InertiaStamped& x) const
{

    return (m_header == x.m_header && m_inertia == x.m_inertia);
}

bool geometry_msgs::msg::InertiaStamped::operator !=(
        const InertiaStamped& x) const
{
    return !(*this == x);
}

size_t geometry_msgs::msg::InertiaStamped::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getMaxCdrSerializedSize(current_alignment);
    current_alignment += geometry_msgs::msg::Inertia::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t geometry_msgs::msg::InertiaStamped::getCdrSerializedSize(
        const geometry_msgs::msg::InertiaStamped& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += geometry_msgs::msg::Inertia::getCdrSerializedSize(data.inertia(), current_alignment);

    return current_alignment - initial_alignment;
}

void geometry_msgs::msg::InertiaStamped::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_inertia;

}

void geometry_msgs::msg::InertiaStamped::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_inertia;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void geometry_msgs::msg::InertiaStamped::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void geometry_msgs::msg::InertiaStamped::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& geometry_msgs::msg::InertiaStamped::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& geometry_msgs::msg::InertiaStamped::header()
{
    return m_header;
}
/*!
 * @brief This function copies the value in member inertia
 * @param _inertia New value to be copied in member inertia
 */
void geometry_msgs::msg::InertiaStamped::inertia(
        const geometry_msgs::msg::Inertia& _inertia)
{
    m_inertia = _inertia;
}

/*!
 * @brief This function moves the value in member inertia
 * @param _inertia New value to be moved in member inertia
 */
void geometry_msgs::msg::InertiaStamped::inertia(
        geometry_msgs::msg::Inertia&& _inertia)
{
    m_inertia = std::move(_inertia);
}

/*!
 * @brief This function returns a constant reference to member inertia
 * @return Constant reference to member inertia
 */
const geometry_msgs::msg::Inertia& geometry_msgs::msg::InertiaStamped::inertia() const
{
    return m_inertia;
}

/*!
 * @brief This function returns a reference to member inertia
 * @return Reference to member inertia
 */
geometry_msgs::msg::Inertia& geometry_msgs::msg::InertiaStamped::inertia()
{
    return m_inertia;
}

size_t geometry_msgs::msg::InertiaStamped::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool geometry_msgs::msg::InertiaStamped::isKeyDefined()
{
    return false;
}

void geometry_msgs::msg::InertiaStamped::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}


