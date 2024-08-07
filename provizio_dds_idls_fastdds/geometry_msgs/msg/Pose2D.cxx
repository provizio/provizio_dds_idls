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
 * @file Pose2D.cpp
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

#include "Pose2D.h"
#include <fastcdr/Cdr.h>


#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


geometry_msgs::msg::Pose2D::Pose2D()
{

}

geometry_msgs::msg::Pose2D::~Pose2D()
{
}

geometry_msgs::msg::Pose2D::Pose2D(
        const Pose2D& x)
{
    m_x = x.m_x;
    m_y = x.m_y;
    m_theta = x.m_theta;
}

geometry_msgs::msg::Pose2D::Pose2D(
        Pose2D&& x) noexcept
{
    m_x = x.m_x;
    m_y = x.m_y;
    m_theta = x.m_theta;
}

geometry_msgs::msg::Pose2D& geometry_msgs::msg::Pose2D::operator =(
        const Pose2D& x)
{

    m_x = x.m_x;
    m_y = x.m_y;
    m_theta = x.m_theta;

    return *this;
}

geometry_msgs::msg::Pose2D& geometry_msgs::msg::Pose2D::operator =(
        Pose2D&& x) noexcept
{

    m_x = x.m_x;
    m_y = x.m_y;
    m_theta = x.m_theta;

    return *this;
}

bool geometry_msgs::msg::Pose2D::operator ==(
        const Pose2D& x) const
{
    return (m_x == x.m_x &&
           m_y == x.m_y &&
           m_theta == x.m_theta);
}

bool geometry_msgs::msg::Pose2D::operator !=(
        const Pose2D& x) const
{
    return !(*this == x);
}

/*!
 * @brief This function sets a value in member x
 * @param _x New value for member x
 */
void geometry_msgs::msg::Pose2D::x(
        double _x)
{
    m_x = _x;
}

/*!
 * @brief This function returns the value of member x
 * @return Value of member x
 */
double geometry_msgs::msg::Pose2D::x() const
{
    return m_x;
}

/*!
 * @brief This function returns a reference to member x
 * @return Reference to member x
 */
double& geometry_msgs::msg::Pose2D::x()
{
    return m_x;
}


/*!
 * @brief This function sets a value in member y
 * @param _y New value for member y
 */
void geometry_msgs::msg::Pose2D::y(
        double _y)
{
    m_y = _y;
}

/*!
 * @brief This function returns the value of member y
 * @return Value of member y
 */
double geometry_msgs::msg::Pose2D::y() const
{
    return m_y;
}

/*!
 * @brief This function returns a reference to member y
 * @return Reference to member y
 */
double& geometry_msgs::msg::Pose2D::y()
{
    return m_y;
}


/*!
 * @brief This function sets a value in member theta
 * @param _theta New value for member theta
 */
void geometry_msgs::msg::Pose2D::theta(
        double _theta)
{
    m_theta = _theta;
}

/*!
 * @brief This function returns the value of member theta
 * @return Value of member theta
 */
double geometry_msgs::msg::Pose2D::theta() const
{
    return m_theta;
}

/*!
 * @brief This function returns a reference to member theta
 * @return Reference to member theta
 */
double& geometry_msgs::msg::Pose2D::theta()
{
    return m_theta;
}




// Include auxiliary functions like for serializing/deserializing.
#include "Pose2DCdrAux.ipp"
