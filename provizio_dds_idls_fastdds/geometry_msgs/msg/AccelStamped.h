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
 * @file AccelStamped.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_ACCELSTAMPED_H_
#define _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_ACCELSTAMPED_H_

#include "std_msgs/msg/Header.h"
#include "Accel.h"

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
#if defined(AccelStamped_SOURCE)
#define AccelStamped_DllAPI __declspec( dllexport )
#else
#define AccelStamped_DllAPI __declspec( dllimport )
#endif // AccelStamped_SOURCE
#else
#define AccelStamped_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define AccelStamped_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace geometry_msgs {
    namespace msg {
        /*!
         * @brief This class represents the structure AccelStamped defined by the user in the IDL file.
         * @ingroup ACCELSTAMPED
         */
        class AccelStamped
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport AccelStamped();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~AccelStamped();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object geometry_msgs::msg::AccelStamped that will be copied.
             */
            eProsima_user_DllExport AccelStamped(
                    const AccelStamped& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object geometry_msgs::msg::AccelStamped that will be copied.
             */
            eProsima_user_DllExport AccelStamped(
                    AccelStamped&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object geometry_msgs::msg::AccelStamped that will be copied.
             */
            eProsima_user_DllExport AccelStamped& operator =(
                    const AccelStamped& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object geometry_msgs::msg::AccelStamped that will be copied.
             */
            eProsima_user_DllExport AccelStamped& operator =(
                    AccelStamped&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x geometry_msgs::msg::AccelStamped object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const AccelStamped& x) const;

            /*!
             * @brief Comparison operator.
             * @param x geometry_msgs::msg::AccelStamped object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const AccelStamped& x) const;

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
             * @brief This function copies the value in member accel
             * @param _accel New value to be copied in member accel
             */
            eProsima_user_DllExport void accel(
                    const geometry_msgs::msg::Accel& _accel);

            /*!
             * @brief This function moves the value in member accel
             * @param _accel New value to be moved in member accel
             */
            eProsima_user_DllExport void accel(
                    geometry_msgs::msg::Accel&& _accel);

            /*!
             * @brief This function returns a constant reference to member accel
             * @return Constant reference to member accel
             */
            eProsima_user_DllExport const geometry_msgs::msg::Accel& accel() const;

            /*!
             * @brief This function returns a reference to member accel
             * @return Reference to member accel
             */
            eProsima_user_DllExport geometry_msgs::msg::Accel& accel();

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
                    const geometry_msgs::msg::AccelStamped& data,
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
            geometry_msgs::msg::Accel m_accel;

        };
    } // namespace msg
} // namespace geometry_msgs

#endif // _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_ACCELSTAMPED_H_