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
 * @file PointCloud2.cpp
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

#include "PointCloud2.h"
#include <fastcdr/Cdr.h>


#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


sensor_msgs::msg::PointCloud2::PointCloud2()
{

}

sensor_msgs::msg::PointCloud2::~PointCloud2()
{
}

sensor_msgs::msg::PointCloud2::PointCloud2(
        const PointCloud2& x)
{
    m_header = x.m_header;
    m_height = x.m_height;
    m_width = x.m_width;
    m_fields = x.m_fields;
    m_is_bigendian = x.m_is_bigendian;
    m_point_step = x.m_point_step;
    m_row_step = x.m_row_step;
    m_data = x.m_data;
    m_is_dense = x.m_is_dense;
}

sensor_msgs::msg::PointCloud2::PointCloud2(
        PointCloud2&& x) noexcept
{
    m_header = std::move(x.m_header);
    m_height = x.m_height;
    m_width = x.m_width;
    m_fields = std::move(x.m_fields);
    m_is_bigendian = x.m_is_bigendian;
    m_point_step = x.m_point_step;
    m_row_step = x.m_row_step;
    m_data = std::move(x.m_data);
    m_is_dense = x.m_is_dense;
}

sensor_msgs::msg::PointCloud2& sensor_msgs::msg::PointCloud2::operator =(
        const PointCloud2& x)
{

    m_header = x.m_header;
    m_height = x.m_height;
    m_width = x.m_width;
    m_fields = x.m_fields;
    m_is_bigendian = x.m_is_bigendian;
    m_point_step = x.m_point_step;
    m_row_step = x.m_row_step;
    m_data = x.m_data;
    m_is_dense = x.m_is_dense;

    return *this;
}

sensor_msgs::msg::PointCloud2& sensor_msgs::msg::PointCloud2::operator =(
        PointCloud2&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_height = x.m_height;
    m_width = x.m_width;
    m_fields = std::move(x.m_fields);
    m_is_bigendian = x.m_is_bigendian;
    m_point_step = x.m_point_step;
    m_row_step = x.m_row_step;
    m_data = std::move(x.m_data);
    m_is_dense = x.m_is_dense;

    return *this;
}

bool sensor_msgs::msg::PointCloud2::operator ==(
        const PointCloud2& x) const
{
    return (m_header == x.m_header &&
           m_height == x.m_height &&
           m_width == x.m_width &&
           m_fields == x.m_fields &&
           m_is_bigendian == x.m_is_bigendian &&
           m_point_step == x.m_point_step &&
           m_row_step == x.m_row_step &&
           m_data == x.m_data &&
           m_is_dense == x.m_is_dense);
}

bool sensor_msgs::msg::PointCloud2::operator !=(
        const PointCloud2& x) const
{
    return !(*this == x);
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void sensor_msgs::msg::PointCloud2::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void sensor_msgs::msg::PointCloud2::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& sensor_msgs::msg::PointCloud2::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& sensor_msgs::msg::PointCloud2::header()
{
    return m_header;
}


/*!
 * @brief This function sets a value in member height
 * @param _height New value for member height
 */
void sensor_msgs::msg::PointCloud2::height(
        uint32_t _height)
{
    m_height = _height;
}

/*!
 * @brief This function returns the value of member height
 * @return Value of member height
 */
uint32_t sensor_msgs::msg::PointCloud2::height() const
{
    return m_height;
}

/*!
 * @brief This function returns a reference to member height
 * @return Reference to member height
 */
uint32_t& sensor_msgs::msg::PointCloud2::height()
{
    return m_height;
}


/*!
 * @brief This function sets a value in member width
 * @param _width New value for member width
 */
void sensor_msgs::msg::PointCloud2::width(
        uint32_t _width)
{
    m_width = _width;
}

/*!
 * @brief This function returns the value of member width
 * @return Value of member width
 */
uint32_t sensor_msgs::msg::PointCloud2::width() const
{
    return m_width;
}

/*!
 * @brief This function returns a reference to member width
 * @return Reference to member width
 */
uint32_t& sensor_msgs::msg::PointCloud2::width()
{
    return m_width;
}


/*!
 * @brief This function copies the value in member fields
 * @param _fields New value to be copied in member fields
 */
void sensor_msgs::msg::PointCloud2::fields(
        const std::vector<sensor_msgs::msg::PointField>& _fields)
{
    m_fields = _fields;
}

/*!
 * @brief This function moves the value in member fields
 * @param _fields New value to be moved in member fields
 */
void sensor_msgs::msg::PointCloud2::fields(
        std::vector<sensor_msgs::msg::PointField>&& _fields)
{
    m_fields = std::move(_fields);
}

/*!
 * @brief This function returns a constant reference to member fields
 * @return Constant reference to member fields
 */
const std::vector<sensor_msgs::msg::PointField>& sensor_msgs::msg::PointCloud2::fields() const
{
    return m_fields;
}

/*!
 * @brief This function returns a reference to member fields
 * @return Reference to member fields
 */
std::vector<sensor_msgs::msg::PointField>& sensor_msgs::msg::PointCloud2::fields()
{
    return m_fields;
}


/*!
 * @brief This function sets a value in member is_bigendian
 * @param _is_bigendian New value for member is_bigendian
 */
void sensor_msgs::msg::PointCloud2::is_bigendian(
        bool _is_bigendian)
{
    m_is_bigendian = _is_bigendian;
}

/*!
 * @brief This function returns the value of member is_bigendian
 * @return Value of member is_bigendian
 */
bool sensor_msgs::msg::PointCloud2::is_bigendian() const
{
    return m_is_bigendian;
}

/*!
 * @brief This function returns a reference to member is_bigendian
 * @return Reference to member is_bigendian
 */
bool& sensor_msgs::msg::PointCloud2::is_bigendian()
{
    return m_is_bigendian;
}


/*!
 * @brief This function sets a value in member point_step
 * @param _point_step New value for member point_step
 */
void sensor_msgs::msg::PointCloud2::point_step(
        uint32_t _point_step)
{
    m_point_step = _point_step;
}

/*!
 * @brief This function returns the value of member point_step
 * @return Value of member point_step
 */
uint32_t sensor_msgs::msg::PointCloud2::point_step() const
{
    return m_point_step;
}

/*!
 * @brief This function returns a reference to member point_step
 * @return Reference to member point_step
 */
uint32_t& sensor_msgs::msg::PointCloud2::point_step()
{
    return m_point_step;
}


/*!
 * @brief This function sets a value in member row_step
 * @param _row_step New value for member row_step
 */
void sensor_msgs::msg::PointCloud2::row_step(
        uint32_t _row_step)
{
    m_row_step = _row_step;
}

/*!
 * @brief This function returns the value of member row_step
 * @return Value of member row_step
 */
uint32_t sensor_msgs::msg::PointCloud2::row_step() const
{
    return m_row_step;
}

/*!
 * @brief This function returns a reference to member row_step
 * @return Reference to member row_step
 */
uint32_t& sensor_msgs::msg::PointCloud2::row_step()
{
    return m_row_step;
}


/*!
 * @brief This function copies the value in member data
 * @param _data New value to be copied in member data
 */
void sensor_msgs::msg::PointCloud2::data(
        const std::vector<uint8_t>& _data)
{
    m_data = _data;
}

/*!
 * @brief This function moves the value in member data
 * @param _data New value to be moved in member data
 */
void sensor_msgs::msg::PointCloud2::data(
        std::vector<uint8_t>&& _data)
{
    m_data = std::move(_data);
}

/*!
 * @brief This function returns a constant reference to member data
 * @return Constant reference to member data
 */
const std::vector<uint8_t>& sensor_msgs::msg::PointCloud2::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
std::vector<uint8_t>& sensor_msgs::msg::PointCloud2::data()
{
    return m_data;
}


/*!
 * @brief This function sets a value in member is_dense
 * @param _is_dense New value for member is_dense
 */
void sensor_msgs::msg::PointCloud2::is_dense(
        bool _is_dense)
{
    m_is_dense = _is_dense;
}

/*!
 * @brief This function returns the value of member is_dense
 * @return Value of member is_dense
 */
bool sensor_msgs::msg::PointCloud2::is_dense() const
{
    return m_is_dense;
}

/*!
 * @brief This function returns a reference to member is_dense
 * @return Reference to member is_dense
 */
bool& sensor_msgs::msg::PointCloud2::is_dense()
{
    return m_is_dense;
}




// Include auxiliary functions like for serializing/deserializing.
#include "PointCloud2CdrAux.ipp"
