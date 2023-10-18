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
 * @file GetPlan.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_NAV_MSGS_SRV_GETPLAN_H_
#define _FAST_DDS_GENERATED_NAV_MSGS_SRV_GETPLAN_H_

#include <array>
#include <bitset>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

#include <fastcdr/cdr/fixed_size_string.hpp>
#include <fastcdr/xcdr/optional.hpp>

#include "geometry_msgs/msg/PoseStamped.h"
#include "nav_msgs/msg/Path.h"


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
#if defined(GETPLAN_SOURCE)
#define GETPLAN_DllAPI __declspec( dllexport )
#else
#define GETPLAN_DllAPI __declspec( dllimport )
#endif // GETPLAN_SOURCE
#else
#define GETPLAN_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define GETPLAN_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
class CdrSizeCalculator;
} // namespace fastcdr
} // namespace eprosima



namespace nav_msgs {
    namespace srv {
        /*!
         * @brief This class represents the structure GetPlan_Request defined by the user in the IDL file.
         * @ingroup GetPlan
         */
        class GetPlan_Request
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport GetPlan_Request();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~GetPlan_Request();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object nav_msgs::srv::GetPlan_Request that will be copied.
             */
            eProsima_user_DllExport GetPlan_Request(
                    const GetPlan_Request& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object nav_msgs::srv::GetPlan_Request that will be copied.
             */
            eProsima_user_DllExport GetPlan_Request(
                    GetPlan_Request&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object nav_msgs::srv::GetPlan_Request that will be copied.
             */
            eProsima_user_DllExport GetPlan_Request& operator =(
                    const GetPlan_Request& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object nav_msgs::srv::GetPlan_Request that will be copied.
             */
            eProsima_user_DllExport GetPlan_Request& operator =(
                    GetPlan_Request&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x nav_msgs::srv::GetPlan_Request object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const GetPlan_Request& x) const;

            /*!
             * @brief Comparison operator.
             * @param x nav_msgs::srv::GetPlan_Request object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const GetPlan_Request& x) const;

            /*!
             * @brief This function copies the value in member start
             * @param _start New value to be copied in member start
             */
            eProsima_user_DllExport void start(
                    const geometry_msgs::msg::PoseStamped& _start);

            /*!
             * @brief This function moves the value in member start
             * @param _start New value to be moved in member start
             */
            eProsima_user_DllExport void start(
                    geometry_msgs::msg::PoseStamped&& _start);

            /*!
             * @brief This function returns a constant reference to member start
             * @return Constant reference to member start
             */
            eProsima_user_DllExport const geometry_msgs::msg::PoseStamped& start() const;

            /*!
             * @brief This function returns a reference to member start
             * @return Reference to member start
             */
            eProsima_user_DllExport geometry_msgs::msg::PoseStamped& start();


            /*!
             * @brief This function copies the value in member goal
             * @param _goal New value to be copied in member goal
             */
            eProsima_user_DllExport void goal(
                    const geometry_msgs::msg::PoseStamped& _goal);

            /*!
             * @brief This function moves the value in member goal
             * @param _goal New value to be moved in member goal
             */
            eProsima_user_DllExport void goal(
                    geometry_msgs::msg::PoseStamped&& _goal);

            /*!
             * @brief This function returns a constant reference to member goal
             * @return Constant reference to member goal
             */
            eProsima_user_DllExport const geometry_msgs::msg::PoseStamped& goal() const;

            /*!
             * @brief This function returns a reference to member goal
             * @return Reference to member goal
             */
            eProsima_user_DllExport geometry_msgs::msg::PoseStamped& goal();


            /*!
             * @brief This function sets a value in member tolerance
             * @param _tolerance New value for member tolerance
             */
            eProsima_user_DllExport void tolerance(
                    float _tolerance);

            /*!
             * @brief This function returns the value of member tolerance
             * @return Value of member tolerance
             */
            eProsima_user_DllExport float tolerance() const;

            /*!
             * @brief This function returns a reference to member tolerance
             * @return Reference to member tolerance
             */
            eProsima_user_DllExport float& tolerance();

        private:

            geometry_msgs::msg::PoseStamped m_start;
            geometry_msgs::msg::PoseStamped m_goal;
            float m_tolerance{0.0};

        };
        /*!
         * @brief This class represents the structure GetPlan_Response defined by the user in the IDL file.
         * @ingroup GetPlan
         */
        class GetPlan_Response
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport GetPlan_Response();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~GetPlan_Response();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object nav_msgs::srv::GetPlan_Response that will be copied.
             */
            eProsima_user_DllExport GetPlan_Response(
                    const GetPlan_Response& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object nav_msgs::srv::GetPlan_Response that will be copied.
             */
            eProsima_user_DllExport GetPlan_Response(
                    GetPlan_Response&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object nav_msgs::srv::GetPlan_Response that will be copied.
             */
            eProsima_user_DllExport GetPlan_Response& operator =(
                    const GetPlan_Response& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object nav_msgs::srv::GetPlan_Response that will be copied.
             */
            eProsima_user_DllExport GetPlan_Response& operator =(
                    GetPlan_Response&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x nav_msgs::srv::GetPlan_Response object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const GetPlan_Response& x) const;

            /*!
             * @brief Comparison operator.
             * @param x nav_msgs::srv::GetPlan_Response object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const GetPlan_Response& x) const;

            /*!
             * @brief This function copies the value in member plan
             * @param _plan New value to be copied in member plan
             */
            eProsima_user_DllExport void plan(
                    const nav_msgs::msg::Path& _plan);

            /*!
             * @brief This function moves the value in member plan
             * @param _plan New value to be moved in member plan
             */
            eProsima_user_DllExport void plan(
                    nav_msgs::msg::Path&& _plan);

            /*!
             * @brief This function returns a constant reference to member plan
             * @return Constant reference to member plan
             */
            eProsima_user_DllExport const nav_msgs::msg::Path& plan() const;

            /*!
             * @brief This function returns a reference to member plan
             * @return Reference to member plan
             */
            eProsima_user_DllExport nav_msgs::msg::Path& plan();

        private:

            nav_msgs::msg::Path m_plan;

        };
    } // namespace srv
} // namespace nav_msgs

#endif // _FAST_DDS_GENERATED_NAV_MSGS_SRV_GETPLAN_H_

