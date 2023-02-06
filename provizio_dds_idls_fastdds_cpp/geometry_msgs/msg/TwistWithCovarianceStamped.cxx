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
 * @file TwistWithCovarianceStamped.cpp
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

#include "TwistWithCovarianceStamped.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

geometry_msgs::msg::TwistWithCovarianceStamped::TwistWithCovarianceStamped()
{
    // m_header com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@403f0a22

    // m_twist com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@503ecb24


}

geometry_msgs::msg::TwistWithCovarianceStamped::~TwistWithCovarianceStamped()
{


}

geometry_msgs::msg::TwistWithCovarianceStamped::TwistWithCovarianceStamped(
        const TwistWithCovarianceStamped& x)
{
    m_header = x.m_header;
    m_twist = x.m_twist;
}

geometry_msgs::msg::TwistWithCovarianceStamped::TwistWithCovarianceStamped(
        TwistWithCovarianceStamped&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_twist = std::move(x.m_twist);
}

geometry_msgs::msg::TwistWithCovarianceStamped& geometry_msgs::msg::TwistWithCovarianceStamped::operator =(
        const TwistWithCovarianceStamped& x)
{

    m_header = x.m_header;
    m_twist = x.m_twist;

    return *this;
}

geometry_msgs::msg::TwistWithCovarianceStamped& geometry_msgs::msg::TwistWithCovarianceStamped::operator =(
        TwistWithCovarianceStamped&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_twist = std::move(x.m_twist);

    return *this;
}

bool geometry_msgs::msg::TwistWithCovarianceStamped::operator ==(
        const TwistWithCovarianceStamped& x) const
{

    return (m_header == x.m_header && m_twist == x.m_twist);
}

bool geometry_msgs::msg::TwistWithCovarianceStamped::operator !=(
        const TwistWithCovarianceStamped& x) const
{
    return !(*this == x);
}

size_t geometry_msgs::msg::TwistWithCovarianceStamped::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getMaxCdrSerializedSize(current_alignment);
    current_alignment += geometry_msgs::msg::TwistWithCovariance::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t geometry_msgs::msg::TwistWithCovarianceStamped::getCdrSerializedSize(
        const geometry_msgs::msg::TwistWithCovarianceStamped& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += geometry_msgs::msg::TwistWithCovariance::getCdrSerializedSize(data.twist(), current_alignment);

    return current_alignment - initial_alignment;
}

void geometry_msgs::msg::TwistWithCovarianceStamped::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_twist;

}

void geometry_msgs::msg::TwistWithCovarianceStamped::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_twist;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void geometry_msgs::msg::TwistWithCovarianceStamped::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void geometry_msgs::msg::TwistWithCovarianceStamped::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& geometry_msgs::msg::TwistWithCovarianceStamped::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& geometry_msgs::msg::TwistWithCovarianceStamped::header()
{
    return m_header;
}
/*!
 * @brief This function copies the value in member twist
 * @param _twist New value to be copied in member twist
 */
void geometry_msgs::msg::TwistWithCovarianceStamped::twist(
        const geometry_msgs::msg::TwistWithCovariance& _twist)
{
    m_twist = _twist;
}

/*!
 * @brief This function moves the value in member twist
 * @param _twist New value to be moved in member twist
 */
void geometry_msgs::msg::TwistWithCovarianceStamped::twist(
        geometry_msgs::msg::TwistWithCovariance&& _twist)
{
    m_twist = std::move(_twist);
}

/*!
 * @brief This function returns a constant reference to member twist
 * @return Constant reference to member twist
 */
const geometry_msgs::msg::TwistWithCovariance& geometry_msgs::msg::TwistWithCovarianceStamped::twist() const
{
    return m_twist;
}

/*!
 * @brief This function returns a reference to member twist
 * @return Reference to member twist
 */
geometry_msgs::msg::TwistWithCovariance& geometry_msgs::msg::TwistWithCovarianceStamped::twist()
{
    return m_twist;
}

size_t geometry_msgs::msg::TwistWithCovarianceStamped::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool geometry_msgs::msg::TwistWithCovarianceStamped::isKeyDefined()
{
    return false;
}

void geometry_msgs::msg::TwistWithCovarianceStamped::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}

