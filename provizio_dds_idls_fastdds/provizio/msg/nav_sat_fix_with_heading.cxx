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
 * @file nav_sat_fix_with_heading.cpp
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

#include "nav_sat_fix_with_heading.h"
#include <fastcdr/Cdr.h>


#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


provizio::msg::nav_sat_fix_with_heading::nav_sat_fix_with_heading()
{

}

provizio::msg::nav_sat_fix_with_heading::~nav_sat_fix_with_heading()
{
}

provizio::msg::nav_sat_fix_with_heading::nav_sat_fix_with_heading(
        const nav_sat_fix_with_heading& x)
{
    m_header = x.m_header;
    m_latitude = x.m_latitude;
    m_longitude = x.m_longitude;
    m_altitude = x.m_altitude;
    m_heading = x.m_heading;
}

provizio::msg::nav_sat_fix_with_heading::nav_sat_fix_with_heading(
        nav_sat_fix_with_heading&& x) noexcept
{
    m_header = std::move(x.m_header);
    m_latitude = x.m_latitude;
    m_longitude = x.m_longitude;
    m_altitude = x.m_altitude;
    m_heading = x.m_heading;
}

provizio::msg::nav_sat_fix_with_heading& provizio::msg::nav_sat_fix_with_heading::operator =(
        const nav_sat_fix_with_heading& x)
{

    m_header = x.m_header;
    m_latitude = x.m_latitude;
    m_longitude = x.m_longitude;
    m_altitude = x.m_altitude;
    m_heading = x.m_heading;

    return *this;
}

provizio::msg::nav_sat_fix_with_heading& provizio::msg::nav_sat_fix_with_heading::operator =(
        nav_sat_fix_with_heading&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_latitude = x.m_latitude;
    m_longitude = x.m_longitude;
    m_altitude = x.m_altitude;
    m_heading = x.m_heading;

    return *this;
}

bool provizio::msg::nav_sat_fix_with_heading::operator ==(
        const nav_sat_fix_with_heading& x) const
{
    return (m_header == x.m_header &&
           m_latitude == x.m_latitude &&
           m_longitude == x.m_longitude &&
           m_altitude == x.m_altitude &&
           m_heading == x.m_heading);
}

bool provizio::msg::nav_sat_fix_with_heading::operator !=(
        const nav_sat_fix_with_heading& x) const
{
    return !(*this == x);
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void provizio::msg::nav_sat_fix_with_heading::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void provizio::msg::nav_sat_fix_with_heading::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& provizio::msg::nav_sat_fix_with_heading::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& provizio::msg::nav_sat_fix_with_heading::header()
{
    return m_header;
}


/*!
 * @brief This function sets a value in member latitude
 * @param _latitude New value for member latitude
 */
void provizio::msg::nav_sat_fix_with_heading::latitude(
        double _latitude)
{
    m_latitude = _latitude;
}

/*!
 * @brief This function returns the value of member latitude
 * @return Value of member latitude
 */
double provizio::msg::nav_sat_fix_with_heading::latitude() const
{
    return m_latitude;
}

/*!
 * @brief This function returns a reference to member latitude
 * @return Reference to member latitude
 */
double& provizio::msg::nav_sat_fix_with_heading::latitude()
{
    return m_latitude;
}


/*!
 * @brief This function sets a value in member longitude
 * @param _longitude New value for member longitude
 */
void provizio::msg::nav_sat_fix_with_heading::longitude(
        double _longitude)
{
    m_longitude = _longitude;
}

/*!
 * @brief This function returns the value of member longitude
 * @return Value of member longitude
 */
double provizio::msg::nav_sat_fix_with_heading::longitude() const
{
    return m_longitude;
}

/*!
 * @brief This function returns a reference to member longitude
 * @return Reference to member longitude
 */
double& provizio::msg::nav_sat_fix_with_heading::longitude()
{
    return m_longitude;
}


/*!
 * @brief This function sets a value in member altitude
 * @param _altitude New value for member altitude
 */
void provizio::msg::nav_sat_fix_with_heading::altitude(
        double _altitude)
{
    m_altitude = _altitude;
}

/*!
 * @brief This function returns the value of member altitude
 * @return Value of member altitude
 */
double provizio::msg::nav_sat_fix_with_heading::altitude() const
{
    return m_altitude;
}

/*!
 * @brief This function returns a reference to member altitude
 * @return Reference to member altitude
 */
double& provizio::msg::nav_sat_fix_with_heading::altitude()
{
    return m_altitude;
}


/*!
 * @brief This function sets a value in member heading
 * @param _heading New value for member heading
 */
void provizio::msg::nav_sat_fix_with_heading::heading(
        double _heading)
{
    m_heading = _heading;
}

/*!
 * @brief This function returns the value of member heading
 * @return Value of member heading
 */
double provizio::msg::nav_sat_fix_with_heading::heading() const
{
    return m_heading;
}

/*!
 * @brief This function returns a reference to member heading
 * @return Reference to member heading
 */
double& provizio::msg::nav_sat_fix_with_heading::heading()
{
    return m_heading;
}




// Include auxiliary functions like for serializing/deserializing.
#include "nav_sat_fix_with_headingCdrAux.ipp"