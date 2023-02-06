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
 * @file ParameterDescriptor.cpp
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

#include "ParameterDescriptor.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

rcl_interfaces::msg::ParameterDescriptor::ParameterDescriptor()
{
    // m_name com.eprosima.idl.parser.typecode.StringTypeCode@3a3f96ab
    m_name ="";
    // m_type com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4def7d36
    m_type = 0;
    // m_description com.eprosima.idl.parser.typecode.StringTypeCode@43c7fe8a
    m_description ="";
    // m_additional_constraints com.eprosima.idl.parser.typecode.StringTypeCode@67f946c3
    m_additional_constraints ="";
    // m_read_only com.eprosima.idl.parser.typecode.PrimitiveTypeCode@21b51e59
    m_read_only = false;
    // m_dynamic_typing com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1785d194
    m_dynamic_typing = false;
    // m_floating_point_range com.eprosima.idl.parser.typecode.SequenceTypeCode@6b4a4e40

    // m_integer_range com.eprosima.idl.parser.typecode.SequenceTypeCode@46a8c2b4


}

rcl_interfaces::msg::ParameterDescriptor::~ParameterDescriptor()
{








}

rcl_interfaces::msg::ParameterDescriptor::ParameterDescriptor(
        const ParameterDescriptor& x)
{
    m_name = x.m_name;
    m_type = x.m_type;
    m_description = x.m_description;
    m_additional_constraints = x.m_additional_constraints;
    m_read_only = x.m_read_only;
    m_dynamic_typing = x.m_dynamic_typing;
    m_floating_point_range = x.m_floating_point_range;
    m_integer_range = x.m_integer_range;
}

rcl_interfaces::msg::ParameterDescriptor::ParameterDescriptor(
        ParameterDescriptor&& x) noexcept 
{
    m_name = std::move(x.m_name);
    m_type = x.m_type;
    m_description = std::move(x.m_description);
    m_additional_constraints = std::move(x.m_additional_constraints);
    m_read_only = x.m_read_only;
    m_dynamic_typing = x.m_dynamic_typing;
    m_floating_point_range = std::move(x.m_floating_point_range);
    m_integer_range = std::move(x.m_integer_range);
}

rcl_interfaces::msg::ParameterDescriptor& rcl_interfaces::msg::ParameterDescriptor::operator =(
        const ParameterDescriptor& x)
{

    m_name = x.m_name;
    m_type = x.m_type;
    m_description = x.m_description;
    m_additional_constraints = x.m_additional_constraints;
    m_read_only = x.m_read_only;
    m_dynamic_typing = x.m_dynamic_typing;
    m_floating_point_range = x.m_floating_point_range;
    m_integer_range = x.m_integer_range;

    return *this;
}

rcl_interfaces::msg::ParameterDescriptor& rcl_interfaces::msg::ParameterDescriptor::operator =(
        ParameterDescriptor&& x) noexcept
{

    m_name = std::move(x.m_name);
    m_type = x.m_type;
    m_description = std::move(x.m_description);
    m_additional_constraints = std::move(x.m_additional_constraints);
    m_read_only = x.m_read_only;
    m_dynamic_typing = x.m_dynamic_typing;
    m_floating_point_range = std::move(x.m_floating_point_range);
    m_integer_range = std::move(x.m_integer_range);

    return *this;
}

bool rcl_interfaces::msg::ParameterDescriptor::operator ==(
        const ParameterDescriptor& x) const
{

    return (m_name == x.m_name && m_type == x.m_type && m_description == x.m_description && m_additional_constraints == x.m_additional_constraints && m_read_only == x.m_read_only && m_dynamic_typing == x.m_dynamic_typing && m_floating_point_range == x.m_floating_point_range && m_integer_range == x.m_integer_range);
}

bool rcl_interfaces::msg::ParameterDescriptor::operator !=(
        const ParameterDescriptor& x) const
{
    return !(*this == x);
}

size_t rcl_interfaces::msg::ParameterDescriptor::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < 1; ++a)
    {
        current_alignment += rcl_interfaces::msg::FloatingPointRange::getMaxCdrSerializedSize(current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < 1; ++a)
    {
        current_alignment += rcl_interfaces::msg::IntegerRange::getMaxCdrSerializedSize(current_alignment);}


    return current_alignment - initial_alignment;
}

size_t rcl_interfaces::msg::ParameterDescriptor::getCdrSerializedSize(
        const rcl_interfaces::msg::ParameterDescriptor& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.name().size() + 1;

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.description().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.additional_constraints().size() + 1;

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.floating_point_range().size(); ++a)
    {
        current_alignment += rcl_interfaces::msg::FloatingPointRange::getCdrSerializedSize(data.floating_point_range().at(a), current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.integer_range().size(); ++a)
    {
        current_alignment += rcl_interfaces::msg::IntegerRange::getCdrSerializedSize(data.integer_range().at(a), current_alignment);}


    return current_alignment - initial_alignment;
}

void rcl_interfaces::msg::ParameterDescriptor::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_name.c_str();
    scdr << m_type;
    scdr << m_description.c_str();
    scdr << m_additional_constraints.c_str();
    scdr << m_read_only;
    scdr << m_dynamic_typing;
    scdr << m_floating_point_range;
    scdr << m_integer_range;

}

void rcl_interfaces::msg::ParameterDescriptor::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_name;
    dcdr >> m_type;
    dcdr >> m_description;
    dcdr >> m_additional_constraints;
    dcdr >> m_read_only;
    dcdr >> m_dynamic_typing;
    dcdr >> m_floating_point_range;
    dcdr >> m_integer_range;
}

/*!
 * @brief This function copies the value in member name
 * @param _name New value to be copied in member name
 */
void rcl_interfaces::msg::ParameterDescriptor::name(
        const std::string& _name)
{
    m_name = _name;
}

/*!
 * @brief This function moves the value in member name
 * @param _name New value to be moved in member name
 */
void rcl_interfaces::msg::ParameterDescriptor::name(
        std::string&& _name)
{
    m_name = std::move(_name);
}

/*!
 * @brief This function returns a constant reference to member name
 * @return Constant reference to member name
 */
const std::string& rcl_interfaces::msg::ParameterDescriptor::name() const
{
    return m_name;
}

/*!
 * @brief This function returns a reference to member name
 * @return Reference to member name
 */
std::string& rcl_interfaces::msg::ParameterDescriptor::name()
{
    return m_name;
}
/*!
 * @brief This function sets a value in member type
 * @param _type New value for member type
 */
void rcl_interfaces::msg::ParameterDescriptor::type(
        uint8_t _type)
{
    m_type = _type;
}

/*!
 * @brief This function returns the value of member type
 * @return Value of member type
 */
uint8_t rcl_interfaces::msg::ParameterDescriptor::type() const
{
    return m_type;
}

/*!
 * @brief This function returns a reference to member type
 * @return Reference to member type
 */
uint8_t& rcl_interfaces::msg::ParameterDescriptor::type()
{
    return m_type;
}

/*!
 * @brief This function copies the value in member description
 * @param _description New value to be copied in member description
 */
void rcl_interfaces::msg::ParameterDescriptor::description(
        const std::string& _description)
{
    m_description = _description;
}

/*!
 * @brief This function moves the value in member description
 * @param _description New value to be moved in member description
 */
void rcl_interfaces::msg::ParameterDescriptor::description(
        std::string&& _description)
{
    m_description = std::move(_description);
}

/*!
 * @brief This function returns a constant reference to member description
 * @return Constant reference to member description
 */
const std::string& rcl_interfaces::msg::ParameterDescriptor::description() const
{
    return m_description;
}

/*!
 * @brief This function returns a reference to member description
 * @return Reference to member description
 */
std::string& rcl_interfaces::msg::ParameterDescriptor::description()
{
    return m_description;
}
/*!
 * @brief This function copies the value in member additional_constraints
 * @param _additional_constraints New value to be copied in member additional_constraints
 */
void rcl_interfaces::msg::ParameterDescriptor::additional_constraints(
        const std::string& _additional_constraints)
{
    m_additional_constraints = _additional_constraints;
}

/*!
 * @brief This function moves the value in member additional_constraints
 * @param _additional_constraints New value to be moved in member additional_constraints
 */
void rcl_interfaces::msg::ParameterDescriptor::additional_constraints(
        std::string&& _additional_constraints)
{
    m_additional_constraints = std::move(_additional_constraints);
}

/*!
 * @brief This function returns a constant reference to member additional_constraints
 * @return Constant reference to member additional_constraints
 */
const std::string& rcl_interfaces::msg::ParameterDescriptor::additional_constraints() const
{
    return m_additional_constraints;
}

/*!
 * @brief This function returns a reference to member additional_constraints
 * @return Reference to member additional_constraints
 */
std::string& rcl_interfaces::msg::ParameterDescriptor::additional_constraints()
{
    return m_additional_constraints;
}
/*!
 * @brief This function sets a value in member read_only
 * @param _read_only New value for member read_only
 */
void rcl_interfaces::msg::ParameterDescriptor::read_only(
        bool _read_only)
{
    m_read_only = _read_only;
}

/*!
 * @brief This function returns the value of member read_only
 * @return Value of member read_only
 */
bool rcl_interfaces::msg::ParameterDescriptor::read_only() const
{
    return m_read_only;
}

/*!
 * @brief This function returns a reference to member read_only
 * @return Reference to member read_only
 */
bool& rcl_interfaces::msg::ParameterDescriptor::read_only()
{
    return m_read_only;
}

/*!
 * @brief This function sets a value in member dynamic_typing
 * @param _dynamic_typing New value for member dynamic_typing
 */
void rcl_interfaces::msg::ParameterDescriptor::dynamic_typing(
        bool _dynamic_typing)
{
    m_dynamic_typing = _dynamic_typing;
}

/*!
 * @brief This function returns the value of member dynamic_typing
 * @return Value of member dynamic_typing
 */
bool rcl_interfaces::msg::ParameterDescriptor::dynamic_typing() const
{
    return m_dynamic_typing;
}

/*!
 * @brief This function returns a reference to member dynamic_typing
 * @return Reference to member dynamic_typing
 */
bool& rcl_interfaces::msg::ParameterDescriptor::dynamic_typing()
{
    return m_dynamic_typing;
}

/*!
 * @brief This function copies the value in member floating_point_range
 * @param _floating_point_range New value to be copied in member floating_point_range
 */
void rcl_interfaces::msg::ParameterDescriptor::floating_point_range(
        const std::vector<rcl_interfaces::msg::FloatingPointRange>& _floating_point_range)
{
    m_floating_point_range = _floating_point_range;
}

/*!
 * @brief This function moves the value in member floating_point_range
 * @param _floating_point_range New value to be moved in member floating_point_range
 */
void rcl_interfaces::msg::ParameterDescriptor::floating_point_range(
        std::vector<rcl_interfaces::msg::FloatingPointRange>&& _floating_point_range)
{
    m_floating_point_range = std::move(_floating_point_range);
}

/*!
 * @brief This function returns a constant reference to member floating_point_range
 * @return Constant reference to member floating_point_range
 */
const std::vector<rcl_interfaces::msg::FloatingPointRange>& rcl_interfaces::msg::ParameterDescriptor::floating_point_range() const
{
    return m_floating_point_range;
}

/*!
 * @brief This function returns a reference to member floating_point_range
 * @return Reference to member floating_point_range
 */
std::vector<rcl_interfaces::msg::FloatingPointRange>& rcl_interfaces::msg::ParameterDescriptor::floating_point_range()
{
    return m_floating_point_range;
}
/*!
 * @brief This function copies the value in member integer_range
 * @param _integer_range New value to be copied in member integer_range
 */
void rcl_interfaces::msg::ParameterDescriptor::integer_range(
        const std::vector<rcl_interfaces::msg::IntegerRange>& _integer_range)
{
    m_integer_range = _integer_range;
}

/*!
 * @brief This function moves the value in member integer_range
 * @param _integer_range New value to be moved in member integer_range
 */
void rcl_interfaces::msg::ParameterDescriptor::integer_range(
        std::vector<rcl_interfaces::msg::IntegerRange>&& _integer_range)
{
    m_integer_range = std::move(_integer_range);
}

/*!
 * @brief This function returns a constant reference to member integer_range
 * @return Constant reference to member integer_range
 */
const std::vector<rcl_interfaces::msg::IntegerRange>& rcl_interfaces::msg::ParameterDescriptor::integer_range() const
{
    return m_integer_range;
}

/*!
 * @brief This function returns a reference to member integer_range
 * @return Reference to member integer_range
 */
std::vector<rcl_interfaces::msg::IntegerRange>& rcl_interfaces::msg::ParameterDescriptor::integer_range()
{
    return m_integer_range;
}

size_t rcl_interfaces::msg::ParameterDescriptor::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;











    return current_align;
}

bool rcl_interfaces::msg::ParameterDescriptor::isKeyDefined()
{
    return false;
}

void rcl_interfaces::msg::ParameterDescriptor::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
            
}


