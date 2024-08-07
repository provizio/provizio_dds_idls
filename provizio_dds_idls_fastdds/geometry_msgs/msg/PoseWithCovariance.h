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
 * @file PoseWithCovariance.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_POSEWITHCOVARIANCE_H_
#define _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_POSEWITHCOVARIANCE_H_

#include <array>
#include <bitset>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

#include <fastcdr/cdr/fixed_size_string.hpp>
#include <fastcdr/xcdr/optional.hpp>

#include "Pose.h"


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
#if defined(POSEWITHCOVARIANCE_SOURCE)
#define POSEWITHCOVARIANCE_DllAPI __declspec( dllexport )
#else
#define POSEWITHCOVARIANCE_DllAPI __declspec( dllimport )
#endif // POSEWITHCOVARIANCE_SOURCE
#else
#define POSEWITHCOVARIANCE_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define POSEWITHCOVARIANCE_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
class CdrSizeCalculator;
} // namespace fastcdr
} // namespace eprosima



namespace geometry_msgs {
    namespace msg {
        typedef std::array<double, 36> double__36;

        /*!
         * @brief This class represents the structure PoseWithCovariance defined by the user in the IDL file.
         * @ingroup PoseWithCovariance
         */
        class PoseWithCovariance
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport PoseWithCovariance();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~PoseWithCovariance();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object geometry_msgs::msg::PoseWithCovariance that will be copied.
             */
            eProsima_user_DllExport PoseWithCovariance(
                    const PoseWithCovariance& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object geometry_msgs::msg::PoseWithCovariance that will be copied.
             */
            eProsima_user_DllExport PoseWithCovariance(
                    PoseWithCovariance&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object geometry_msgs::msg::PoseWithCovariance that will be copied.
             */
            eProsima_user_DllExport PoseWithCovariance& operator =(
                    const PoseWithCovariance& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object geometry_msgs::msg::PoseWithCovariance that will be copied.
             */
            eProsima_user_DllExport PoseWithCovariance& operator =(
                    PoseWithCovariance&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x geometry_msgs::msg::PoseWithCovariance object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const PoseWithCovariance& x) const;

            /*!
             * @brief Comparison operator.
             * @param x geometry_msgs::msg::PoseWithCovariance object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const PoseWithCovariance& x) const;

            /*!
             * @brief This function copies the value in member pose
             * @param _pose New value to be copied in member pose
             */
            eProsima_user_DllExport void pose(
                    const geometry_msgs::msg::Pose& _pose);

            /*!
             * @brief This function moves the value in member pose
             * @param _pose New value to be moved in member pose
             */
            eProsima_user_DllExport void pose(
                    geometry_msgs::msg::Pose&& _pose);

            /*!
             * @brief This function returns a constant reference to member pose
             * @return Constant reference to member pose
             */
            eProsima_user_DllExport const geometry_msgs::msg::Pose& pose() const;

            /*!
             * @brief This function returns a reference to member pose
             * @return Reference to member pose
             */
            eProsima_user_DllExport geometry_msgs::msg::Pose& pose();


            /*!
             * @brief This function copies the value in member covariance
             * @param _covariance New value to be copied in member covariance
             */
            eProsima_user_DllExport void covariance(
                    const geometry_msgs::msg::double__36& _covariance);

            /*!
             * @brief This function moves the value in member covariance
             * @param _covariance New value to be moved in member covariance
             */
            eProsima_user_DllExport void covariance(
                    geometry_msgs::msg::double__36&& _covariance);

            /*!
             * @brief This function returns a constant reference to member covariance
             * @return Constant reference to member covariance
             */
            eProsima_user_DllExport const geometry_msgs::msg::double__36& covariance() const;

            /*!
             * @brief This function returns a reference to member covariance
             * @return Reference to member covariance
             */
            eProsima_user_DllExport geometry_msgs::msg::double__36& covariance();

        private:

            geometry_msgs::msg::Pose m_pose;
            geometry_msgs::msg::double__36 m_covariance{0.0};

        };
    } // namespace msg
} // namespace geometry_msgs

#endif // _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_POSEWITHCOVARIANCE_H_

