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
 * @file CompressedImage.cpp
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

#include "CompressedImage.h"
#include <fastcdr/Cdr.h>


#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


sensor_msgs::msg::CompressedImage::CompressedImage()
{

}

sensor_msgs::msg::CompressedImage::~CompressedImage()
{
}

sensor_msgs::msg::CompressedImage::CompressedImage(
        const CompressedImage& x)
{
    m_header = x.m_header;
    m_format = x.m_format;
    m_data = x.m_data;
}

sensor_msgs::msg::CompressedImage::CompressedImage(
        CompressedImage&& x) noexcept
{
    m_header = std::move(x.m_header);
    m_format = std::move(x.m_format);
    m_data = std::move(x.m_data);
}

sensor_msgs::msg::CompressedImage& sensor_msgs::msg::CompressedImage::operator =(
        const CompressedImage& x)
{

    m_header = x.m_header;
    m_format = x.m_format;
    m_data = x.m_data;

    return *this;
}

sensor_msgs::msg::CompressedImage& sensor_msgs::msg::CompressedImage::operator =(
        CompressedImage&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_format = std::move(x.m_format);
    m_data = std::move(x.m_data);

    return *this;
}

bool sensor_msgs::msg::CompressedImage::operator ==(
        const CompressedImage& x) const
{
    return (m_header == x.m_header &&
           m_format == x.m_format &&
           m_data == x.m_data);
}

bool sensor_msgs::msg::CompressedImage::operator !=(
        const CompressedImage& x) const
{
    return !(*this == x);
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void sensor_msgs::msg::CompressedImage::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void sensor_msgs::msg::CompressedImage::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& sensor_msgs::msg::CompressedImage::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& sensor_msgs::msg::CompressedImage::header()
{
    return m_header;
}


/*!
 * @brief This function copies the value in member format
 * @param _format New value to be copied in member format
 */
void sensor_msgs::msg::CompressedImage::format(
        const std::string& _format)
{
    m_format = _format;
}

/*!
 * @brief This function moves the value in member format
 * @param _format New value to be moved in member format
 */
void sensor_msgs::msg::CompressedImage::format(
        std::string&& _format)
{
    m_format = std::move(_format);
}

/*!
 * @brief This function returns a constant reference to member format
 * @return Constant reference to member format
 */
const std::string& sensor_msgs::msg::CompressedImage::format() const
{
    return m_format;
}

/*!
 * @brief This function returns a reference to member format
 * @return Reference to member format
 */
std::string& sensor_msgs::msg::CompressedImage::format()
{
    return m_format;
}


/*!
 * @brief This function copies the value in member data
 * @param _data New value to be copied in member data
 */
void sensor_msgs::msg::CompressedImage::data(
        const std::vector<uint8_t>& _data)
{
    m_data = _data;
}

/*!
 * @brief This function moves the value in member data
 * @param _data New value to be moved in member data
 */
void sensor_msgs::msg::CompressedImage::data(
        std::vector<uint8_t>&& _data)
{
    m_data = std::move(_data);
}

/*!
 * @brief This function returns a constant reference to member data
 * @return Constant reference to member data
 */
const std::vector<uint8_t>& sensor_msgs::msg::CompressedImage::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
std::vector<uint8_t>& sensor_msgs::msg::CompressedImage::data()
{
    return m_data;
}




// Include auxiliary functions like for serializing/deserializing.
#include "CompressedImageCdrAux.ipp"
