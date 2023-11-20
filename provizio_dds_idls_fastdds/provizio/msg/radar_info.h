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
 * @file radar_info.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_PROVIZIO_MSG_RADAR_INFO_H_
#define _FAST_DDS_GENERATED_PROVIZIO_MSG_RADAR_INFO_H_

#include "std_msgs/msg/Header.h"
#include "radar_mode.h"

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
#if defined(radar_info_SOURCE)
#define radar_info_DllAPI __declspec( dllexport )
#else
#define radar_info_DllAPI __declspec( dllimport )
#endif // radar_info_SOURCE
#else
#define radar_info_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define radar_info_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace provizio {
    namespace msg {
        /*!
         * @brief This class represents the structure radar_info defined by the user in the IDL file.
         * @ingroup RADAR_INFO
         */
        class radar_info
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport radar_info();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~radar_info();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object provizio::msg::radar_info that will be copied.
             */
            eProsima_user_DllExport radar_info(
                    const radar_info& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object provizio::msg::radar_info that will be copied.
             */
            eProsima_user_DllExport radar_info(
                    radar_info&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object provizio::msg::radar_info that will be copied.
             */
            eProsima_user_DllExport radar_info& operator =(
                    const radar_info& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object provizio::msg::radar_info that will be copied.
             */
            eProsima_user_DllExport radar_info& operator =(
                    radar_info&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x provizio::msg::radar_info object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const radar_info& x) const;

            /*!
             * @brief Comparison operator.
             * @param x provizio::msg::radar_info object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const radar_info& x) const;

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
             * @brief This function copies the value in member serial_number
             * @param _serial_number New value to be copied in member serial_number
             */
            eProsima_user_DllExport void serial_number(
                    const std::string& _serial_number);

            /*!
             * @brief This function moves the value in member serial_number
             * @param _serial_number New value to be moved in member serial_number
             */
            eProsima_user_DllExport void serial_number(
                    std::string&& _serial_number);

            /*!
             * @brief This function returns a constant reference to member serial_number
             * @return Constant reference to member serial_number
             */
            eProsima_user_DllExport const std::string& serial_number() const;

            /*!
             * @brief This function returns a reference to member serial_number
             * @return Reference to member serial_number
             */
            eProsima_user_DllExport std::string& serial_number();
            /*!
             * @brief This function copies the value in member supported_modes
             * @param _supported_modes New value to be copied in member supported_modes
             */
            eProsima_user_DllExport void supported_modes(
                    const std::vector<provizio::msg::radar_mode>& _supported_modes);

            /*!
             * @brief This function moves the value in member supported_modes
             * @param _supported_modes New value to be moved in member supported_modes
             */
            eProsima_user_DllExport void supported_modes(
                    std::vector<provizio::msg::radar_mode>&& _supported_modes);

            /*!
             * @brief This function returns a constant reference to member supported_modes
             * @return Constant reference to member supported_modes
             */
            eProsima_user_DllExport const std::vector<provizio::msg::radar_mode>& supported_modes() const;

            /*!
             * @brief This function returns a reference to member supported_modes
             * @return Reference to member supported_modes
             */
            eProsima_user_DllExport std::vector<provizio::msg::radar_mode>& supported_modes();
            /*!
             * @brief This function sets a value in member current_mode
             * @param _current_mode New value for member current_mode
             */
            eProsima_user_DllExport void current_mode(
                    provizio::msg::radar_mode _current_mode);

            /*!
             * @brief This function returns the value of member current_mode
             * @return Value of member current_mode
             */
            eProsima_user_DllExport provizio::msg::radar_mode current_mode() const;

            /*!
             * @brief This function returns a reference to member current_mode
             * @return Reference to member current_mode
             */
            eProsima_user_DllExport provizio::msg::radar_mode& current_mode();


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
                    const provizio::msg::radar_info& data,
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
            std::string m_serial_number;
            std::vector<provizio::msg::radar_mode> m_supported_modes;
            provizio::msg::radar_mode m_current_mode;

        };
    } // namespace msg
} // namespace provizio

#endif // _FAST_DDS_GENERATED_PROVIZIO_MSG_RADAR_INFO_H_