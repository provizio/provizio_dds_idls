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
 * @file Seek.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_ROSBAG2_INTERFACES_SRV_SEEK_H_
#define _FAST_DDS_GENERATED_ROSBAG2_INTERFACES_SRV_SEEK_H_

#include "builtin_interfaces/msg/Time.h"

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
#if defined(Seek_SOURCE)
#define Seek_DllAPI __declspec( dllexport )
#else
#define Seek_DllAPI __declspec( dllimport )
#endif // Seek_SOURCE
#else
#define Seek_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define Seek_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace rosbag2_interfaces {
    namespace srv {
        /*!
         * @brief This class represents the structure Seek_Request defined by the user in the IDL file.
         * @ingroup SEEK
         */
        class Seek_Request
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport Seek_Request();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~Seek_Request();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object rosbag2_interfaces::srv::Seek_Request that will be copied.
             */
            eProsima_user_DllExport Seek_Request(
                    const Seek_Request& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object rosbag2_interfaces::srv::Seek_Request that will be copied.
             */
            eProsima_user_DllExport Seek_Request(
                    Seek_Request&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object rosbag2_interfaces::srv::Seek_Request that will be copied.
             */
            eProsima_user_DllExport Seek_Request& operator =(
                    const Seek_Request& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object rosbag2_interfaces::srv::Seek_Request that will be copied.
             */
            eProsima_user_DllExport Seek_Request& operator =(
                    Seek_Request&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x rosbag2_interfaces::srv::Seek_Request object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const Seek_Request& x) const;

            /*!
             * @brief Comparison operator.
             * @param x rosbag2_interfaces::srv::Seek_Request object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const Seek_Request& x) const;

            /*!
             * @brief This function copies the value in member time
             * @param _time New value to be copied in member time
             */
            eProsima_user_DllExport void time(
                    const builtin_interfaces::msg::Time& _time);

            /*!
             * @brief This function moves the value in member time
             * @param _time New value to be moved in member time
             */
            eProsima_user_DllExport void time(
                    builtin_interfaces::msg::Time&& _time);

            /*!
             * @brief This function returns a constant reference to member time
             * @return Constant reference to member time
             */
            eProsima_user_DllExport const builtin_interfaces::msg::Time& time() const;

            /*!
             * @brief This function returns a reference to member time
             * @return Reference to member time
             */
            eProsima_user_DllExport builtin_interfaces::msg::Time& time();

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
                    const rosbag2_interfaces::srv::Seek_Request& data,
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

            builtin_interfaces::msg::Time m_time;

        };
        /*!
         * @brief This class represents the structure Seek_Response defined by the user in the IDL file.
         * @ingroup SEEK
         */
        class Seek_Response
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport Seek_Response();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~Seek_Response();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object rosbag2_interfaces::srv::Seek_Response that will be copied.
             */
            eProsima_user_DllExport Seek_Response(
                    const Seek_Response& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object rosbag2_interfaces::srv::Seek_Response that will be copied.
             */
            eProsima_user_DllExport Seek_Response(
                    Seek_Response&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object rosbag2_interfaces::srv::Seek_Response that will be copied.
             */
            eProsima_user_DllExport Seek_Response& operator =(
                    const Seek_Response& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object rosbag2_interfaces::srv::Seek_Response that will be copied.
             */
            eProsima_user_DllExport Seek_Response& operator =(
                    Seek_Response&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x rosbag2_interfaces::srv::Seek_Response object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const Seek_Response& x) const;

            /*!
             * @brief Comparison operator.
             * @param x rosbag2_interfaces::srv::Seek_Response object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const Seek_Response& x) const;

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
                    const rosbag2_interfaces::srv::Seek_Response& data,
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

        };
    } // namespace srv
} // namespace rosbag2_interfaces

#endif // _FAST_DDS_GENERATED_ROSBAG2_INTERFACES_SRV_SEEK_H_