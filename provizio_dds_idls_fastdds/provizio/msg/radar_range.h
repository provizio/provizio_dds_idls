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
 * @file radar_range.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_PROVIZIO_MSG_RADAR_RANGE_H_
#define _FAST_DDS_GENERATED_PROVIZIO_MSG_RADAR_RANGE_H_

#include <array>
#include <bitset>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

#include <fastcdr/cdr/fixed_size_string.hpp>
#include <fastcdr/xcdr/optional.hpp>

#include "std_msgs/msg/Header.h"


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
#if defined(RADAR_RANGE_SOURCE)
#define RADAR_RANGE_DllAPI __declspec( dllexport )
#else
#define RADAR_RANGE_DllAPI __declspec( dllimport )
#endif // RADAR_RANGE_SOURCE
#else
#define RADAR_RANGE_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define RADAR_RANGE_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
class CdrSizeCalculator;
} // namespace fastcdr
} // namespace eprosima



namespace provizio {
    namespace msg {
        /*!
         * @brief This class represents the enumeration radar_range defined by the user in the IDL file.
         * @ingroup radar_range
         */
        enum radar_range : uint32_t
        {
            short_range,
            medium_range,
            long_range,
            ultra_long_range,
            hyper_long_range
        };
        /*!
         * @brief This class represents the structure set_radar_range defined by the user in the IDL file.
         * @ingroup radar_range
         */
        class set_radar_range
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport set_radar_range();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~set_radar_range();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object provizio::msg::set_radar_range that will be copied.
             */
            eProsima_user_DllExport set_radar_range(
                    const set_radar_range& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object provizio::msg::set_radar_range that will be copied.
             */
            eProsima_user_DllExport set_radar_range(
                    set_radar_range&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object provizio::msg::set_radar_range that will be copied.
             */
            eProsima_user_DllExport set_radar_range& operator =(
                    const set_radar_range& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object provizio::msg::set_radar_range that will be copied.
             */
            eProsima_user_DllExport set_radar_range& operator =(
                    set_radar_range&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x provizio::msg::set_radar_range object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const set_radar_range& x) const;

            /*!
             * @brief Comparison operator.
             * @param x provizio::msg::set_radar_range object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const set_radar_range& x) const;

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
             * @brief This function sets a value in member target_range
             * @param _target_range New value for member target_range
             */
            eProsima_user_DllExport void target_range(
                    provizio::msg::radar_range _target_range);

            /*!
             * @brief This function returns the value of member target_range
             * @return Value of member target_range
             */
            eProsima_user_DllExport provizio::msg::radar_range target_range() const;

            /*!
             * @brief This function returns a reference to member target_range
             * @return Reference to member target_range
             */
            eProsima_user_DllExport provizio::msg::radar_range& target_range();

        private:

            std_msgs::msg::Header m_header;
            std::string m_serial_number;
            provizio::msg::radar_range m_target_range{provizio::msg::short_range};

        };
    } // namespace msg
} // namespace provizio

#endif // _FAST_DDS_GENERATED_PROVIZIO_MSG_RADAR_RANGE_H_

