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
 * @file ListNodes.cpp
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

#include "ListNodes.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define composition_interfaces_srv_ListNodes_Response_max_cdr_typesize 26808ULL;
#define composition_interfaces_srv_ListNodes_Request_max_cdr_typesize 1ULL;
#define composition_interfaces_srv_ListNodes_Response_max_key_cdr_typesize 0ULL;
#define composition_interfaces_srv_ListNodes_Request_max_key_cdr_typesize 0ULL;

composition_interfaces::srv::ListNodes_Request::ListNodes_Request()
{
    // uint8 m_structure_needs_at_least_one_member
    m_structure_needs_at_least_one_member = 0;

}

composition_interfaces::srv::ListNodes_Request::~ListNodes_Request()
{
}

composition_interfaces::srv::ListNodes_Request::ListNodes_Request(
        const ListNodes_Request& x)
{
    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;
}

composition_interfaces::srv::ListNodes_Request::ListNodes_Request(
        ListNodes_Request&& x) noexcept 
{
    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;
}

composition_interfaces::srv::ListNodes_Request& composition_interfaces::srv::ListNodes_Request::operator =(
        const ListNodes_Request& x)
{

    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;

    return *this;
}

composition_interfaces::srv::ListNodes_Request& composition_interfaces::srv::ListNodes_Request::operator =(
        ListNodes_Request&& x) noexcept
{

    m_structure_needs_at_least_one_member = x.m_structure_needs_at_least_one_member;

    return *this;
}

bool composition_interfaces::srv::ListNodes_Request::operator ==(
        const ListNodes_Request& x) const
{

    return (m_structure_needs_at_least_one_member == x.m_structure_needs_at_least_one_member);
}

bool composition_interfaces::srv::ListNodes_Request::operator !=(
        const ListNodes_Request& x) const
{
    return !(*this == x);
}

size_t composition_interfaces::srv::ListNodes_Request::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return composition_interfaces_srv_ListNodes_Request_max_cdr_typesize;
}

size_t composition_interfaces::srv::ListNodes_Request::getCdrSerializedSize(
        const composition_interfaces::srv::ListNodes_Request& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

void composition_interfaces::srv::ListNodes_Request::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_structure_needs_at_least_one_member;

}

void composition_interfaces::srv::ListNodes_Request::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_structure_needs_at_least_one_member;
}

/*!
 * @brief This function sets a value in member structure_needs_at_least_one_member
 * @param _structure_needs_at_least_one_member New value for member structure_needs_at_least_one_member
 */
void composition_interfaces::srv::ListNodes_Request::structure_needs_at_least_one_member(
        uint8_t _structure_needs_at_least_one_member)
{
    m_structure_needs_at_least_one_member = _structure_needs_at_least_one_member;
}

/*!
 * @brief This function returns the value of member structure_needs_at_least_one_member
 * @return Value of member structure_needs_at_least_one_member
 */
uint8_t composition_interfaces::srv::ListNodes_Request::structure_needs_at_least_one_member() const
{
    return m_structure_needs_at_least_one_member;
}

/*!
 * @brief This function returns a reference to member structure_needs_at_least_one_member
 * @return Reference to member structure_needs_at_least_one_member
 */
uint8_t& composition_interfaces::srv::ListNodes_Request::structure_needs_at_least_one_member()
{
    return m_structure_needs_at_least_one_member;
}



size_t composition_interfaces::srv::ListNodes_Request::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return composition_interfaces_srv_ListNodes_Request_max_key_cdr_typesize;
}

bool composition_interfaces::srv::ListNodes_Request::isKeyDefined()
{
    return false;
}

void composition_interfaces::srv::ListNodes_Request::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

composition_interfaces::srv::ListNodes_Response::ListNodes_Response()
{
    // sequence<string> m_full_node_names

    // sequence<unsigned long long> m_unique_ids


}

composition_interfaces::srv::ListNodes_Response::~ListNodes_Response()
{


}

composition_interfaces::srv::ListNodes_Response::ListNodes_Response(
        const ListNodes_Response& x)
{
    m_full_node_names = x.m_full_node_names;
    m_unique_ids = x.m_unique_ids;
}

composition_interfaces::srv::ListNodes_Response::ListNodes_Response(
        ListNodes_Response&& x) noexcept 
{
    m_full_node_names = std::move(x.m_full_node_names);
    m_unique_ids = std::move(x.m_unique_ids);
}

composition_interfaces::srv::ListNodes_Response& composition_interfaces::srv::ListNodes_Response::operator =(
        const ListNodes_Response& x)
{

    m_full_node_names = x.m_full_node_names;
    m_unique_ids = x.m_unique_ids;

    return *this;
}

composition_interfaces::srv::ListNodes_Response& composition_interfaces::srv::ListNodes_Response::operator =(
        ListNodes_Response&& x) noexcept
{

    m_full_node_names = std::move(x.m_full_node_names);
    m_unique_ids = std::move(x.m_unique_ids);

    return *this;
}

bool composition_interfaces::srv::ListNodes_Response::operator ==(
        const ListNodes_Response& x) const
{

    return (m_full_node_names == x.m_full_node_names && m_unique_ids == x.m_unique_ids);
}

bool composition_interfaces::srv::ListNodes_Response::operator !=(
        const ListNodes_Response& x) const
{
    return !(*this == x);
}

size_t composition_interfaces::srv::ListNodes_Response::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return composition_interfaces_srv_ListNodes_Response_max_cdr_typesize;
}

size_t composition_interfaces::srv::ListNodes_Response::getCdrSerializedSize(
        const composition_interfaces::srv::ListNodes_Response& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.full_node_names().size(); ++a)
    {
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) +
            data.full_node_names().at(a).size() + 1;
    }
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.unique_ids().size() > 0)
    {
        current_alignment += (data.unique_ids().size() * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);
    }




    return current_alignment - initial_alignment;
}

void composition_interfaces::srv::ListNodes_Response::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_full_node_names;
    scdr << m_unique_ids;
}

void composition_interfaces::srv::ListNodes_Response::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_full_node_names;
    dcdr >> m_unique_ids;
}

/*!
 * @brief This function copies the value in member full_node_names
 * @param _full_node_names New value to be copied in member full_node_names
 */
void composition_interfaces::srv::ListNodes_Response::full_node_names(
        const std::vector<std::string>& _full_node_names)
{
    m_full_node_names = _full_node_names;
}

/*!
 * @brief This function moves the value in member full_node_names
 * @param _full_node_names New value to be moved in member full_node_names
 */
void composition_interfaces::srv::ListNodes_Response::full_node_names(
        std::vector<std::string>&& _full_node_names)
{
    m_full_node_names = std::move(_full_node_names);
}

/*!
 * @brief This function returns a constant reference to member full_node_names
 * @return Constant reference to member full_node_names
 */
const std::vector<std::string>& composition_interfaces::srv::ListNodes_Response::full_node_names() const
{
    return m_full_node_names;
}

/*!
 * @brief This function returns a reference to member full_node_names
 * @return Reference to member full_node_names
 */
std::vector<std::string>& composition_interfaces::srv::ListNodes_Response::full_node_names()
{
    return m_full_node_names;
}
/*!
 * @brief This function copies the value in member unique_ids
 * @param _unique_ids New value to be copied in member unique_ids
 */
void composition_interfaces::srv::ListNodes_Response::unique_ids(
        const std::vector<uint64_t>& _unique_ids)
{
    m_unique_ids = _unique_ids;
}

/*!
 * @brief This function moves the value in member unique_ids
 * @param _unique_ids New value to be moved in member unique_ids
 */
void composition_interfaces::srv::ListNodes_Response::unique_ids(
        std::vector<uint64_t>&& _unique_ids)
{
    m_unique_ids = std::move(_unique_ids);
}

/*!
 * @brief This function returns a constant reference to member unique_ids
 * @return Constant reference to member unique_ids
 */
const std::vector<uint64_t>& composition_interfaces::srv::ListNodes_Response::unique_ids() const
{
    return m_unique_ids;
}

/*!
 * @brief This function returns a reference to member unique_ids
 * @return Reference to member unique_ids
 */
std::vector<uint64_t>& composition_interfaces::srv::ListNodes_Response::unique_ids()
{
    return m_unique_ids;
}


size_t composition_interfaces::srv::ListNodes_Response::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return composition_interfaces_srv_ListNodes_Response_max_key_cdr_typesize;
}

bool composition_interfaces::srv::ListNodes_Response::isKeyDefined()
{
    return false;
}

void composition_interfaces::srv::ListNodes_Response::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

