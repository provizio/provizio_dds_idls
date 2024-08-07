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
 * @file GetMap.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_NAV_MSGS_SRV_GETMAP_H_
#define _FAST_DDS_GENERATED_NAV_MSGS_SRV_GETMAP_H_

#include <array>
#include <bitset>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

#include <fastcdr/cdr/fixed_size_string.hpp>
#include <fastcdr/xcdr/optional.hpp>

#include "nav_msgs/msg/OccupancyGrid.h"


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
#if defined(GETMAP_SOURCE)
#define GETMAP_DllAPI __declspec( dllexport )
#else
#define GETMAP_DllAPI __declspec( dllimport )
#endif // GETMAP_SOURCE
#else
#define GETMAP_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define GETMAP_DllAPI
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
         * @brief This class represents the structure GetMap_Request defined by the user in the IDL file.
         * @ingroup GetMap
         */
        class GetMap_Request
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport GetMap_Request();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~GetMap_Request();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object nav_msgs::srv::GetMap_Request that will be copied.
             */
            eProsima_user_DllExport GetMap_Request(
                    const GetMap_Request& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object nav_msgs::srv::GetMap_Request that will be copied.
             */
            eProsima_user_DllExport GetMap_Request(
                    GetMap_Request&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object nav_msgs::srv::GetMap_Request that will be copied.
             */
            eProsima_user_DllExport GetMap_Request& operator =(
                    const GetMap_Request& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object nav_msgs::srv::GetMap_Request that will be copied.
             */
            eProsima_user_DllExport GetMap_Request& operator =(
                    GetMap_Request&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x nav_msgs::srv::GetMap_Request object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const GetMap_Request& x) const;

            /*!
             * @brief Comparison operator.
             * @param x nav_msgs::srv::GetMap_Request object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const GetMap_Request& x) const;

            /*!
             * @brief This function sets a value in member structure_needs_at_least_one_member
             * @param _structure_needs_at_least_one_member New value for member structure_needs_at_least_one_member
             */
            eProsima_user_DllExport void structure_needs_at_least_one_member(
                    uint8_t _structure_needs_at_least_one_member);

            /*!
             * @brief This function returns the value of member structure_needs_at_least_one_member
             * @return Value of member structure_needs_at_least_one_member
             */
            eProsima_user_DllExport uint8_t structure_needs_at_least_one_member() const;

            /*!
             * @brief This function returns a reference to member structure_needs_at_least_one_member
             * @return Reference to member structure_needs_at_least_one_member
             */
            eProsima_user_DllExport uint8_t& structure_needs_at_least_one_member();

        private:

            uint8_t m_structure_needs_at_least_one_member{0};

        };
        /*!
         * @brief This class represents the structure GetMap_Response defined by the user in the IDL file.
         * @ingroup GetMap
         */
        class GetMap_Response
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport GetMap_Response();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~GetMap_Response();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object nav_msgs::srv::GetMap_Response that will be copied.
             */
            eProsima_user_DllExport GetMap_Response(
                    const GetMap_Response& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object nav_msgs::srv::GetMap_Response that will be copied.
             */
            eProsima_user_DllExport GetMap_Response(
                    GetMap_Response&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object nav_msgs::srv::GetMap_Response that will be copied.
             */
            eProsima_user_DllExport GetMap_Response& operator =(
                    const GetMap_Response& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object nav_msgs::srv::GetMap_Response that will be copied.
             */
            eProsima_user_DllExport GetMap_Response& operator =(
                    GetMap_Response&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x nav_msgs::srv::GetMap_Response object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const GetMap_Response& x) const;

            /*!
             * @brief Comparison operator.
             * @param x nav_msgs::srv::GetMap_Response object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const GetMap_Response& x) const;

            /*!
             * @brief This function copies the value in member the_map
             * @param _the_map New value to be copied in member the_map
             */
            eProsima_user_DllExport void the_map(
                    const nav_msgs::msg::OccupancyGrid& _the_map);

            /*!
             * @brief This function moves the value in member the_map
             * @param _the_map New value to be moved in member the_map
             */
            eProsima_user_DllExport void the_map(
                    nav_msgs::msg::OccupancyGrid&& _the_map);

            /*!
             * @brief This function returns a constant reference to member the_map
             * @return Constant reference to member the_map
             */
            eProsima_user_DllExport const nav_msgs::msg::OccupancyGrid& the_map() const;

            /*!
             * @brief This function returns a reference to member the_map
             * @return Reference to member the_map
             */
            eProsima_user_DllExport nav_msgs::msg::OccupancyGrid& the_map();

        private:

            nav_msgs::msg::OccupancyGrid m_the_map;

        };
    } // namespace srv
} // namespace nav_msgs

#endif // _FAST_DDS_GENERATED_NAV_MSGS_SRV_GETMAP_H_

