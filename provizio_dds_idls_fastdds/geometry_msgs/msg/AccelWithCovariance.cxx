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
 * @file AccelWithCovariance.cpp
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

#include "AccelWithCovariance.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define geometry_msgs_msg_Vector3_max_cdr_typesize 24ULL;
#define geometry_msgs_msg_AccelWithCovariance_max_cdr_typesize 344ULL;

#define geometry_msgs_msg_Accel_max_cdr_typesize 48ULL;
#define geometry_msgs_msg_Vector3_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_AccelWithCovariance_max_key_cdr_typesize 0ULL;

#define geometry_msgs_msg_Accel_max_key_cdr_typesize 0ULL;


geometry_msgs::msg::AccelWithCovariance::AccelWithCovariance()
{
    // geometry_msgs::msg::Accel m_accel

    // geometry_msgs::msg::double__36 m_covariance
    memset(&m_covariance, 0, (36) * 8);

}

geometry_msgs::msg::AccelWithCovariance::~AccelWithCovariance()
{


}

geometry_msgs::msg::AccelWithCovariance::AccelWithCovariance(
        const AccelWithCovariance& x)
{
    m_accel = x.m_accel;
    m_covariance = x.m_covariance;
}

geometry_msgs::msg::AccelWithCovariance::AccelWithCovariance(
        AccelWithCovariance&& x) noexcept 
{
    m_accel = std::move(x.m_accel);
    m_covariance = std::move(x.m_covariance);
}

geometry_msgs::msg::AccelWithCovariance& geometry_msgs::msg::AccelWithCovariance::operator =(
        const AccelWithCovariance& x)
{

    m_accel = x.m_accel;
    m_covariance = x.m_covariance;

    return *this;
}

geometry_msgs::msg::AccelWithCovariance& geometry_msgs::msg::AccelWithCovariance::operator =(
        AccelWithCovariance&& x) noexcept
{

    m_accel = std::move(x.m_accel);
    m_covariance = std::move(x.m_covariance);

    return *this;
}

bool geometry_msgs::msg::AccelWithCovariance::operator ==(
        const AccelWithCovariance& x) const
{

    return (m_accel == x.m_accel && m_covariance == x.m_covariance);
}

bool geometry_msgs::msg::AccelWithCovariance::operator !=(
        const AccelWithCovariance& x) const
{
    return !(*this == x);
}

size_t geometry_msgs::msg::AccelWithCovariance::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return geometry_msgs_msg_AccelWithCovariance_max_cdr_typesize;
}

size_t geometry_msgs::msg::AccelWithCovariance::getCdrSerializedSize(
        const geometry_msgs::msg::AccelWithCovariance& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += geometry_msgs::msg::Accel::getCdrSerializedSize(data.accel(), current_alignment);
    if ((36) > 0)
    {
        current_alignment += ((36) * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);
    }


    return current_alignment - initial_alignment;
}

void geometry_msgs::msg::AccelWithCovariance::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_accel;
    scdr << m_covariance;


}

void geometry_msgs::msg::AccelWithCovariance::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_accel;
    dcdr >> m_covariance;

}

/*!
 * @brief This function copies the value in member accel
 * @param _accel New value to be copied in member accel
 */
void geometry_msgs::msg::AccelWithCovariance::accel(
        const geometry_msgs::msg::Accel& _accel)
{
    m_accel = _accel;
}

/*!
 * @brief This function moves the value in member accel
 * @param _accel New value to be moved in member accel
 */
void geometry_msgs::msg::AccelWithCovariance::accel(
        geometry_msgs::msg::Accel&& _accel)
{
    m_accel = std::move(_accel);
}

/*!
 * @brief This function returns a constant reference to member accel
 * @return Constant reference to member accel
 */
const geometry_msgs::msg::Accel& geometry_msgs::msg::AccelWithCovariance::accel() const
{
    return m_accel;
}

/*!
 * @brief This function returns a reference to member accel
 * @return Reference to member accel
 */
geometry_msgs::msg::Accel& geometry_msgs::msg::AccelWithCovariance::accel()
{
    return m_accel;
}
/*!
 * @brief This function copies the value in member covariance
 * @param _covariance New value to be copied in member covariance
 */
void geometry_msgs::msg::AccelWithCovariance::covariance(
        const geometry_msgs::msg::double__36& _covariance)
{
    m_covariance = _covariance;
}

/*!
 * @brief This function moves the value in member covariance
 * @param _covariance New value to be moved in member covariance
 */
void geometry_msgs::msg::AccelWithCovariance::covariance(
        geometry_msgs::msg::double__36&& _covariance)
{
    m_covariance = std::move(_covariance);
}

/*!
 * @brief This function returns a constant reference to member covariance
 * @return Constant reference to member covariance
 */
const geometry_msgs::msg::double__36& geometry_msgs::msg::AccelWithCovariance::covariance() const
{
    return m_covariance;
}

/*!
 * @brief This function returns a reference to member covariance
 * @return Reference to member covariance
 */
geometry_msgs::msg::double__36& geometry_msgs::msg::AccelWithCovariance::covariance()
{
    return m_covariance;
}


size_t geometry_msgs::msg::AccelWithCovariance::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return geometry_msgs_msg_AccelWithCovariance_max_key_cdr_typesize;
}

bool geometry_msgs::msg::AccelWithCovariance::isKeyDefined()
{
    return false;
}

void geometry_msgs::msg::AccelWithCovariance::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


