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
 * @file MultiEchoLaserScan.cpp
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

#include "MultiEchoLaserScan.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

sensor_msgs::msg::MultiEchoLaserScan::MultiEchoLaserScan()
{
    // m_header com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@50cf5a23

    // m_angle_min com.eprosima.idl.parser.typecode.PrimitiveTypeCode@450794b4
    m_angle_min = 0.0;
    // m_angle_max com.eprosima.idl.parser.typecode.PrimitiveTypeCode@273c947f
    m_angle_max = 0.0;
    // m_angle_increment com.eprosima.idl.parser.typecode.PrimitiveTypeCode@30457e14
    m_angle_increment = 0.0;
    // m_time_increment com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1af1347d
    m_time_increment = 0.0;
    // m_scan_time com.eprosima.idl.parser.typecode.PrimitiveTypeCode@632aa1a3
    m_scan_time = 0.0;
    // m_range_min com.eprosima.idl.parser.typecode.PrimitiveTypeCode@20765ed5
    m_range_min = 0.0;
    // m_range_max com.eprosima.idl.parser.typecode.PrimitiveTypeCode@3b582111
    m_range_max = 0.0;
    // m_ranges com.eprosima.idl.parser.typecode.SequenceTypeCode@2899a8db

    // m_intensities com.eprosima.idl.parser.typecode.SequenceTypeCode@1e8823d2


}

sensor_msgs::msg::MultiEchoLaserScan::~MultiEchoLaserScan()
{










}

sensor_msgs::msg::MultiEchoLaserScan::MultiEchoLaserScan(
        const MultiEchoLaserScan& x)
{
    m_header = x.m_header;
    m_angle_min = x.m_angle_min;
    m_angle_max = x.m_angle_max;
    m_angle_increment = x.m_angle_increment;
    m_time_increment = x.m_time_increment;
    m_scan_time = x.m_scan_time;
    m_range_min = x.m_range_min;
    m_range_max = x.m_range_max;
    m_ranges = x.m_ranges;
    m_intensities = x.m_intensities;
}

sensor_msgs::msg::MultiEchoLaserScan::MultiEchoLaserScan(
        MultiEchoLaserScan&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_angle_min = x.m_angle_min;
    m_angle_max = x.m_angle_max;
    m_angle_increment = x.m_angle_increment;
    m_time_increment = x.m_time_increment;
    m_scan_time = x.m_scan_time;
    m_range_min = x.m_range_min;
    m_range_max = x.m_range_max;
    m_ranges = std::move(x.m_ranges);
    m_intensities = std::move(x.m_intensities);
}

sensor_msgs::msg::MultiEchoLaserScan& sensor_msgs::msg::MultiEchoLaserScan::operator =(
        const MultiEchoLaserScan& x)
{

    m_header = x.m_header;
    m_angle_min = x.m_angle_min;
    m_angle_max = x.m_angle_max;
    m_angle_increment = x.m_angle_increment;
    m_time_increment = x.m_time_increment;
    m_scan_time = x.m_scan_time;
    m_range_min = x.m_range_min;
    m_range_max = x.m_range_max;
    m_ranges = x.m_ranges;
    m_intensities = x.m_intensities;

    return *this;
}

sensor_msgs::msg::MultiEchoLaserScan& sensor_msgs::msg::MultiEchoLaserScan::operator =(
        MultiEchoLaserScan&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_angle_min = x.m_angle_min;
    m_angle_max = x.m_angle_max;
    m_angle_increment = x.m_angle_increment;
    m_time_increment = x.m_time_increment;
    m_scan_time = x.m_scan_time;
    m_range_min = x.m_range_min;
    m_range_max = x.m_range_max;
    m_ranges = std::move(x.m_ranges);
    m_intensities = std::move(x.m_intensities);

    return *this;
}

bool sensor_msgs::msg::MultiEchoLaserScan::operator ==(
        const MultiEchoLaserScan& x) const
{

    return (m_header == x.m_header && m_angle_min == x.m_angle_min && m_angle_max == x.m_angle_max && m_angle_increment == x.m_angle_increment && m_time_increment == x.m_time_increment && m_scan_time == x.m_scan_time && m_range_min == x.m_range_min && m_range_max == x.m_range_max && m_ranges == x.m_ranges && m_intensities == x.m_intensities);
}

bool sensor_msgs::msg::MultiEchoLaserScan::operator !=(
        const MultiEchoLaserScan& x) const
{
    return !(*this == x);
}

size_t sensor_msgs::msg::MultiEchoLaserScan::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += sensor_msgs::msg::LaserEcho::getMaxCdrSerializedSize(current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += sensor_msgs::msg::LaserEcho::getMaxCdrSerializedSize(current_alignment);}


    return current_alignment - initial_alignment;
}

size_t sensor_msgs::msg::MultiEchoLaserScan::getCdrSerializedSize(
        const sensor_msgs::msg::MultiEchoLaserScan& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.ranges().size(); ++a)
    {
        current_alignment += sensor_msgs::msg::LaserEcho::getCdrSerializedSize(data.ranges().at(a), current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.intensities().size(); ++a)
    {
        current_alignment += sensor_msgs::msg::LaserEcho::getCdrSerializedSize(data.intensities().at(a), current_alignment);}


    return current_alignment - initial_alignment;
}

void sensor_msgs::msg::MultiEchoLaserScan::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_angle_min;
    scdr << m_angle_max;
    scdr << m_angle_increment;
    scdr << m_time_increment;
    scdr << m_scan_time;
    scdr << m_range_min;
    scdr << m_range_max;
    scdr << m_ranges;
    scdr << m_intensities;

}

void sensor_msgs::msg::MultiEchoLaserScan::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_angle_min;
    dcdr >> m_angle_max;
    dcdr >> m_angle_increment;
    dcdr >> m_time_increment;
    dcdr >> m_scan_time;
    dcdr >> m_range_min;
    dcdr >> m_range_max;
    dcdr >> m_ranges;
    dcdr >> m_intensities;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void sensor_msgs::msg::MultiEchoLaserScan::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void sensor_msgs::msg::MultiEchoLaserScan::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& sensor_msgs::msg::MultiEchoLaserScan::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& sensor_msgs::msg::MultiEchoLaserScan::header()
{
    return m_header;
}
/*!
 * @brief This function sets a value in member angle_min
 * @param _angle_min New value for member angle_min
 */
void sensor_msgs::msg::MultiEchoLaserScan::angle_min(
        float _angle_min)
{
    m_angle_min = _angle_min;
}

/*!
 * @brief This function returns the value of member angle_min
 * @return Value of member angle_min
 */
float sensor_msgs::msg::MultiEchoLaserScan::angle_min() const
{
    return m_angle_min;
}

/*!
 * @brief This function returns a reference to member angle_min
 * @return Reference to member angle_min
 */
float& sensor_msgs::msg::MultiEchoLaserScan::angle_min()
{
    return m_angle_min;
}

/*!
 * @brief This function sets a value in member angle_max
 * @param _angle_max New value for member angle_max
 */
void sensor_msgs::msg::MultiEchoLaserScan::angle_max(
        float _angle_max)
{
    m_angle_max = _angle_max;
}

/*!
 * @brief This function returns the value of member angle_max
 * @return Value of member angle_max
 */
float sensor_msgs::msg::MultiEchoLaserScan::angle_max() const
{
    return m_angle_max;
}

/*!
 * @brief This function returns a reference to member angle_max
 * @return Reference to member angle_max
 */
float& sensor_msgs::msg::MultiEchoLaserScan::angle_max()
{
    return m_angle_max;
}

/*!
 * @brief This function sets a value in member angle_increment
 * @param _angle_increment New value for member angle_increment
 */
void sensor_msgs::msg::MultiEchoLaserScan::angle_increment(
        float _angle_increment)
{
    m_angle_increment = _angle_increment;
}

/*!
 * @brief This function returns the value of member angle_increment
 * @return Value of member angle_increment
 */
float sensor_msgs::msg::MultiEchoLaserScan::angle_increment() const
{
    return m_angle_increment;
}

/*!
 * @brief This function returns a reference to member angle_increment
 * @return Reference to member angle_increment
 */
float& sensor_msgs::msg::MultiEchoLaserScan::angle_increment()
{
    return m_angle_increment;
}

/*!
 * @brief This function sets a value in member time_increment
 * @param _time_increment New value for member time_increment
 */
void sensor_msgs::msg::MultiEchoLaserScan::time_increment(
        float _time_increment)
{
    m_time_increment = _time_increment;
}

/*!
 * @brief This function returns the value of member time_increment
 * @return Value of member time_increment
 */
float sensor_msgs::msg::MultiEchoLaserScan::time_increment() const
{
    return m_time_increment;
}

/*!
 * @brief This function returns a reference to member time_increment
 * @return Reference to member time_increment
 */
float& sensor_msgs::msg::MultiEchoLaserScan::time_increment()
{
    return m_time_increment;
}

/*!
 * @brief This function sets a value in member scan_time
 * @param _scan_time New value for member scan_time
 */
void sensor_msgs::msg::MultiEchoLaserScan::scan_time(
        float _scan_time)
{
    m_scan_time = _scan_time;
}

/*!
 * @brief This function returns the value of member scan_time
 * @return Value of member scan_time
 */
float sensor_msgs::msg::MultiEchoLaserScan::scan_time() const
{
    return m_scan_time;
}

/*!
 * @brief This function returns a reference to member scan_time
 * @return Reference to member scan_time
 */
float& sensor_msgs::msg::MultiEchoLaserScan::scan_time()
{
    return m_scan_time;
}

/*!
 * @brief This function sets a value in member range_min
 * @param _range_min New value for member range_min
 */
void sensor_msgs::msg::MultiEchoLaserScan::range_min(
        float _range_min)
{
    m_range_min = _range_min;
}

/*!
 * @brief This function returns the value of member range_min
 * @return Value of member range_min
 */
float sensor_msgs::msg::MultiEchoLaserScan::range_min() const
{
    return m_range_min;
}

/*!
 * @brief This function returns a reference to member range_min
 * @return Reference to member range_min
 */
float& sensor_msgs::msg::MultiEchoLaserScan::range_min()
{
    return m_range_min;
}

/*!
 * @brief This function sets a value in member range_max
 * @param _range_max New value for member range_max
 */
void sensor_msgs::msg::MultiEchoLaserScan::range_max(
        float _range_max)
{
    m_range_max = _range_max;
}

/*!
 * @brief This function returns the value of member range_max
 * @return Value of member range_max
 */
float sensor_msgs::msg::MultiEchoLaserScan::range_max() const
{
    return m_range_max;
}

/*!
 * @brief This function returns a reference to member range_max
 * @return Reference to member range_max
 */
float& sensor_msgs::msg::MultiEchoLaserScan::range_max()
{
    return m_range_max;
}

/*!
 * @brief This function copies the value in member ranges
 * @param _ranges New value to be copied in member ranges
 */
void sensor_msgs::msg::MultiEchoLaserScan::ranges(
        const std::vector<sensor_msgs::msg::LaserEcho>& _ranges)
{
    m_ranges = _ranges;
}

/*!
 * @brief This function moves the value in member ranges
 * @param _ranges New value to be moved in member ranges
 */
void sensor_msgs::msg::MultiEchoLaserScan::ranges(
        std::vector<sensor_msgs::msg::LaserEcho>&& _ranges)
{
    m_ranges = std::move(_ranges);
}

/*!
 * @brief This function returns a constant reference to member ranges
 * @return Constant reference to member ranges
 */
const std::vector<sensor_msgs::msg::LaserEcho>& sensor_msgs::msg::MultiEchoLaserScan::ranges() const
{
    return m_ranges;
}

/*!
 * @brief This function returns a reference to member ranges
 * @return Reference to member ranges
 */
std::vector<sensor_msgs::msg::LaserEcho>& sensor_msgs::msg::MultiEchoLaserScan::ranges()
{
    return m_ranges;
}
/*!
 * @brief This function copies the value in member intensities
 * @param _intensities New value to be copied in member intensities
 */
void sensor_msgs::msg::MultiEchoLaserScan::intensities(
        const std::vector<sensor_msgs::msg::LaserEcho>& _intensities)
{
    m_intensities = _intensities;
}

/*!
 * @brief This function moves the value in member intensities
 * @param _intensities New value to be moved in member intensities
 */
void sensor_msgs::msg::MultiEchoLaserScan::intensities(
        std::vector<sensor_msgs::msg::LaserEcho>&& _intensities)
{
    m_intensities = std::move(_intensities);
}

/*!
 * @brief This function returns a constant reference to member intensities
 * @return Constant reference to member intensities
 */
const std::vector<sensor_msgs::msg::LaserEcho>& sensor_msgs::msg::MultiEchoLaserScan::intensities() const
{
    return m_intensities;
}

/*!
 * @brief This function returns a reference to member intensities
 * @return Reference to member intensities
 */
std::vector<sensor_msgs::msg::LaserEcho>& sensor_msgs::msg::MultiEchoLaserScan::intensities()
{
    return m_intensities;
}

size_t sensor_msgs::msg::MultiEchoLaserScan::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;













    return current_align;
}

bool sensor_msgs::msg::MultiEchoLaserScan::isKeyDefined()
{
    return false;
}

void sensor_msgs::msg::MultiEchoLaserScan::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
              
}


