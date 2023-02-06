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
 * @file TwistWithCovariance.cpp
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

#include "TwistWithCovariance.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


geometry_msgs::msg::TwistWithCovariance::TwistWithCovariance()
{
    // m_twist com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@2f20f7ad

    // m_covariance com.eprosima.idl.parser.typecode.AliasTypeCode@45e617c4
    memset(&m_covariance, 0, (36) * 8);

}

geometry_msgs::msg::TwistWithCovariance::~TwistWithCovariance()
{


}

geometry_msgs::msg::TwistWithCovariance::TwistWithCovariance(
        const TwistWithCovariance& x)
{
    m_twist = x.m_twist;
    m_covariance = x.m_covariance;
}

geometry_msgs::msg::TwistWithCovariance::TwistWithCovariance(
        TwistWithCovariance&& x) noexcept 
{
    m_twist = std::move(x.m_twist);
    m_covariance = std::move(x.m_covariance);
}

geometry_msgs::msg::TwistWithCovariance& geometry_msgs::msg::TwistWithCovariance::operator =(
        const TwistWithCovariance& x)
{

    m_twist = x.m_twist;
    m_covariance = x.m_covariance;

    return *this;
}

geometry_msgs::msg::TwistWithCovariance& geometry_msgs::msg::TwistWithCovariance::operator =(
        TwistWithCovariance&& x) noexcept
{

    m_twist = std::move(x.m_twist);
    m_covariance = std::move(x.m_covariance);

    return *this;
}

bool geometry_msgs::msg::TwistWithCovariance::operator ==(
        const TwistWithCovariance& x) const
{

    return (m_twist == x.m_twist && m_covariance == x.m_covariance);
}

bool geometry_msgs::msg::TwistWithCovariance::operator !=(
        const TwistWithCovariance& x) const
{
    return !(*this == x);
}

size_t geometry_msgs::msg::TwistWithCovariance::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += geometry_msgs::msg::Twist::getMaxCdrSerializedSize(current_alignment);
    current_alignment += ((36) * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

size_t geometry_msgs::msg::TwistWithCovariance::getCdrSerializedSize(
        const geometry_msgs::msg::TwistWithCovariance& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += geometry_msgs::msg::Twist::getCdrSerializedSize(data.twist(), current_alignment);
    if ((36) > 0)
    {
        current_alignment += ((36) * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);
    }


    return current_alignment - initial_alignment;
}

void geometry_msgs::msg::TwistWithCovariance::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_twist;
    scdr << m_covariance;


}

void geometry_msgs::msg::TwistWithCovariance::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_twist;
    dcdr >> m_covariance;

}

/*!
 * @brief This function copies the value in member twist
 * @param _twist New value to be copied in member twist
 */
void geometry_msgs::msg::TwistWithCovariance::twist(
        const geometry_msgs::msg::Twist& _twist)
{
    m_twist = _twist;
}

/*!
 * @brief This function moves the value in member twist
 * @param _twist New value to be moved in member twist
 */
void geometry_msgs::msg::TwistWithCovariance::twist(
        geometry_msgs::msg::Twist&& _twist)
{
    m_twist = std::move(_twist);
}

/*!
 * @brief This function returns a constant reference to member twist
 * @return Constant reference to member twist
 */
const geometry_msgs::msg::Twist& geometry_msgs::msg::TwistWithCovariance::twist() const
{
    return m_twist;
}

/*!
 * @brief This function returns a reference to member twist
 * @return Reference to member twist
 */
geometry_msgs::msg::Twist& geometry_msgs::msg::TwistWithCovariance::twist()
{
    return m_twist;
}
/*!
 * @brief This function copies the value in member covariance
 * @param _covariance New value to be copied in member covariance
 */
void geometry_msgs::msg::TwistWithCovariance::covariance(
        const geometry_msgs::msg::double36& _covariance)
{
    m_covariance = _covariance;
}

/*!
 * @brief This function moves the value in member covariance
 * @param _covariance New value to be moved in member covariance
 */
void geometry_msgs::msg::TwistWithCovariance::covariance(
        geometry_msgs::msg::double36&& _covariance)
{
    m_covariance = std::move(_covariance);
}

/*!
 * @brief This function returns a constant reference to member covariance
 * @return Constant reference to member covariance
 */
const geometry_msgs::msg::double36& geometry_msgs::msg::TwistWithCovariance::covariance() const
{
    return m_covariance;
}

/*!
 * @brief This function returns a reference to member covariance
 * @return Reference to member covariance
 */
geometry_msgs::msg::double36& geometry_msgs::msg::TwistWithCovariance::covariance()
{
    return m_covariance;
}

size_t geometry_msgs::msg::TwistWithCovariance::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool geometry_msgs::msg::TwistWithCovariance::isKeyDefined()
{
    return false;
}

void geometry_msgs::msg::TwistWithCovariance::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}


