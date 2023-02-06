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
 * @file LoadNode.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_COMPOSITION_INTERFACES_SRV_LOADNODE_H_
#define _FAST_DDS_GENERATED_COMPOSITION_INTERFACES_SRV_LOADNODE_H_

#include "rcl_interfaces/msg/Parameter.h"

#include <fastrtps/utils/fixed_size_string.hpp>

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(LoadNode_SOURCE)
#define LoadNode_DllAPI __declspec( dllexport )
#else
#define LoadNode_DllAPI __declspec( dllimport )
#endif // LoadNode_SOURCE
#else
#define LoadNode_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define LoadNode_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace composition_interfaces {
    namespace srv {
        /*!
         * @brief This class represents the structure LoadNode_Request defined by the user in the IDL file.
         * @ingroup LOADNODE
         */
        class LoadNode_Request
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport LoadNode_Request();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~LoadNode_Request();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object composition_interfaces::srv::LoadNode_Request that will be copied.
             */
            eProsima_user_DllExport LoadNode_Request(
                    const LoadNode_Request& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object composition_interfaces::srv::LoadNode_Request that will be copied.
             */
            eProsima_user_DllExport LoadNode_Request(
                    LoadNode_Request&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object composition_interfaces::srv::LoadNode_Request that will be copied.
             */
            eProsima_user_DllExport LoadNode_Request& operator =(
                    const LoadNode_Request& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object composition_interfaces::srv::LoadNode_Request that will be copied.
             */
            eProsima_user_DllExport LoadNode_Request& operator =(
                    LoadNode_Request&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x composition_interfaces::srv::LoadNode_Request object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const LoadNode_Request& x) const;

            /*!
             * @brief Comparison operator.
             * @param x composition_interfaces::srv::LoadNode_Request object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const LoadNode_Request& x) const;

            /*!
             * @brief This function copies the value in member package_name
             * @param _package_name New value to be copied in member package_name
             */
            eProsima_user_DllExport void package_name(
                    const std::string& _package_name);

            /*!
             * @brief This function moves the value in member package_name
             * @param _package_name New value to be moved in member package_name
             */
            eProsima_user_DllExport void package_name(
                    std::string&& _package_name);

            /*!
             * @brief This function returns a constant reference to member package_name
             * @return Constant reference to member package_name
             */
            eProsima_user_DllExport const std::string& package_name() const;

            /*!
             * @brief This function returns a reference to member package_name
             * @return Reference to member package_name
             */
            eProsima_user_DllExport std::string& package_name();
            /*!
             * @brief This function copies the value in member plugin_name
             * @param _plugin_name New value to be copied in member plugin_name
             */
            eProsima_user_DllExport void plugin_name(
                    const std::string& _plugin_name);

            /*!
             * @brief This function moves the value in member plugin_name
             * @param _plugin_name New value to be moved in member plugin_name
             */
            eProsima_user_DllExport void plugin_name(
                    std::string&& _plugin_name);

            /*!
             * @brief This function returns a constant reference to member plugin_name
             * @return Constant reference to member plugin_name
             */
            eProsima_user_DllExport const std::string& plugin_name() const;

            /*!
             * @brief This function returns a reference to member plugin_name
             * @return Reference to member plugin_name
             */
            eProsima_user_DllExport std::string& plugin_name();
            /*!
             * @brief This function copies the value in member node_name
             * @param _node_name New value to be copied in member node_name
             */
            eProsima_user_DllExport void node_name(
                    const std::string& _node_name);

            /*!
             * @brief This function moves the value in member node_name
             * @param _node_name New value to be moved in member node_name
             */
            eProsima_user_DllExport void node_name(
                    std::string&& _node_name);

            /*!
             * @brief This function returns a constant reference to member node_name
             * @return Constant reference to member node_name
             */
            eProsima_user_DllExport const std::string& node_name() const;

            /*!
             * @brief This function returns a reference to member node_name
             * @return Reference to member node_name
             */
            eProsima_user_DllExport std::string& node_name();
            /*!
             * @brief This function copies the value in member node_namespace
             * @param _node_namespace New value to be copied in member node_namespace
             */
            eProsima_user_DllExport void node_namespace(
                    const std::string& _node_namespace);

            /*!
             * @brief This function moves the value in member node_namespace
             * @param _node_namespace New value to be moved in member node_namespace
             */
            eProsima_user_DllExport void node_namespace(
                    std::string&& _node_namespace);

            /*!
             * @brief This function returns a constant reference to member node_namespace
             * @return Constant reference to member node_namespace
             */
            eProsima_user_DllExport const std::string& node_namespace() const;

            /*!
             * @brief This function returns a reference to member node_namespace
             * @return Reference to member node_namespace
             */
            eProsima_user_DllExport std::string& node_namespace();
            /*!
             * @brief This function sets a value in member log_level
             * @param _log_level New value for member log_level
             */
            eProsima_user_DllExport void log_level(
                    uint8_t _log_level);

            /*!
             * @brief This function returns the value of member log_level
             * @return Value of member log_level
             */
            eProsima_user_DllExport uint8_t log_level() const;

            /*!
             * @brief This function returns a reference to member log_level
             * @return Reference to member log_level
             */
            eProsima_user_DllExport uint8_t& log_level();

            /*!
             * @brief This function copies the value in member remap_rules
             * @param _remap_rules New value to be copied in member remap_rules
             */
            eProsima_user_DllExport void remap_rules(
                    const std::vector<std::string>& _remap_rules);

            /*!
             * @brief This function moves the value in member remap_rules
             * @param _remap_rules New value to be moved in member remap_rules
             */
            eProsima_user_DllExport void remap_rules(
                    std::vector<std::string>&& _remap_rules);

            /*!
             * @brief This function returns a constant reference to member remap_rules
             * @return Constant reference to member remap_rules
             */
            eProsima_user_DllExport const std::vector<std::string>& remap_rules() const;

            /*!
             * @brief This function returns a reference to member remap_rules
             * @return Reference to member remap_rules
             */
            eProsima_user_DllExport std::vector<std::string>& remap_rules();
            /*!
             * @brief This function copies the value in member parameters
             * @param _parameters New value to be copied in member parameters
             */
            eProsima_user_DllExport void parameters(
                    const std::vector<rcl_interfaces::msg::Parameter>& _parameters);

            /*!
             * @brief This function moves the value in member parameters
             * @param _parameters New value to be moved in member parameters
             */
            eProsima_user_DllExport void parameters(
                    std::vector<rcl_interfaces::msg::Parameter>&& _parameters);

            /*!
             * @brief This function returns a constant reference to member parameters
             * @return Constant reference to member parameters
             */
            eProsima_user_DllExport const std::vector<rcl_interfaces::msg::Parameter>& parameters() const;

            /*!
             * @brief This function returns a reference to member parameters
             * @return Reference to member parameters
             */
            eProsima_user_DllExport std::vector<rcl_interfaces::msg::Parameter>& parameters();
            /*!
             * @brief This function copies the value in member extra_arguments
             * @param _extra_arguments New value to be copied in member extra_arguments
             */
            eProsima_user_DllExport void extra_arguments(
                    const std::vector<rcl_interfaces::msg::Parameter>& _extra_arguments);

            /*!
             * @brief This function moves the value in member extra_arguments
             * @param _extra_arguments New value to be moved in member extra_arguments
             */
            eProsima_user_DllExport void extra_arguments(
                    std::vector<rcl_interfaces::msg::Parameter>&& _extra_arguments);

            /*!
             * @brief This function returns a constant reference to member extra_arguments
             * @return Constant reference to member extra_arguments
             */
            eProsima_user_DllExport const std::vector<rcl_interfaces::msg::Parameter>& extra_arguments() const;

            /*!
             * @brief This function returns a reference to member extra_arguments
             * @return Reference to member extra_arguments
             */
            eProsima_user_DllExport std::vector<rcl_interfaces::msg::Parameter>& extra_arguments();

            /*!
             * @brief This function returns the maximum serialized size of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function returns the serialized size of a data depending on the buffer alignment.
             * @param data Data which is calculated its serialized size.
             * @param current_alignment Buffer alignment.
             * @return Serialized size.
             */
            eProsima_user_DllExport static size_t getCdrSerializedSize(
                    const composition_interfaces::srv::LoadNode_Request& data,
                    size_t current_alignment = 0);


            /*!
             * @brief This function serializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serialize(
                    eprosima::fastcdr::Cdr& cdr) const;

            /*!
             * @brief This function deserializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void deserialize(
                    eprosima::fastcdr::Cdr& cdr);



            /*!
             * @brief This function returns the maximum serialized size of the Key of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function tells you if the Key has been defined for this type
             */
            eProsima_user_DllExport static bool isKeyDefined();

            /*!
             * @brief This function serializes the key members of an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serializeKey(
                    eprosima::fastcdr::Cdr& cdr) const;

        private:

            std::string m_package_name;
            std::string m_plugin_name;
            std::string m_node_name;
            std::string m_node_namespace;
            uint8_t m_log_level;
            std::vector<std::string> m_remap_rules;
            std::vector<rcl_interfaces::msg::Parameter> m_parameters;
            std::vector<rcl_interfaces::msg::Parameter> m_extra_arguments;
        };
        /*!
         * @brief This class represents the structure LoadNode_Response defined by the user in the IDL file.
         * @ingroup LOADNODE
         */
        class LoadNode_Response
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport LoadNode_Response();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~LoadNode_Response();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object composition_interfaces::srv::LoadNode_Response that will be copied.
             */
            eProsima_user_DllExport LoadNode_Response(
                    const LoadNode_Response& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object composition_interfaces::srv::LoadNode_Response that will be copied.
             */
            eProsima_user_DllExport LoadNode_Response(
                    LoadNode_Response&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object composition_interfaces::srv::LoadNode_Response that will be copied.
             */
            eProsima_user_DllExport LoadNode_Response& operator =(
                    const LoadNode_Response& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object composition_interfaces::srv::LoadNode_Response that will be copied.
             */
            eProsima_user_DllExport LoadNode_Response& operator =(
                    LoadNode_Response&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x composition_interfaces::srv::LoadNode_Response object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const LoadNode_Response& x) const;

            /*!
             * @brief Comparison operator.
             * @param x composition_interfaces::srv::LoadNode_Response object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const LoadNode_Response& x) const;

            /*!
             * @brief This function sets a value in member success
             * @param _success New value for member success
             */
            eProsima_user_DllExport void success(
                    bool _success);

            /*!
             * @brief This function returns the value of member success
             * @return Value of member success
             */
            eProsima_user_DllExport bool success() const;

            /*!
             * @brief This function returns a reference to member success
             * @return Reference to member success
             */
            eProsima_user_DllExport bool& success();

            /*!
             * @brief This function copies the value in member error_message
             * @param _error_message New value to be copied in member error_message
             */
            eProsima_user_DllExport void error_message(
                    const std::string& _error_message);

            /*!
             * @brief This function moves the value in member error_message
             * @param _error_message New value to be moved in member error_message
             */
            eProsima_user_DllExport void error_message(
                    std::string&& _error_message);

            /*!
             * @brief This function returns a constant reference to member error_message
             * @return Constant reference to member error_message
             */
            eProsima_user_DllExport const std::string& error_message() const;

            /*!
             * @brief This function returns a reference to member error_message
             * @return Reference to member error_message
             */
            eProsima_user_DllExport std::string& error_message();
            /*!
             * @brief This function copies the value in member full_node_name
             * @param _full_node_name New value to be copied in member full_node_name
             */
            eProsima_user_DllExport void full_node_name(
                    const std::string& _full_node_name);

            /*!
             * @brief This function moves the value in member full_node_name
             * @param _full_node_name New value to be moved in member full_node_name
             */
            eProsima_user_DllExport void full_node_name(
                    std::string&& _full_node_name);

            /*!
             * @brief This function returns a constant reference to member full_node_name
             * @return Constant reference to member full_node_name
             */
            eProsima_user_DllExport const std::string& full_node_name() const;

            /*!
             * @brief This function returns a reference to member full_node_name
             * @return Reference to member full_node_name
             */
            eProsima_user_DllExport std::string& full_node_name();
            /*!
             * @brief This function sets a value in member unique_id
             * @param _unique_id New value for member unique_id
             */
            eProsima_user_DllExport void unique_id(
                    uint64_t _unique_id);

            /*!
             * @brief This function returns the value of member unique_id
             * @return Value of member unique_id
             */
            eProsima_user_DllExport uint64_t unique_id() const;

            /*!
             * @brief This function returns a reference to member unique_id
             * @return Reference to member unique_id
             */
            eProsima_user_DllExport uint64_t& unique_id();


            /*!
             * @brief This function returns the maximum serialized size of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function returns the serialized size of a data depending on the buffer alignment.
             * @param data Data which is calculated its serialized size.
             * @param current_alignment Buffer alignment.
             * @return Serialized size.
             */
            eProsima_user_DllExport static size_t getCdrSerializedSize(
                    const composition_interfaces::srv::LoadNode_Response& data,
                    size_t current_alignment = 0);


            /*!
             * @brief This function serializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serialize(
                    eprosima::fastcdr::Cdr& cdr) const;

            /*!
             * @brief This function deserializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void deserialize(
                    eprosima::fastcdr::Cdr& cdr);



            /*!
             * @brief This function returns the maximum serialized size of the Key of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function tells you if the Key has been defined for this type
             */
            eProsima_user_DllExport static bool isKeyDefined();

            /*!
             * @brief This function serializes the key members of an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serializeKey(
                    eprosima::fastcdr::Cdr& cdr) const;

        private:

            bool m_success;
            std::string m_error_message;
            std::string m_full_node_name;
            uint64_t m_unique_id;
        };
    } // namespace srv
} // namespace composition_interfaces

#endif // _FAST_DDS_GENERATED_COMPOSITION_INTERFACES_SRV_LOADNODE_H_