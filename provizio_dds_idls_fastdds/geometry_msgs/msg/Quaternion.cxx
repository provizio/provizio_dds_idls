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
 * @file Quaternion.cpp
 * This source file contains the implementation of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "Quaternion.h"
#include <fastcdr/Cdr.h>


#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


geometry_msgs::msg::Quaternion::Quaternion()
{

}

geometry_msgs::msg::Quaternion::~Quaternion()
{
}

geometry_msgs::msg::Quaternion::Quaternion(
        const Quaternion& x)
{
    m_x = x.m_x;
    m_y = x.m_y;
    m_z = x.m_z;
    m_w = x.m_w;
}

geometry_msgs::msg::Quaternion::Quaternion(
        Quaternion&& x) noexcept
{
    m_x = x.m_x;
    m_y = x.m_y;
    m_z = x.m_z;
    m_w = x.m_w;
}

geometry_msgs::msg::Quaternion& geometry_msgs::msg::Quaternion::operator =(
        const Quaternion& x)
{

    m_x = x.m_x;
    m_y = x.m_y;
    m_z = x.m_z;
    m_w = x.m_w;

    return *this;
}

geometry_msgs::msg::Quaternion& geometry_msgs::msg::Quaternion::operator =(
        Quaternion&& x) noexcept
{

    m_x = x.m_x;
    m_y = x.m_y;
    m_z = x.m_z;
    m_w = x.m_w;

    return *this;
}

bool geometry_msgs::msg::Quaternion::operator ==(
        const Quaternion& x) const
{
    return (m_x == x.m_x &&
           m_y == x.m_y &&
           m_z == x.m_z &&
           m_w == x.m_w);
}

bool geometry_msgs::msg::Quaternion::operator !=(
        const Quaternion& x) const
{
    return !(*this == x);
}

/*!
 * @brief This function sets a value in member x
 * @param _x New value for member x
 */
void geometry_msgs::msg::Quaternion::x(
        double _x)
{
    m_x = _x;
}

/*!
 * @brief This function returns the value of member x
 * @return Value of member x
 */
double geometry_msgs::msg::Quaternion::x() const
{
    return m_x;
}

/*!
 * @brief This function returns a reference to member x
 * @return Reference to member x
 */
double& geometry_msgs::msg::Quaternion::x()
{
    return m_x;
}


/*!
 * @brief This function sets a value in member y
 * @param _y New value for member y
 */
void geometry_msgs::msg::Quaternion::y(
        double _y)
{
    m_y = _y;
}

/*!
 * @brief This function returns the value of member y
 * @return Value of member y
 */
double geometry_msgs::msg::Quaternion::y() const
{
    return m_y;
}

/*!
 * @brief This function returns a reference to member y
 * @return Reference to member y
 */
double& geometry_msgs::msg::Quaternion::y()
{
    return m_y;
}


/*!
 * @brief This function sets a value in member z
 * @param _z New value for member z
 */
void geometry_msgs::msg::Quaternion::z(
        double _z)
{
    m_z = _z;
}

/*!
 * @brief This function returns the value of member z
 * @return Value of member z
 */
double geometry_msgs::msg::Quaternion::z() const
{
    return m_z;
}

/*!
 * @brief This function returns a reference to member z
 * @return Reference to member z
 */
double& geometry_msgs::msg::Quaternion::z()
{
    return m_z;
}


/*!
 * @brief This function sets a value in member w
 * @param _w New value for member w
 */
void geometry_msgs::msg::Quaternion::w(
        double _w)
{
    m_w = _w;
}

/*!
 * @brief This function returns the value of member w
 * @return Value of member w
 */
double geometry_msgs::msg::Quaternion::w() const
{
    return m_w;
}

/*!
 * @brief This function returns a reference to member w
 * @return Reference to member w
 */
double& geometry_msgs::msg::Quaternion::w()
{
    return m_w;
}




// Include auxiliary functions like for serializing/deserializing.
#include "QuaternionCdrAux.ipp"
