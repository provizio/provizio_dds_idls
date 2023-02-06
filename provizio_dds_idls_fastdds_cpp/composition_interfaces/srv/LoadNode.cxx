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
 * @file LoadNode.cpp
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

#include "LoadNode.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

composition_interfaces::srv::LoadNode_Request::LoadNode_Request()
{
    // m_package_name com.eprosima.idl.parser.typecode.StringTypeCode@1b11171f
    m_package_name ="";
    // m_plugin_name com.eprosima.idl.parser.typecode.StringTypeCode@1151e434
    m_plugin_name ="";
    // m_node_name com.eprosima.idl.parser.typecode.StringTypeCode@2dc54ad4
    m_node_name ="";
    // m_node_namespace com.eprosima.idl.parser.typecode.StringTypeCode@4659191b
    m_node_namespace ="";
    // m_log_level com.eprosima.idl.parser.typecode.PrimitiveTypeCode@55634720
    m_log_level = 0;
    // m_remap_rules com.eprosima.idl.parser.typecode.SequenceTypeCode@4b0d79fc

    // m_parameters com.eprosima.idl.parser.typecode.SequenceTypeCode@4c1909a3

    // m_extra_arguments com.eprosima.idl.parser.typecode.SequenceTypeCode@428640fa


}

composition_interfaces::srv::LoadNode_Request::~LoadNode_Request()
{








}

composition_interfaces::srv::LoadNode_Request::LoadNode_Request(
        const LoadNode_Request& x)
{
    m_package_name = x.m_package_name;
    m_plugin_name = x.m_plugin_name;
    m_node_name = x.m_node_name;
    m_node_namespace = x.m_node_namespace;
    m_log_level = x.m_log_level;
    m_remap_rules = x.m_remap_rules;
    m_parameters = x.m_parameters;
    m_extra_arguments = x.m_extra_arguments;
}

composition_interfaces::srv::LoadNode_Request::LoadNode_Request(
        LoadNode_Request&& x) noexcept 
{
    m_package_name = std::move(x.m_package_name);
    m_plugin_name = std::move(x.m_plugin_name);
    m_node_name = std::move(x.m_node_name);
    m_node_namespace = std::move(x.m_node_namespace);
    m_log_level = x.m_log_level;
    m_remap_rules = std::move(x.m_remap_rules);
    m_parameters = std::move(x.m_parameters);
    m_extra_arguments = std::move(x.m_extra_arguments);
}

composition_interfaces::srv::LoadNode_Request& composition_interfaces::srv::LoadNode_Request::operator =(
        const LoadNode_Request& x)
{

    m_package_name = x.m_package_name;
    m_plugin_name = x.m_plugin_name;
    m_node_name = x.m_node_name;
    m_node_namespace = x.m_node_namespace;
    m_log_level = x.m_log_level;
    m_remap_rules = x.m_remap_rules;
    m_parameters = x.m_parameters;
    m_extra_arguments = x.m_extra_arguments;

    return *this;
}

composition_interfaces::srv::LoadNode_Request& composition_interfaces::srv::LoadNode_Request::operator =(
        LoadNode_Request&& x) noexcept
{

    m_package_name = std::move(x.m_package_name);
    m_plugin_name = std::move(x.m_plugin_name);
    m_node_name = std::move(x.m_node_name);
    m_node_namespace = std::move(x.m_node_namespace);
    m_log_level = x.m_log_level;
    m_remap_rules = std::move(x.m_remap_rules);
    m_parameters = std::move(x.m_parameters);
    m_extra_arguments = std::move(x.m_extra_arguments);

    return *this;
}

bool composition_interfaces::srv::LoadNode_Request::operator ==(
        const LoadNode_Request& x) const
{

    return (m_package_name == x.m_package_name && m_plugin_name == x.m_plugin_name && m_node_name == x.m_node_name && m_node_namespace == x.m_node_namespace && m_log_level == x.m_log_level && m_remap_rules == x.m_remap_rules && m_parameters == x.m_parameters && m_extra_arguments == x.m_extra_arguments);
}

bool composition_interfaces::srv::LoadNode_Request::operator !=(
        const LoadNode_Request& x) const
{
    return !(*this == x);
}

size_t composition_interfaces::srv::LoadNode_Request::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;
    }
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += rcl_interfaces::msg::Parameter::getMaxCdrSerializedSize(current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += rcl_interfaces::msg::Parameter::getMaxCdrSerializedSize(current_alignment);}


    return current_alignment - initial_alignment;
}

size_t composition_interfaces::srv::LoadNode_Request::getCdrSerializedSize(
        const composition_interfaces::srv::LoadNode_Request& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.package_name().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.plugin_name().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.node_name().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.node_namespace().size() + 1;

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.remap_rules().size(); ++a)
    {
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) +
            data.remap_rules().at(a).size() + 1;
    }
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.parameters().size(); ++a)
    {
        current_alignment += rcl_interfaces::msg::Parameter::getCdrSerializedSize(data.parameters().at(a), current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.extra_arguments().size(); ++a)
    {
        current_alignment += rcl_interfaces::msg::Parameter::getCdrSerializedSize(data.extra_arguments().at(a), current_alignment);}


    return current_alignment - initial_alignment;
}

void composition_interfaces::srv::LoadNode_Request::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_package_name.c_str();
    scdr << m_plugin_name.c_str();
    scdr << m_node_name.c_str();
    scdr << m_node_namespace.c_str();
    scdr << m_log_level;
    scdr << m_remap_rules;
    scdr << m_parameters;
    scdr << m_extra_arguments;

}

void composition_interfaces::srv::LoadNode_Request::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_package_name;
    dcdr >> m_plugin_name;
    dcdr >> m_node_name;
    dcdr >> m_node_namespace;
    dcdr >> m_log_level;
    dcdr >> m_remap_rules;
    dcdr >> m_parameters;
    dcdr >> m_extra_arguments;
}

/*!
 * @brief This function copies the value in member package_name
 * @param _package_name New value to be copied in member package_name
 */
void composition_interfaces::srv::LoadNode_Request::package_name(
        const std::string& _package_name)
{
    m_package_name = _package_name;
}

/*!
 * @brief This function moves the value in member package_name
 * @param _package_name New value to be moved in member package_name
 */
void composition_interfaces::srv::LoadNode_Request::package_name(
        std::string&& _package_name)
{
    m_package_name = std::move(_package_name);
}

/*!
 * @brief This function returns a constant reference to member package_name
 * @return Constant reference to member package_name
 */
const std::string& composition_interfaces::srv::LoadNode_Request::package_name() const
{
    return m_package_name;
}

/*!
 * @brief This function returns a reference to member package_name
 * @return Reference to member package_name
 */
std::string& composition_interfaces::srv::LoadNode_Request::package_name()
{
    return m_package_name;
}
/*!
 * @brief This function copies the value in member plugin_name
 * @param _plugin_name New value to be copied in member plugin_name
 */
void composition_interfaces::srv::LoadNode_Request::plugin_name(
        const std::string& _plugin_name)
{
    m_plugin_name = _plugin_name;
}

/*!
 * @brief This function moves the value in member plugin_name
 * @param _plugin_name New value to be moved in member plugin_name
 */
void composition_interfaces::srv::LoadNode_Request::plugin_name(
        std::string&& _plugin_name)
{
    m_plugin_name = std::move(_plugin_name);
}

/*!
 * @brief This function returns a constant reference to member plugin_name
 * @return Constant reference to member plugin_name
 */
const std::string& composition_interfaces::srv::LoadNode_Request::plugin_name() const
{
    return m_plugin_name;
}

/*!
 * @brief This function returns a reference to member plugin_name
 * @return Reference to member plugin_name
 */
std::string& composition_interfaces::srv::LoadNode_Request::plugin_name()
{
    return m_plugin_name;
}
/*!
 * @brief This function copies the value in member node_name
 * @param _node_name New value to be copied in member node_name
 */
void composition_interfaces::srv::LoadNode_Request::node_name(
        const std::string& _node_name)
{
    m_node_name = _node_name;
}

/*!
 * @brief This function moves the value in member node_name
 * @param _node_name New value to be moved in member node_name
 */
void composition_interfaces::srv::LoadNode_Request::node_name(
        std::string&& _node_name)
{
    m_node_name = std::move(_node_name);
}

/*!
 * @brief This function returns a constant reference to member node_name
 * @return Constant reference to member node_name
 */
const std::string& composition_interfaces::srv::LoadNode_Request::node_name() const
{
    return m_node_name;
}

/*!
 * @brief This function returns a reference to member node_name
 * @return Reference to member node_name
 */
std::string& composition_interfaces::srv::LoadNode_Request::node_name()
{
    return m_node_name;
}
/*!
 * @brief This function copies the value in member node_namespace
 * @param _node_namespace New value to be copied in member node_namespace
 */
void composition_interfaces::srv::LoadNode_Request::node_namespace(
        const std::string& _node_namespace)
{
    m_node_namespace = _node_namespace;
}

/*!
 * @brief This function moves the value in member node_namespace
 * @param _node_namespace New value to be moved in member node_namespace
 */
void composition_interfaces::srv::LoadNode_Request::node_namespace(
        std::string&& _node_namespace)
{
    m_node_namespace = std::move(_node_namespace);
}

/*!
 * @brief This function returns a constant reference to member node_namespace
 * @return Constant reference to member node_namespace
 */
const std::string& composition_interfaces::srv::LoadNode_Request::node_namespace() const
{
    return m_node_namespace;
}

/*!
 * @brief This function returns a reference to member node_namespace
 * @return Reference to member node_namespace
 */
std::string& composition_interfaces::srv::LoadNode_Request::node_namespace()
{
    return m_node_namespace;
}
/*!
 * @brief This function sets a value in member log_level
 * @param _log_level New value for member log_level
 */
void composition_interfaces::srv::LoadNode_Request::log_level(
        uint8_t _log_level)
{
    m_log_level = _log_level;
}

/*!
 * @brief This function returns the value of member log_level
 * @return Value of member log_level
 */
uint8_t composition_interfaces::srv::LoadNode_Request::log_level() const
{
    return m_log_level;
}

/*!
 * @brief This function returns a reference to member log_level
 * @return Reference to member log_level
 */
uint8_t& composition_interfaces::srv::LoadNode_Request::log_level()
{
    return m_log_level;
}

/*!
 * @brief This function copies the value in member remap_rules
 * @param _remap_rules New value to be copied in member remap_rules
 */
void composition_interfaces::srv::LoadNode_Request::remap_rules(
        const std::vector<std::string>& _remap_rules)
{
    m_remap_rules = _remap_rules;
}

/*!
 * @brief This function moves the value in member remap_rules
 * @param _remap_rules New value to be moved in member remap_rules
 */
void composition_interfaces::srv::LoadNode_Request::remap_rules(
        std::vector<std::string>&& _remap_rules)
{
    m_remap_rules = std::move(_remap_rules);
}

/*!
 * @brief This function returns a constant reference to member remap_rules
 * @return Constant reference to member remap_rules
 */
const std::vector<std::string>& composition_interfaces::srv::LoadNode_Request::remap_rules() const
{
    return m_remap_rules;
}

/*!
 * @brief This function returns a reference to member remap_rules
 * @return Reference to member remap_rules
 */
std::vector<std::string>& composition_interfaces::srv::LoadNode_Request::remap_rules()
{
    return m_remap_rules;
}
/*!
 * @brief This function copies the value in member parameters
 * @param _parameters New value to be copied in member parameters
 */
void composition_interfaces::srv::LoadNode_Request::parameters(
        const std::vector<rcl_interfaces::msg::Parameter>& _parameters)
{
    m_parameters = _parameters;
}

/*!
 * @brief This function moves the value in member parameters
 * @param _parameters New value to be moved in member parameters
 */
void composition_interfaces::srv::LoadNode_Request::parameters(
        std::vector<rcl_interfaces::msg::Parameter>&& _parameters)
{
    m_parameters = std::move(_parameters);
}

/*!
 * @brief This function returns a constant reference to member parameters
 * @return Constant reference to member parameters
 */
const std::vector<rcl_interfaces::msg::Parameter>& composition_interfaces::srv::LoadNode_Request::parameters() const
{
    return m_parameters;
}

/*!
 * @brief This function returns a reference to member parameters
 * @return Reference to member parameters
 */
std::vector<rcl_interfaces::msg::Parameter>& composition_interfaces::srv::LoadNode_Request::parameters()
{
    return m_parameters;
}
/*!
 * @brief This function copies the value in member extra_arguments
 * @param _extra_arguments New value to be copied in member extra_arguments
 */
void composition_interfaces::srv::LoadNode_Request::extra_arguments(
        const std::vector<rcl_interfaces::msg::Parameter>& _extra_arguments)
{
    m_extra_arguments = _extra_arguments;
}

/*!
 * @brief This function moves the value in member extra_arguments
 * @param _extra_arguments New value to be moved in member extra_arguments
 */
void composition_interfaces::srv::LoadNode_Request::extra_arguments(
        std::vector<rcl_interfaces::msg::Parameter>&& _extra_arguments)
{
    m_extra_arguments = std::move(_extra_arguments);
}

/*!
 * @brief This function returns a constant reference to member extra_arguments
 * @return Constant reference to member extra_arguments
 */
const std::vector<rcl_interfaces::msg::Parameter>& composition_interfaces::srv::LoadNode_Request::extra_arguments() const
{
    return m_extra_arguments;
}

/*!
 * @brief This function returns a reference to member extra_arguments
 * @return Reference to member extra_arguments
 */
std::vector<rcl_interfaces::msg::Parameter>& composition_interfaces::srv::LoadNode_Request::extra_arguments()
{
    return m_extra_arguments;
}

size_t composition_interfaces::srv::LoadNode_Request::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;











    return current_align;
}

bool composition_interfaces::srv::LoadNode_Request::isKeyDefined()
{
    return false;
}

void composition_interfaces::srv::LoadNode_Request::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
            
}

composition_interfaces::srv::LoadNode_Response::LoadNode_Response()
{
    // m_success com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4efac082
    m_success = false;
    // m_error_message com.eprosima.idl.parser.typecode.StringTypeCode@13fd2ccd
    m_error_message ="";
    // m_full_node_name com.eprosima.idl.parser.typecode.StringTypeCode@b9b00e0
    m_full_node_name ="";
    // m_unique_id com.eprosima.idl.parser.typecode.PrimitiveTypeCode@506ae4d4
    m_unique_id = 0;

}

composition_interfaces::srv::LoadNode_Response::~LoadNode_Response()
{




}

composition_interfaces::srv::LoadNode_Response::LoadNode_Response(
        const LoadNode_Response& x)
{
    m_success = x.m_success;
    m_error_message = x.m_error_message;
    m_full_node_name = x.m_full_node_name;
    m_unique_id = x.m_unique_id;
}

composition_interfaces::srv::LoadNode_Response::LoadNode_Response(
        LoadNode_Response&& x) noexcept 
{
    m_success = x.m_success;
    m_error_message = std::move(x.m_error_message);
    m_full_node_name = std::move(x.m_full_node_name);
    m_unique_id = x.m_unique_id;
}

composition_interfaces::srv::LoadNode_Response& composition_interfaces::srv::LoadNode_Response::operator =(
        const LoadNode_Response& x)
{

    m_success = x.m_success;
    m_error_message = x.m_error_message;
    m_full_node_name = x.m_full_node_name;
    m_unique_id = x.m_unique_id;

    return *this;
}

composition_interfaces::srv::LoadNode_Response& composition_interfaces::srv::LoadNode_Response::operator =(
        LoadNode_Response&& x) noexcept
{

    m_success = x.m_success;
    m_error_message = std::move(x.m_error_message);
    m_full_node_name = std::move(x.m_full_node_name);
    m_unique_id = x.m_unique_id;

    return *this;
}

bool composition_interfaces::srv::LoadNode_Response::operator ==(
        const LoadNode_Response& x) const
{

    return (m_success == x.m_success && m_error_message == x.m_error_message && m_full_node_name == x.m_full_node_name && m_unique_id == x.m_unique_id);
}

bool composition_interfaces::srv::LoadNode_Response::operator !=(
        const LoadNode_Response& x) const
{
    return !(*this == x);
}

size_t composition_interfaces::srv::LoadNode_Response::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

size_t composition_interfaces::srv::LoadNode_Response::getCdrSerializedSize(
        const composition_interfaces::srv::LoadNode_Response& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.error_message().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.full_node_name().size() + 1;

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

void composition_interfaces::srv::LoadNode_Response::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_success;
    scdr << m_error_message.c_str();
    scdr << m_full_node_name.c_str();
    scdr << m_unique_id;

}

void composition_interfaces::srv::LoadNode_Response::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_success;
    dcdr >> m_error_message;
    dcdr >> m_full_node_name;
    dcdr >> m_unique_id;
}

/*!
 * @brief This function sets a value in member success
 * @param _success New value for member success
 */
void composition_interfaces::srv::LoadNode_Response::success(
        bool _success)
{
    m_success = _success;
}

/*!
 * @brief This function returns the value of member success
 * @return Value of member success
 */
bool composition_interfaces::srv::LoadNode_Response::success() const
{
    return m_success;
}

/*!
 * @brief This function returns a reference to member success
 * @return Reference to member success
 */
bool& composition_interfaces::srv::LoadNode_Response::success()
{
    return m_success;
}

/*!
 * @brief This function copies the value in member error_message
 * @param _error_message New value to be copied in member error_message
 */
void composition_interfaces::srv::LoadNode_Response::error_message(
        const std::string& _error_message)
{
    m_error_message = _error_message;
}

/*!
 * @brief This function moves the value in member error_message
 * @param _error_message New value to be moved in member error_message
 */
void composition_interfaces::srv::LoadNode_Response::error_message(
        std::string&& _error_message)
{
    m_error_message = std::move(_error_message);
}

/*!
 * @brief This function returns a constant reference to member error_message
 * @return Constant reference to member error_message
 */
const std::string& composition_interfaces::srv::LoadNode_Response::error_message() const
{
    return m_error_message;
}

/*!
 * @brief This function returns a reference to member error_message
 * @return Reference to member error_message
 */
std::string& composition_interfaces::srv::LoadNode_Response::error_message()
{
    return m_error_message;
}
/*!
 * @brief This function copies the value in member full_node_name
 * @param _full_node_name New value to be copied in member full_node_name
 */
void composition_interfaces::srv::LoadNode_Response::full_node_name(
        const std::string& _full_node_name)
{
    m_full_node_name = _full_node_name;
}

/*!
 * @brief This function moves the value in member full_node_name
 * @param _full_node_name New value to be moved in member full_node_name
 */
void composition_interfaces::srv::LoadNode_Response::full_node_name(
        std::string&& _full_node_name)
{
    m_full_node_name = std::move(_full_node_name);
}

/*!
 * @brief This function returns a constant reference to member full_node_name
 * @return Constant reference to member full_node_name
 */
const std::string& composition_interfaces::srv::LoadNode_Response::full_node_name() const
{
    return m_full_node_name;
}

/*!
 * @brief This function returns a reference to member full_node_name
 * @return Reference to member full_node_name
 */
std::string& composition_interfaces::srv::LoadNode_Response::full_node_name()
{
    return m_full_node_name;
}
/*!
 * @brief This function sets a value in member unique_id
 * @param _unique_id New value for member unique_id
 */
void composition_interfaces::srv::LoadNode_Response::unique_id(
        uint64_t _unique_id)
{
    m_unique_id = _unique_id;
}

/*!
 * @brief This function returns the value of member unique_id
 * @return Value of member unique_id
 */
uint64_t composition_interfaces::srv::LoadNode_Response::unique_id() const
{
    return m_unique_id;
}

/*!
 * @brief This function returns a reference to member unique_id
 * @return Reference to member unique_id
 */
uint64_t& composition_interfaces::srv::LoadNode_Response::unique_id()
{
    return m_unique_id;
}


size_t composition_interfaces::srv::LoadNode_Response::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;







    return current_align;
}

bool composition_interfaces::srv::LoadNode_Response::isKeyDefined()
{
    return false;
}

void composition_interfaces::srv::LoadNode_Response::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
        
}


