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
 * @file CameraInfo.cpp
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

#include "CameraInfo.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>



sensor_msgs::msg::CameraInfo::CameraInfo()
{
    // m_header com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@3212d853

    // m_height com.eprosima.idl.parser.typecode.PrimitiveTypeCode@74c7522c
    m_height = 0;
    // m_width com.eprosima.idl.parser.typecode.PrimitiveTypeCode@77c23d90
    m_width = 0;
    // m_distortion_model com.eprosima.idl.parser.typecode.StringTypeCode@6d17914a
    m_distortion_model ="";
    // m_d com.eprosima.idl.parser.typecode.SequenceTypeCode@49631cfb

    // m_k com.eprosima.idl.parser.typecode.AliasTypeCode@77b71c9
    memset(&m_k, 0, (9) * 8);
    // m_r com.eprosima.idl.parser.typecode.AliasTypeCode@77b71c9
    memset(&m_r, 0, (9) * 8);
    // m_p com.eprosima.idl.parser.typecode.AliasTypeCode@6133e20b
    memset(&m_p, 0, (12) * 8);
    // m_binning_x com.eprosima.idl.parser.typecode.PrimitiveTypeCode@30ffb2a6
    m_binning_x = 0;
    // m_binning_y com.eprosima.idl.parser.typecode.PrimitiveTypeCode@612af486
    m_binning_y = 0;
    // m_roi com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@3d033453


}

sensor_msgs::msg::CameraInfo::~CameraInfo()
{











}

sensor_msgs::msg::CameraInfo::CameraInfo(
        const CameraInfo& x)
{
    m_header = x.m_header;
    m_height = x.m_height;
    m_width = x.m_width;
    m_distortion_model = x.m_distortion_model;
    m_d = x.m_d;
    m_k = x.m_k;
    m_r = x.m_r;
    m_p = x.m_p;
    m_binning_x = x.m_binning_x;
    m_binning_y = x.m_binning_y;
    m_roi = x.m_roi;
}

sensor_msgs::msg::CameraInfo::CameraInfo(
        CameraInfo&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_height = x.m_height;
    m_width = x.m_width;
    m_distortion_model = std::move(x.m_distortion_model);
    m_d = std::move(x.m_d);
    m_k = std::move(x.m_k);
    m_r = std::move(x.m_r);
    m_p = std::move(x.m_p);
    m_binning_x = x.m_binning_x;
    m_binning_y = x.m_binning_y;
    m_roi = std::move(x.m_roi);
}

sensor_msgs::msg::CameraInfo& sensor_msgs::msg::CameraInfo::operator =(
        const CameraInfo& x)
{

    m_header = x.m_header;
    m_height = x.m_height;
    m_width = x.m_width;
    m_distortion_model = x.m_distortion_model;
    m_d = x.m_d;
    m_k = x.m_k;
    m_r = x.m_r;
    m_p = x.m_p;
    m_binning_x = x.m_binning_x;
    m_binning_y = x.m_binning_y;
    m_roi = x.m_roi;

    return *this;
}

sensor_msgs::msg::CameraInfo& sensor_msgs::msg::CameraInfo::operator =(
        CameraInfo&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_height = x.m_height;
    m_width = x.m_width;
    m_distortion_model = std::move(x.m_distortion_model);
    m_d = std::move(x.m_d);
    m_k = std::move(x.m_k);
    m_r = std::move(x.m_r);
    m_p = std::move(x.m_p);
    m_binning_x = x.m_binning_x;
    m_binning_y = x.m_binning_y;
    m_roi = std::move(x.m_roi);

    return *this;
}

bool sensor_msgs::msg::CameraInfo::operator ==(
        const CameraInfo& x) const
{

    return (m_header == x.m_header && m_height == x.m_height && m_width == x.m_width && m_distortion_model == x.m_distortion_model && m_d == x.m_d && m_k == x.m_k && m_r == x.m_r && m_p == x.m_p && m_binning_x == x.m_binning_x && m_binning_y == x.m_binning_y && m_roi == x.m_roi);
}

bool sensor_msgs::msg::CameraInfo::operator !=(
        const CameraInfo& x) const
{
    return !(*this == x);
}

size_t sensor_msgs::msg::CameraInfo::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (100 * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    current_alignment += ((9) * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += ((9) * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += ((12) * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += sensor_msgs::msg::RegionOfInterest::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t sensor_msgs::msg::CameraInfo::getCdrSerializedSize(
        const sensor_msgs::msg::CameraInfo& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.distortion_model().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.d().size() > 0)
    {
        current_alignment += (data.d().size() * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);
    }



    if ((9) > 0)
    {
        current_alignment += ((9) * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);
    }

    if ((9) > 0)
    {
        current_alignment += ((9) * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);
    }

    if ((12) > 0)
    {
        current_alignment += ((12) * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);
    }

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += sensor_msgs::msg::RegionOfInterest::getCdrSerializedSize(data.roi(), current_alignment);

    return current_alignment - initial_alignment;
}

void sensor_msgs::msg::CameraInfo::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_height;
    scdr << m_width;
    scdr << m_distortion_model.c_str();
    scdr << m_d;
    scdr << m_k;

    scdr << m_r;

    scdr << m_p;

    scdr << m_binning_x;
    scdr << m_binning_y;
    scdr << m_roi;

}

void sensor_msgs::msg::CameraInfo::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_height;
    dcdr >> m_width;
    dcdr >> m_distortion_model;
    dcdr >> m_d;
    dcdr >> m_k;

    dcdr >> m_r;

    dcdr >> m_p;

    dcdr >> m_binning_x;
    dcdr >> m_binning_y;
    dcdr >> m_roi;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void sensor_msgs::msg::CameraInfo::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void sensor_msgs::msg::CameraInfo::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& sensor_msgs::msg::CameraInfo::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& sensor_msgs::msg::CameraInfo::header()
{
    return m_header;
}
/*!
 * @brief This function sets a value in member height
 * @param _height New value for member height
 */
void sensor_msgs::msg::CameraInfo::height(
        uint32_t _height)
{
    m_height = _height;
}

/*!
 * @brief This function returns the value of member height
 * @return Value of member height
 */
uint32_t sensor_msgs::msg::CameraInfo::height() const
{
    return m_height;
}

/*!
 * @brief This function returns a reference to member height
 * @return Reference to member height
 */
uint32_t& sensor_msgs::msg::CameraInfo::height()
{
    return m_height;
}

/*!
 * @brief This function sets a value in member width
 * @param _width New value for member width
 */
void sensor_msgs::msg::CameraInfo::width(
        uint32_t _width)
{
    m_width = _width;
}

/*!
 * @brief This function returns the value of member width
 * @return Value of member width
 */
uint32_t sensor_msgs::msg::CameraInfo::width() const
{
    return m_width;
}

/*!
 * @brief This function returns a reference to member width
 * @return Reference to member width
 */
uint32_t& sensor_msgs::msg::CameraInfo::width()
{
    return m_width;
}

/*!
 * @brief This function copies the value in member distortion_model
 * @param _distortion_model New value to be copied in member distortion_model
 */
void sensor_msgs::msg::CameraInfo::distortion_model(
        const std::string& _distortion_model)
{
    m_distortion_model = _distortion_model;
}

/*!
 * @brief This function moves the value in member distortion_model
 * @param _distortion_model New value to be moved in member distortion_model
 */
void sensor_msgs::msg::CameraInfo::distortion_model(
        std::string&& _distortion_model)
{
    m_distortion_model = std::move(_distortion_model);
}

/*!
 * @brief This function returns a constant reference to member distortion_model
 * @return Constant reference to member distortion_model
 */
const std::string& sensor_msgs::msg::CameraInfo::distortion_model() const
{
    return m_distortion_model;
}

/*!
 * @brief This function returns a reference to member distortion_model
 * @return Reference to member distortion_model
 */
std::string& sensor_msgs::msg::CameraInfo::distortion_model()
{
    return m_distortion_model;
}
/*!
 * @brief This function copies the value in member d
 * @param _d New value to be copied in member d
 */
void sensor_msgs::msg::CameraInfo::d(
        const std::vector<double>& _d)
{
    m_d = _d;
}

/*!
 * @brief This function moves the value in member d
 * @param _d New value to be moved in member d
 */
void sensor_msgs::msg::CameraInfo::d(
        std::vector<double>&& _d)
{
    m_d = std::move(_d);
}

/*!
 * @brief This function returns a constant reference to member d
 * @return Constant reference to member d
 */
const std::vector<double>& sensor_msgs::msg::CameraInfo::d() const
{
    return m_d;
}

/*!
 * @brief This function returns a reference to member d
 * @return Reference to member d
 */
std::vector<double>& sensor_msgs::msg::CameraInfo::d()
{
    return m_d;
}
/*!
 * @brief This function copies the value in member k
 * @param _k New value to be copied in member k
 */
void sensor_msgs::msg::CameraInfo::k(
        const sensor_msgs::msg::double__9& _k)
{
    m_k = _k;
}

/*!
 * @brief This function moves the value in member k
 * @param _k New value to be moved in member k
 */
void sensor_msgs::msg::CameraInfo::k(
        sensor_msgs::msg::double__9&& _k)
{
    m_k = std::move(_k);
}

/*!
 * @brief This function returns a constant reference to member k
 * @return Constant reference to member k
 */
const sensor_msgs::msg::double__9& sensor_msgs::msg::CameraInfo::k() const
{
    return m_k;
}

/*!
 * @brief This function returns a reference to member k
 * @return Reference to member k
 */
sensor_msgs::msg::double__9& sensor_msgs::msg::CameraInfo::k()
{
    return m_k;
}
/*!
 * @brief This function copies the value in member r
 * @param _r New value to be copied in member r
 */
void sensor_msgs::msg::CameraInfo::r(
        const sensor_msgs::msg::double__9& _r)
{
    m_r = _r;
}

/*!
 * @brief This function moves the value in member r
 * @param _r New value to be moved in member r
 */
void sensor_msgs::msg::CameraInfo::r(
        sensor_msgs::msg::double__9&& _r)
{
    m_r = std::move(_r);
}

/*!
 * @brief This function returns a constant reference to member r
 * @return Constant reference to member r
 */
const sensor_msgs::msg::double__9& sensor_msgs::msg::CameraInfo::r() const
{
    return m_r;
}

/*!
 * @brief This function returns a reference to member r
 * @return Reference to member r
 */
sensor_msgs::msg::double__9& sensor_msgs::msg::CameraInfo::r()
{
    return m_r;
}
/*!
 * @brief This function copies the value in member p
 * @param _p New value to be copied in member p
 */
void sensor_msgs::msg::CameraInfo::p(
        const sensor_msgs::msg::double__12& _p)
{
    m_p = _p;
}

/*!
 * @brief This function moves the value in member p
 * @param _p New value to be moved in member p
 */
void sensor_msgs::msg::CameraInfo::p(
        sensor_msgs::msg::double__12&& _p)
{
    m_p = std::move(_p);
}

/*!
 * @brief This function returns a constant reference to member p
 * @return Constant reference to member p
 */
const sensor_msgs::msg::double__12& sensor_msgs::msg::CameraInfo::p() const
{
    return m_p;
}

/*!
 * @brief This function returns a reference to member p
 * @return Reference to member p
 */
sensor_msgs::msg::double__12& sensor_msgs::msg::CameraInfo::p()
{
    return m_p;
}
/*!
 * @brief This function sets a value in member binning_x
 * @param _binning_x New value for member binning_x
 */
void sensor_msgs::msg::CameraInfo::binning_x(
        uint32_t _binning_x)
{
    m_binning_x = _binning_x;
}

/*!
 * @brief This function returns the value of member binning_x
 * @return Value of member binning_x
 */
uint32_t sensor_msgs::msg::CameraInfo::binning_x() const
{
    return m_binning_x;
}

/*!
 * @brief This function returns a reference to member binning_x
 * @return Reference to member binning_x
 */
uint32_t& sensor_msgs::msg::CameraInfo::binning_x()
{
    return m_binning_x;
}

/*!
 * @brief This function sets a value in member binning_y
 * @param _binning_y New value for member binning_y
 */
void sensor_msgs::msg::CameraInfo::binning_y(
        uint32_t _binning_y)
{
    m_binning_y = _binning_y;
}

/*!
 * @brief This function returns the value of member binning_y
 * @return Value of member binning_y
 */
uint32_t sensor_msgs::msg::CameraInfo::binning_y() const
{
    return m_binning_y;
}

/*!
 * @brief This function returns a reference to member binning_y
 * @return Reference to member binning_y
 */
uint32_t& sensor_msgs::msg::CameraInfo::binning_y()
{
    return m_binning_y;
}

/*!
 * @brief This function copies the value in member roi
 * @param _roi New value to be copied in member roi
 */
void sensor_msgs::msg::CameraInfo::roi(
        const sensor_msgs::msg::RegionOfInterest& _roi)
{
    m_roi = _roi;
}

/*!
 * @brief This function moves the value in member roi
 * @param _roi New value to be moved in member roi
 */
void sensor_msgs::msg::CameraInfo::roi(
        sensor_msgs::msg::RegionOfInterest&& _roi)
{
    m_roi = std::move(_roi);
}

/*!
 * @brief This function returns a constant reference to member roi
 * @return Constant reference to member roi
 */
const sensor_msgs::msg::RegionOfInterest& sensor_msgs::msg::CameraInfo::roi() const
{
    return m_roi;
}

/*!
 * @brief This function returns a reference to member roi
 * @return Reference to member roi
 */
sensor_msgs::msg::RegionOfInterest& sensor_msgs::msg::CameraInfo::roi()
{
    return m_roi;
}

size_t sensor_msgs::msg::CameraInfo::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;














    return current_align;
}

bool sensor_msgs::msg::CameraInfo::isKeyDefined()
{
    return false;
}

void sensor_msgs::msg::CameraInfo::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
               
}


