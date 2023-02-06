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
 * @file WrenchStamped.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_H_
#define _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_H_

#include "Wrench.h"
#include "std_msgs/msg/Header.h"

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
#if defined(WrenchStamped_SOURCE)
#define WrenchStamped_DllAPI __declspec( dllexport )
#else
#define WrenchStamped_DllAPI __declspec( dllimport )
#endif // WrenchStamped_SOURCE
#else
#define WrenchStamped_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define WrenchStamped_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace geometry_msgs {
    namespace msg {
        /*!
         * @brief This class represents the structure WrenchStamped defined by the user in the IDL file.
         * @ingroup WRENCHSTAMPED
         */
        class WrenchStamped
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport WrenchStamped();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~WrenchStamped();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object geometry_msgs::msg::WrenchStamped that will be copied.
             */
            eProsima_user_DllExport WrenchStamped(
                    const WrenchStamped& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object geometry_msgs::msg::WrenchStamped that will be copied.
             */
            eProsima_user_DllExport WrenchStamped(
                    WrenchStamped&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object geometry_msgs::msg::WrenchStamped that will be copied.
             */
            eProsima_user_DllExport WrenchStamped& operator =(
                    const WrenchStamped& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object geometry_msgs::msg::WrenchStamped that will be copied.
             */
            eProsima_user_DllExport WrenchStamped& operator =(
                    WrenchStamped&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x geometry_msgs::msg::WrenchStamped object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const WrenchStamped& x) const;

            /*!
             * @brief Comparison operator.
             * @param x geometry_msgs::msg::WrenchStamped object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const WrenchStamped& x) const;

            /*!
             * @brief This function copies the value in member header
             * @param _header New value to be copied in member header
             */
            eProsima_user_DllExport void header(
                    const std_msgs::msg::Header& _header);

            /*!
             * @brief This function moves the value in member header
             * @param _header New value to be moved in member header
             */
            eProsima_user_DllExport void header(
                    std_msgs::msg::Header&& _header);

            /*!
             * @brief This function returns a constant reference to member header
             * @return Constant reference to member header
             */
            eProsima_user_DllExport const std_msgs::msg::Header& header() const;

            /*!
             * @brief This function returns a reference to member header
             * @return Reference to member header
             */
            eProsima_user_DllExport std_msgs::msg::Header& header();
            /*!
             * @brief This function copies the value in member wrench
             * @param _wrench New value to be copied in member wrench
             */
            eProsima_user_DllExport void wrench(
                    const geometry_msgs::msg::Wrench& _wrench);

            /*!
             * @brief This function moves the value in member wrench
             * @param _wrench New value to be moved in member wrench
             */
            eProsima_user_DllExport void wrench(
                    geometry_msgs::msg::Wrench&& _wrench);

            /*!
             * @brief This function returns a constant reference to member wrench
             * @return Constant reference to member wrench
             */
            eProsima_user_DllExport const geometry_msgs::msg::Wrench& wrench() const;

            /*!
             * @brief This function returns a reference to member wrench
             * @return Reference to member wrench
             */
            eProsima_user_DllExport geometry_msgs::msg::Wrench& wrench();

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
                    const geometry_msgs::msg::WrenchStamped& data,
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

            std_msgs::msg::Header m_header;
            geometry_msgs::msg::Wrench m_wrench;
        };
    } // namespace msg
} // namespace geometry_msgs

#endif // _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_H_