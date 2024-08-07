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
 * @file GridCells.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_NAV_MSGS_MSG_GRIDCELLS_H_
#define _FAST_DDS_GENERATED_NAV_MSGS_MSG_GRIDCELLS_H_

#include <array>
#include <bitset>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

#include <fastcdr/cdr/fixed_size_string.hpp>
#include <fastcdr/xcdr/optional.hpp>

#include "geometry_msgs/msg/Point.h"
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
#if defined(GRIDCELLS_SOURCE)
#define GRIDCELLS_DllAPI __declspec( dllexport )
#else
#define GRIDCELLS_DllAPI __declspec( dllimport )
#endif // GRIDCELLS_SOURCE
#else
#define GRIDCELLS_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define GRIDCELLS_DllAPI
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
         * @brief This class represents the structure GridCells defined by the user in the IDL file.
         * @ingroup GridCells
         */
        class GridCells
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport GridCells();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~GridCells();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object nav_msgs::msg::GridCells that will be copied.
             */
            eProsima_user_DllExport GridCells(
                    const GridCells& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object nav_msgs::msg::GridCells that will be copied.
             */
            eProsima_user_DllExport GridCells(
                    GridCells&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object nav_msgs::msg::GridCells that will be copied.
             */
            eProsima_user_DllExport GridCells& operator =(
                    const GridCells& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object nav_msgs::msg::GridCells that will be copied.
             */
            eProsima_user_DllExport GridCells& operator =(
                    GridCells&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x nav_msgs::msg::GridCells object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const GridCells& x) const;

            /*!
             * @brief Comparison operator.
             * @param x nav_msgs::msg::GridCells object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const GridCells& x) const;

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
             * @brief This function sets a value in member cell_width
             * @param _cell_width New value for member cell_width
             */
            eProsima_user_DllExport void cell_width(
                    float _cell_width);

            /*!
             * @brief This function returns the value of member cell_width
             * @return Value of member cell_width
             */
            eProsima_user_DllExport float cell_width() const;

            /*!
             * @brief This function returns a reference to member cell_width
             * @return Reference to member cell_width
             */
            eProsima_user_DllExport float& cell_width();


            /*!
             * @brief This function sets a value in member cell_height
             * @param _cell_height New value for member cell_height
             */
            eProsima_user_DllExport void cell_height(
                    float _cell_height);

            /*!
             * @brief This function returns the value of member cell_height
             * @return Value of member cell_height
             */
            eProsima_user_DllExport float cell_height() const;

            /*!
             * @brief This function returns a reference to member cell_height
             * @return Reference to member cell_height
             */
            eProsima_user_DllExport float& cell_height();


            /*!
             * @brief This function copies the value in member cells
             * @param _cells New value to be copied in member cells
             */
            eProsima_user_DllExport void cells(
                    const std::vector<geometry_msgs::msg::Point>& _cells);

            /*!
             * @brief This function moves the value in member cells
             * @param _cells New value to be moved in member cells
             */
            eProsima_user_DllExport void cells(
                    std::vector<geometry_msgs::msg::Point>&& _cells);

            /*!
             * @brief This function returns a constant reference to member cells
             * @return Constant reference to member cells
             */
            eProsima_user_DllExport const std::vector<geometry_msgs::msg::Point>& cells() const;

            /*!
             * @brief This function returns a reference to member cells
             * @return Reference to member cells
             */
            eProsima_user_DllExport std::vector<geometry_msgs::msg::Point>& cells();

        private:

            std_msgs::msg::Header m_header;
            float m_cell_width{0.0};
            float m_cell_height{0.0};
            std::vector<geometry_msgs::msg::Point> m_cells;

        };
    } // namespace msg
} // namespace nav_msgs

#endif // _FAST_DDS_GENERATED_NAV_MSGS_MSG_GRIDCELLS_H_

