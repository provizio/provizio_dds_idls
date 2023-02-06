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
 * @file MetricsMessage.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_STATISTICS_MSGS_MSG_METRICSMESSAGE_H_
#define _FAST_DDS_GENERATED_STATISTICS_MSGS_MSG_METRICSMESSAGE_H_

#include "builtin_interfaces/msg/Time.h"
#include "StatisticDataPoint.h"

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
#if defined(MetricsMessage_SOURCE)
#define MetricsMessage_DllAPI __declspec( dllexport )
#else
#define MetricsMessage_DllAPI __declspec( dllimport )
#endif // MetricsMessage_SOURCE
#else
#define MetricsMessage_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define MetricsMessage_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace statistics_msgs {
    namespace msg {
        /*!
         * @brief This class represents the structure MetricsMessage defined by the user in the IDL file.
         * @ingroup METRICSMESSAGE
         */
        class MetricsMessage
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport MetricsMessage();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~MetricsMessage();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object statistics_msgs::msg::MetricsMessage that will be copied.
             */
            eProsima_user_DllExport MetricsMessage(
                    const MetricsMessage& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object statistics_msgs::msg::MetricsMessage that will be copied.
             */
            eProsima_user_DllExport MetricsMessage(
                    MetricsMessage&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object statistics_msgs::msg::MetricsMessage that will be copied.
             */
            eProsima_user_DllExport MetricsMessage& operator =(
                    const MetricsMessage& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object statistics_msgs::msg::MetricsMessage that will be copied.
             */
            eProsima_user_DllExport MetricsMessage& operator =(
                    MetricsMessage&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x statistics_msgs::msg::MetricsMessage object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const MetricsMessage& x) const;

            /*!
             * @brief Comparison operator.
             * @param x statistics_msgs::msg::MetricsMessage object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const MetricsMessage& x) const;

            /*!
             * @brief This function copies the value in member measurement_source_name
             * @param _measurement_source_name New value to be copied in member measurement_source_name
             */
            eProsima_user_DllExport void measurement_source_name(
                    const std::string& _measurement_source_name);

            /*!
             * @brief This function moves the value in member measurement_source_name
             * @param _measurement_source_name New value to be moved in member measurement_source_name
             */
            eProsima_user_DllExport void measurement_source_name(
                    std::string&& _measurement_source_name);

            /*!
             * @brief This function returns a constant reference to member measurement_source_name
             * @return Constant reference to member measurement_source_name
             */
            eProsima_user_DllExport const std::string& measurement_source_name() const;

            /*!
             * @brief This function returns a reference to member measurement_source_name
             * @return Reference to member measurement_source_name
             */
            eProsima_user_DllExport std::string& measurement_source_name();
            /*!
             * @brief This function copies the value in member metrics_source
             * @param _metrics_source New value to be copied in member metrics_source
             */
            eProsima_user_DllExport void metrics_source(
                    const std::string& _metrics_source);

            /*!
             * @brief This function moves the value in member metrics_source
             * @param _metrics_source New value to be moved in member metrics_source
             */
            eProsima_user_DllExport void metrics_source(
                    std::string&& _metrics_source);

            /*!
             * @brief This function returns a constant reference to member metrics_source
             * @return Constant reference to member metrics_source
             */
            eProsima_user_DllExport const std::string& metrics_source() const;

            /*!
             * @brief This function returns a reference to member metrics_source
             * @return Reference to member metrics_source
             */
            eProsima_user_DllExport std::string& metrics_source();
            /*!
             * @brief This function copies the value in member unit
             * @param _unit New value to be copied in member unit
             */
            eProsima_user_DllExport void unit(
                    const std::string& _unit);

            /*!
             * @brief This function moves the value in member unit
             * @param _unit New value to be moved in member unit
             */
            eProsima_user_DllExport void unit(
                    std::string&& _unit);

            /*!
             * @brief This function returns a constant reference to member unit
             * @return Constant reference to member unit
             */
            eProsima_user_DllExport const std::string& unit() const;

            /*!
             * @brief This function returns a reference to member unit
             * @return Reference to member unit
             */
            eProsima_user_DllExport std::string& unit();
            /*!
             * @brief This function copies the value in member window_start
             * @param _window_start New value to be copied in member window_start
             */
            eProsima_user_DllExport void window_start(
                    const builtin_interfaces::msg::Time& _window_start);

            /*!
             * @brief This function moves the value in member window_start
             * @param _window_start New value to be moved in member window_start
             */
            eProsima_user_DllExport void window_start(
                    builtin_interfaces::msg::Time&& _window_start);

            /*!
             * @brief This function returns a constant reference to member window_start
             * @return Constant reference to member window_start
             */
            eProsima_user_DllExport const builtin_interfaces::msg::Time& window_start() const;

            /*!
             * @brief This function returns a reference to member window_start
             * @return Reference to member window_start
             */
            eProsima_user_DllExport builtin_interfaces::msg::Time& window_start();
            /*!
             * @brief This function copies the value in member window_stop
             * @param _window_stop New value to be copied in member window_stop
             */
            eProsima_user_DllExport void window_stop(
                    const builtin_interfaces::msg::Time& _window_stop);

            /*!
             * @brief This function moves the value in member window_stop
             * @param _window_stop New value to be moved in member window_stop
             */
            eProsima_user_DllExport void window_stop(
                    builtin_interfaces::msg::Time&& _window_stop);

            /*!
             * @brief This function returns a constant reference to member window_stop
             * @return Constant reference to member window_stop
             */
            eProsima_user_DllExport const builtin_interfaces::msg::Time& window_stop() const;

            /*!
             * @brief This function returns a reference to member window_stop
             * @return Reference to member window_stop
             */
            eProsima_user_DllExport builtin_interfaces::msg::Time& window_stop();
            /*!
             * @brief This function copies the value in member statistics
             * @param _statistics New value to be copied in member statistics
             */
            eProsima_user_DllExport void statistics(
                    const std::vector<statistics_msgs::msg::StatisticDataPoint>& _statistics);

            /*!
             * @brief This function moves the value in member statistics
             * @param _statistics New value to be moved in member statistics
             */
            eProsima_user_DllExport void statistics(
                    std::vector<statistics_msgs::msg::StatisticDataPoint>&& _statistics);

            /*!
             * @brief This function returns a constant reference to member statistics
             * @return Constant reference to member statistics
             */
            eProsima_user_DllExport const std::vector<statistics_msgs::msg::StatisticDataPoint>& statistics() const;

            /*!
             * @brief This function returns a reference to member statistics
             * @return Reference to member statistics
             */
            eProsima_user_DllExport std::vector<statistics_msgs::msg::StatisticDataPoint>& statistics();

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
                    const statistics_msgs::msg::MetricsMessage& data,
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

            std::string m_measurement_source_name;
            std::string m_metrics_source;
            std::string m_unit;
            builtin_interfaces::msg::Time m_window_start;
            builtin_interfaces::msg::Time m_window_stop;
            std::vector<statistics_msgs::msg::StatisticDataPoint> m_statistics;
        };
    } // namespace msg
} // namespace statistics_msgs

#endif // _FAST_DDS_GENERATED_STATISTICS_MSGS_MSG_METRICSMESSAGE_H_