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
 * @file LaserScan.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_LASERSCAN_H_
#define _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_LASERSCAN_H_

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
#if defined(LASERSCAN_SOURCE)
#define LASERSCAN_DllAPI __declspec( dllexport )
#else
#define LASERSCAN_DllAPI __declspec( dllimport )
#endif // LASERSCAN_SOURCE
#else
#define LASERSCAN_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define LASERSCAN_DllAPI
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
         * @brief This class represents the structure LaserScan defined by the user in the IDL file.
         * @ingroup LaserScan
         */
        class LaserScan
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport LaserScan();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~LaserScan();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object sensor_msgs::msg::LaserScan that will be copied.
             */
            eProsima_user_DllExport LaserScan(
                    const LaserScan& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object sensor_msgs::msg::LaserScan that will be copied.
             */
            eProsima_user_DllExport LaserScan(
                    LaserScan&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object sensor_msgs::msg::LaserScan that will be copied.
             */
            eProsima_user_DllExport LaserScan& operator =(
                    const LaserScan& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object sensor_msgs::msg::LaserScan that will be copied.
             */
            eProsima_user_DllExport LaserScan& operator =(
                    LaserScan&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::LaserScan object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const LaserScan& x) const;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::LaserScan object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const LaserScan& x) const;

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
             * @brief This function sets a value in member angle_min
             * @param _angle_min New value for member angle_min
             */
            eProsima_user_DllExport void angle_min(
                    float _angle_min);

            /*!
             * @brief This function returns the value of member angle_min
             * @return Value of member angle_min
             */
            eProsima_user_DllExport float angle_min() const;

            /*!
             * @brief This function returns a reference to member angle_min
             * @return Reference to member angle_min
             */
            eProsima_user_DllExport float& angle_min();


            /*!
             * @brief This function sets a value in member angle_max
             * @param _angle_max New value for member angle_max
             */
            eProsima_user_DllExport void angle_max(
                    float _angle_max);

            /*!
             * @brief This function returns the value of member angle_max
             * @return Value of member angle_max
             */
            eProsima_user_DllExport float angle_max() const;

            /*!
             * @brief This function returns a reference to member angle_max
             * @return Reference to member angle_max
             */
            eProsima_user_DllExport float& angle_max();


            /*!
             * @brief This function sets a value in member angle_increment
             * @param _angle_increment New value for member angle_increment
             */
            eProsima_user_DllExport void angle_increment(
                    float _angle_increment);

            /*!
             * @brief This function returns the value of member angle_increment
             * @return Value of member angle_increment
             */
            eProsima_user_DllExport float angle_increment() const;

            /*!
             * @brief This function returns a reference to member angle_increment
             * @return Reference to member angle_increment
             */
            eProsima_user_DllExport float& angle_increment();


            /*!
             * @brief This function sets a value in member time_increment
             * @param _time_increment New value for member time_increment
             */
            eProsima_user_DllExport void time_increment(
                    float _time_increment);

            /*!
             * @brief This function returns the value of member time_increment
             * @return Value of member time_increment
             */
            eProsima_user_DllExport float time_increment() const;

            /*!
             * @brief This function returns a reference to member time_increment
             * @return Reference to member time_increment
             */
            eProsima_user_DllExport float& time_increment();


            /*!
             * @brief This function sets a value in member scan_time
             * @param _scan_time New value for member scan_time
             */
            eProsima_user_DllExport void scan_time(
                    float _scan_time);

            /*!
             * @brief This function returns the value of member scan_time
             * @return Value of member scan_time
             */
            eProsima_user_DllExport float scan_time() const;

            /*!
             * @brief This function returns a reference to member scan_time
             * @return Reference to member scan_time
             */
            eProsima_user_DllExport float& scan_time();


            /*!
             * @brief This function sets a value in member range_min
             * @param _range_min New value for member range_min
             */
            eProsima_user_DllExport void range_min(
                    float _range_min);

            /*!
             * @brief This function returns the value of member range_min
             * @return Value of member range_min
             */
            eProsima_user_DllExport float range_min() const;

            /*!
             * @brief This function returns a reference to member range_min
             * @return Reference to member range_min
             */
            eProsima_user_DllExport float& range_min();


            /*!
             * @brief This function sets a value in member range_max
             * @param _range_max New value for member range_max
             */
            eProsima_user_DllExport void range_max(
                    float _range_max);

            /*!
             * @brief This function returns the value of member range_max
             * @return Value of member range_max
             */
            eProsima_user_DllExport float range_max() const;

            /*!
             * @brief This function returns a reference to member range_max
             * @return Reference to member range_max
             */
            eProsima_user_DllExport float& range_max();


            /*!
             * @brief This function copies the value in member ranges
             * @param _ranges New value to be copied in member ranges
             */
            eProsima_user_DllExport void ranges(
                    const std::vector<float>& _ranges);

            /*!
             * @brief This function moves the value in member ranges
             * @param _ranges New value to be moved in member ranges
             */
            eProsima_user_DllExport void ranges(
                    std::vector<float>&& _ranges);

            /*!
             * @brief This function returns a constant reference to member ranges
             * @return Constant reference to member ranges
             */
            eProsima_user_DllExport const std::vector<float>& ranges() const;

            /*!
             * @brief This function returns a reference to member ranges
             * @return Reference to member ranges
             */
            eProsima_user_DllExport std::vector<float>& ranges();


            /*!
             * @brief This function copies the value in member intensities
             * @param _intensities New value to be copied in member intensities
             */
            eProsima_user_DllExport void intensities(
                    const std::vector<float>& _intensities);

            /*!
             * @brief This function moves the value in member intensities
             * @param _intensities New value to be moved in member intensities
             */
            eProsima_user_DllExport void intensities(
                    std::vector<float>&& _intensities);

            /*!
             * @brief This function returns a constant reference to member intensities
             * @return Constant reference to member intensities
             */
            eProsima_user_DllExport const std::vector<float>& intensities() const;

            /*!
             * @brief This function returns a reference to member intensities
             * @return Reference to member intensities
             */
            eProsima_user_DllExport std::vector<float>& intensities();

        private:

            std_msgs::msg::Header m_header;
            float m_angle_min{0.0};
            float m_angle_max{0.0};
            float m_angle_increment{0.0};
            float m_time_increment{0.0};
            float m_scan_time{0.0};
            float m_range_min{0.0};
            float m_range_max{0.0};
            std::vector<float> m_ranges;
            std::vector<float> m_intensities;

        };
    } // namespace msg
} // namespace sensor_msgs

#endif // _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_LASERSCAN_H_

