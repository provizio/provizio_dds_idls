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
 * @file RelativeHumidity.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_RELATIVEHUMIDITY_H_
#define _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_RELATIVEHUMIDITY_H_

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
#if defined(RELATIVEHUMIDITY_SOURCE)
#define RELATIVEHUMIDITY_DllAPI __declspec( dllexport )
#else
#define RELATIVEHUMIDITY_DllAPI __declspec( dllimport )
#endif // RELATIVEHUMIDITY_SOURCE
#else
#define RELATIVEHUMIDITY_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define RELATIVEHUMIDITY_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
class CdrSizeCalculator;
} // namespace fastcdr
} // namespace eprosima



namespace sensor_msgs {
    namespace msg {
        /*!
         * @brief This class represents the structure RelativeHumidity defined by the user in the IDL file.
         * @ingroup RelativeHumidity
         */
        class RelativeHumidity
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport RelativeHumidity();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~RelativeHumidity();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object sensor_msgs::msg::RelativeHumidity that will be copied.
             */
            eProsima_user_DllExport RelativeHumidity(
                    const RelativeHumidity& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object sensor_msgs::msg::RelativeHumidity that will be copied.
             */
            eProsima_user_DllExport RelativeHumidity(
                    RelativeHumidity&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object sensor_msgs::msg::RelativeHumidity that will be copied.
             */
            eProsima_user_DllExport RelativeHumidity& operator =(
                    const RelativeHumidity& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object sensor_msgs::msg::RelativeHumidity that will be copied.
             */
            eProsima_user_DllExport RelativeHumidity& operator =(
                    RelativeHumidity&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::RelativeHumidity object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const RelativeHumidity& x) const;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::RelativeHumidity object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const RelativeHumidity& x) const;

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
             * @brief This function sets a value in member relative_humidity
             * @param _relative_humidity New value for member relative_humidity
             */
            eProsima_user_DllExport void relative_humidity(
                    double _relative_humidity);

            /*!
             * @brief This function returns the value of member relative_humidity
             * @return Value of member relative_humidity
             */
            eProsima_user_DllExport double relative_humidity() const;

            /*!
             * @brief This function returns a reference to member relative_humidity
             * @return Reference to member relative_humidity
             */
            eProsima_user_DllExport double& relative_humidity();


            /*!
             * @brief This function sets a value in member variance
             * @param _variance New value for member variance
             */
            eProsima_user_DllExport void variance(
                    double _variance);

            /*!
             * @brief This function returns the value of member variance
             * @return Value of member variance
             */
            eProsima_user_DllExport double variance() const;

            /*!
             * @brief This function returns a reference to member variance
             * @return Reference to member variance
             */
            eProsima_user_DllExport double& variance();

        private:

            std_msgs::msg::Header m_header;
            double m_relative_humidity{0.0};
            double m_variance{0.0};

        };
    } // namespace msg
} // namespace sensor_msgs

#endif // _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_RELATIVEHUMIDITY_H_

