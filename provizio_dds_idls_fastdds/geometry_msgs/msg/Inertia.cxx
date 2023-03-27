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
 * @file Inertia.cpp
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

#include "Inertia.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define geometry_msgs_msg_Vector3_max_cdr_typesize 24ULL;
#define geometry_msgs_msg_Inertia_max_cdr_typesize 80ULL;
#define geometry_msgs_msg_Vector3_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_Inertia_max_key_cdr_typesize 0ULL;

geometry_msgs::msg::Inertia::Inertia()
{
    // double m_m
    m_m = 0.0;
    // geometry_msgs::msg::Vector3 m_com

    // double m_ixx
    m_ixx = 0.0;
    // double m_ixy
    m_ixy = 0.0;
    // double m_ixz
    m_ixz = 0.0;
    // double m_iyy
    m_iyy = 0.0;
    // double m_iyz
    m_iyz = 0.0;
    // double m_izz
    m_izz = 0.0;

}

geometry_msgs::msg::Inertia::~Inertia()
{








}

geometry_msgs::msg::Inertia::Inertia(
        const Inertia& x)
{
    m_m = x.m_m;
    m_com = x.m_com;
    m_ixx = x.m_ixx;
    m_ixy = x.m_ixy;
    m_ixz = x.m_ixz;
    m_iyy = x.m_iyy;
    m_iyz = x.m_iyz;
    m_izz = x.m_izz;
}

geometry_msgs::msg::Inertia::Inertia(
        Inertia&& x) noexcept 
{
    m_m = x.m_m;
    m_com = std::move(x.m_com);
    m_ixx = x.m_ixx;
    m_ixy = x.m_ixy;
    m_ixz = x.m_ixz;
    m_iyy = x.m_iyy;
    m_iyz = x.m_iyz;
    m_izz = x.m_izz;
}

geometry_msgs::msg::Inertia& geometry_msgs::msg::Inertia::operator =(
        const Inertia& x)
{

    m_m = x.m_m;
    m_com = x.m_com;
    m_ixx = x.m_ixx;
    m_ixy = x.m_ixy;
    m_ixz = x.m_ixz;
    m_iyy = x.m_iyy;
    m_iyz = x.m_iyz;
    m_izz = x.m_izz;

    return *this;
}

geometry_msgs::msg::Inertia& geometry_msgs::msg::Inertia::operator =(
        Inertia&& x) noexcept
{

    m_m = x.m_m;
    m_com = std::move(x.m_com);
    m_ixx = x.m_ixx;
    m_ixy = x.m_ixy;
    m_ixz = x.m_ixz;
    m_iyy = x.m_iyy;
    m_iyz = x.m_iyz;
    m_izz = x.m_izz;

    return *this;
}

bool geometry_msgs::msg::Inertia::operator ==(
        const Inertia& x) const
{

    return (m_m == x.m_m && m_com == x.m_com && m_ixx == x.m_ixx && m_ixy == x.m_ixy && m_ixz == x.m_ixz && m_iyy == x.m_iyy && m_iyz == x.m_iyz && m_izz == x.m_izz);
}

bool geometry_msgs::msg::Inertia::operator !=(
        const Inertia& x) const
{
    return !(*this == x);
}

size_t geometry_msgs::msg::Inertia::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return geometry_msgs_msg_Inertia_max_cdr_typesize;
}

size_t geometry_msgs::msg::Inertia::getCdrSerializedSize(
        const geometry_msgs::msg::Inertia& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += geometry_msgs::msg::Vector3::getCdrSerializedSize(data.com(), current_alignment);
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

void geometry_msgs::msg::Inertia::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_m;
    scdr << m_com;
    scdr << m_ixx;
    scdr << m_ixy;
    scdr << m_ixz;
    scdr << m_iyy;
    scdr << m_iyz;
    scdr << m_izz;

}

void geometry_msgs::msg::Inertia::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_m;
    dcdr >> m_com;
    dcdr >> m_ixx;
    dcdr >> m_ixy;
    dcdr >> m_ixz;
    dcdr >> m_iyy;
    dcdr >> m_iyz;
    dcdr >> m_izz;
}

/*!
 * @brief This function sets a value in member m
 * @param _m New value for member m
 */
void geometry_msgs::msg::Inertia::m(
        double _m)
{
    m_m = _m;
}

/*!
 * @brief This function returns the value of member m
 * @return Value of member m
 */
double geometry_msgs::msg::Inertia::m() const
{
    return m_m;
}

/*!
 * @brief This function returns a reference to member m
 * @return Reference to member m
 */
double& geometry_msgs::msg::Inertia::m()
{
    return m_m;
}

/*!
 * @brief This function copies the value in member com
 * @param _com New value to be copied in member com
 */
void geometry_msgs::msg::Inertia::com(
        const geometry_msgs::msg::Vector3& _com)
{
    m_com = _com;
}

/*!
 * @brief This function moves the value in member com
 * @param _com New value to be moved in member com
 */
void geometry_msgs::msg::Inertia::com(
        geometry_msgs::msg::Vector3&& _com)
{
    m_com = std::move(_com);
}

/*!
 * @brief This function returns a constant reference to member com
 * @return Constant reference to member com
 */
const geometry_msgs::msg::Vector3& geometry_msgs::msg::Inertia::com() const
{
    return m_com;
}

/*!
 * @brief This function returns a reference to member com
 * @return Reference to member com
 */
geometry_msgs::msg::Vector3& geometry_msgs::msg::Inertia::com()
{
    return m_com;
}
/*!
 * @brief This function sets a value in member ixx
 * @param _ixx New value for member ixx
 */
void geometry_msgs::msg::Inertia::ixx(
        double _ixx)
{
    m_ixx = _ixx;
}

/*!
 * @brief This function returns the value of member ixx
 * @return Value of member ixx
 */
double geometry_msgs::msg::Inertia::ixx() const
{
    return m_ixx;
}

/*!
 * @brief This function returns a reference to member ixx
 * @return Reference to member ixx
 */
double& geometry_msgs::msg::Inertia::ixx()
{
    return m_ixx;
}

/*!
 * @brief This function sets a value in member ixy
 * @param _ixy New value for member ixy
 */
void geometry_msgs::msg::Inertia::ixy(
        double _ixy)
{
    m_ixy = _ixy;
}

/*!
 * @brief This function returns the value of member ixy
 * @return Value of member ixy
 */
double geometry_msgs::msg::Inertia::ixy() const
{
    return m_ixy;
}

/*!
 * @brief This function returns a reference to member ixy
 * @return Reference to member ixy
 */
double& geometry_msgs::msg::Inertia::ixy()
{
    return m_ixy;
}

/*!
 * @brief This function sets a value in member ixz
 * @param _ixz New value for member ixz
 */
void geometry_msgs::msg::Inertia::ixz(
        double _ixz)
{
    m_ixz = _ixz;
}

/*!
 * @brief This function returns the value of member ixz
 * @return Value of member ixz
 */
double geometry_msgs::msg::Inertia::ixz() const
{
    return m_ixz;
}

/*!
 * @brief This function returns a reference to member ixz
 * @return Reference to member ixz
 */
double& geometry_msgs::msg::Inertia::ixz()
{
    return m_ixz;
}

/*!
 * @brief This function sets a value in member iyy
 * @param _iyy New value for member iyy
 */
void geometry_msgs::msg::Inertia::iyy(
        double _iyy)
{
    m_iyy = _iyy;
}

/*!
 * @brief This function returns the value of member iyy
 * @return Value of member iyy
 */
double geometry_msgs::msg::Inertia::iyy() const
{
    return m_iyy;
}

/*!
 * @brief This function returns a reference to member iyy
 * @return Reference to member iyy
 */
double& geometry_msgs::msg::Inertia::iyy()
{
    return m_iyy;
}

/*!
 * @brief This function sets a value in member iyz
 * @param _iyz New value for member iyz
 */
void geometry_msgs::msg::Inertia::iyz(
        double _iyz)
{
    m_iyz = _iyz;
}

/*!
 * @brief This function returns the value of member iyz
 * @return Value of member iyz
 */
double geometry_msgs::msg::Inertia::iyz() const
{
    return m_iyz;
}

/*!
 * @brief This function returns a reference to member iyz
 * @return Reference to member iyz
 */
double& geometry_msgs::msg::Inertia::iyz()
{
    return m_iyz;
}

/*!
 * @brief This function sets a value in member izz
 * @param _izz New value for member izz
 */
void geometry_msgs::msg::Inertia::izz(
        double _izz)
{
    m_izz = _izz;
}

/*!
 * @brief This function returns the value of member izz
 * @return Value of member izz
 */
double geometry_msgs::msg::Inertia::izz() const
{
    return m_izz;
}

/*!
 * @brief This function returns a reference to member izz
 * @return Reference to member izz
 */
double& geometry_msgs::msg::Inertia::izz()
{
    return m_izz;
}



size_t geometry_msgs::msg::Inertia::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return geometry_msgs_msg_Inertia_max_key_cdr_typesize;
}

bool geometry_msgs::msg::Inertia::isKeyDefined()
{
    return false;
}

void geometry_msgs::msg::Inertia::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

