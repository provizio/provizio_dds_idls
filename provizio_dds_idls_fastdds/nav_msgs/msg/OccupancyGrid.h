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
 * @file OccupancyGrid.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_NAV_MSGS_MSG_OCCUPANCYGRID_H_
#define _FAST_DDS_GENERATED_NAV_MSGS_MSG_OCCUPANCYGRID_H_

#include <array>
#include <bitset>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

#include <fastcdr/cdr/fixed_size_string.hpp>
#include <fastcdr/xcdr/optional.hpp>

#include "std_msgs/msg/Header.h"
#include "MapMetaData.h"


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
#if defined(OCCUPANCYGRID_SOURCE)
#define OCCUPANCYGRID_DllAPI __declspec( dllexport )
#else
#define OCCUPANCYGRID_DllAPI __declspec( dllimport )
#endif // OCCUPANCYGRID_SOURCE
#else
#define OCCUPANCYGRID_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define OCCUPANCYGRID_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
class CdrSizeCalculator;
} // namespace fastcdr
} // namespace eprosima



namespace nav_msgs {
    namespace msg {
        /*!
         * @brief This class represents the structure OccupancyGrid defined by the user in the IDL file.
         * @ingroup OccupancyGrid
         */
        class OccupancyGrid
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport OccupancyGrid();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~OccupancyGrid();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object nav_msgs::msg::OccupancyGrid that will be copied.
             */
            eProsima_user_DllExport OccupancyGrid(
                    const OccupancyGrid& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object nav_msgs::msg::OccupancyGrid that will be copied.
             */
            eProsima_user_DllExport OccupancyGrid(
                    OccupancyGrid&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object nav_msgs::msg::OccupancyGrid that will be copied.
             */
            eProsima_user_DllExport OccupancyGrid& operator =(
                    const OccupancyGrid& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object nav_msgs::msg::OccupancyGrid that will be copied.
             */
            eProsima_user_DllExport OccupancyGrid& operator =(
                    OccupancyGrid&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x nav_msgs::msg::OccupancyGrid object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const OccupancyGrid& x) const;

            /*!
             * @brief Comparison operator.
             * @param x nav_msgs::msg::OccupancyGrid object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const OccupancyGrid& x) const;

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
             * @brief This function copies the value in member info
             * @param _info New value to be copied in member info
             */
            eProsima_user_DllExport void info(
                    const nav_msgs::msg::MapMetaData& _info);

            /*!
             * @brief This function moves the value in member info
             * @param _info New value to be moved in member info
             */
            eProsima_user_DllExport void info(
                    nav_msgs::msg::MapMetaData&& _info);

            /*!
             * @brief This function returns a constant reference to member info
             * @return Constant reference to member info
             */
            eProsima_user_DllExport const nav_msgs::msg::MapMetaData& info() const;

            /*!
             * @brief This function returns a reference to member info
             * @return Reference to member info
             */
            eProsima_user_DllExport nav_msgs::msg::MapMetaData& info();


            /*!
             * @brief This function copies the value in member data
             * @param _data New value to be copied in member data
             */
            eProsima_user_DllExport void data(
                    const std::vector<int8_t>& _data);

            /*!
             * @brief This function moves the value in member data
             * @param _data New value to be moved in member data
             */
            eProsima_user_DllExport void data(
                    std::vector<int8_t>&& _data);

            /*!
             * @brief This function returns a constant reference to member data
             * @return Constant reference to member data
             */
            eProsima_user_DllExport const std::vector<int8_t>& data() const;

            /*!
             * @brief This function returns a reference to member data
             * @return Reference to member data
             */
            eProsima_user_DllExport std::vector<int8_t>& data();

        private:

            std_msgs::msg::Header m_header;
            nav_msgs::msg::MapMetaData m_info;
            std::vector<int8_t> m_data;

        };
    } // namespace msg
} // namespace nav_msgs

#endif // _FAST_DDS_GENERATED_NAV_MSGS_MSG_OCCUPANCYGRID_H_

