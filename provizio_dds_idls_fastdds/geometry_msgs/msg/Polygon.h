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
 * @file Polygon.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_POLYGON_H_
#define _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_POLYGON_H_

#include <array>
#include <bitset>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

#include <fastcdr/cdr/fixed_size_string.hpp>
#include <fastcdr/xcdr/optional.hpp>

#include "Point32.h"


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
#if defined(POLYGON_SOURCE)
#define POLYGON_DllAPI __declspec( dllexport )
#else
#define POLYGON_DllAPI __declspec( dllimport )
#endif // POLYGON_SOURCE
#else
#define POLYGON_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define POLYGON_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
class CdrSizeCalculator;
} // namespace fastcdr
} // namespace eprosima



namespace geometry_msgs {
    namespace msg {
        /*!
         * @brief This class represents the structure Polygon defined by the user in the IDL file.
         * @ingroup Polygon
         */
        class Polygon
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport Polygon();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~Polygon();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object geometry_msgs::msg::Polygon that will be copied.
             */
            eProsima_user_DllExport Polygon(
                    const Polygon& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object geometry_msgs::msg::Polygon that will be copied.
             */
            eProsima_user_DllExport Polygon(
                    Polygon&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object geometry_msgs::msg::Polygon that will be copied.
             */
            eProsima_user_DllExport Polygon& operator =(
                    const Polygon& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object geometry_msgs::msg::Polygon that will be copied.
             */
            eProsima_user_DllExport Polygon& operator =(
                    Polygon&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x geometry_msgs::msg::Polygon object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const Polygon& x) const;

            /*!
             * @brief Comparison operator.
             * @param x geometry_msgs::msg::Polygon object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const Polygon& x) const;

            /*!
             * @brief This function copies the value in member points
             * @param _points New value to be copied in member points
             */
            eProsima_user_DllExport void points(
                    const std::vector<geometry_msgs::msg::Point32>& _points);

            /*!
             * @brief This function moves the value in member points
             * @param _points New value to be moved in member points
             */
            eProsima_user_DllExport void points(
                    std::vector<geometry_msgs::msg::Point32>&& _points);

            /*!
             * @brief This function returns a constant reference to member points
             * @return Constant reference to member points
             */
            eProsima_user_DllExport const std::vector<geometry_msgs::msg::Point32>& points() const;

            /*!
             * @brief This function returns a reference to member points
             * @return Reference to member points
             */
            eProsima_user_DllExport std::vector<geometry_msgs::msg::Point32>& points();

        private:

            std::vector<geometry_msgs::msg::Point32> m_points;

        };
    } // namespace msg
} // namespace geometry_msgs

#endif // _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_POLYGON_H_

