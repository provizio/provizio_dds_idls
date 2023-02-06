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
 * @file ImageMarker.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_VISUALIZATION_MSGS_MSG_IMAGEMARKER_H_
#define _FAST_DDS_GENERATED_VISUALIZATION_MSGS_MSG_IMAGEMARKER_H_

#include "geometry_msgs/msg/Point.h"
#include "std_msgs/msg/Header.h"
#include "std_msgs/msg/ColorRGBA.h"
#include "builtin_interfaces/msg/Duration.h"

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
#if defined(ImageMarker_SOURCE)
#define ImageMarker_DllAPI __declspec( dllexport )
#else
#define ImageMarker_DllAPI __declspec( dllimport )
#endif // ImageMarker_SOURCE
#else
#define ImageMarker_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define ImageMarker_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace visualization_msgs {
    namespace msg {
        namespace ImageMarker_Constants {
            const int32_t CIRCLE = 0;
            const int32_t LINE_STRIP = 1;
            const int32_t LINE_LIST = 2;
            const int32_t POLYGON = 3;
            const int32_t POINTS = 4;
            const int32_t ADD = 0;
            const int32_t REMOVE = 1;
        } // namespace ImageMarker_Constants
        /*!
         * @brief This class represents the structure ImageMarker defined by the user in the IDL file.
         * @ingroup IMAGEMARKER
         */
        class ImageMarker
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport ImageMarker();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~ImageMarker();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object visualization_msgs::msg::ImageMarker that will be copied.
             */
            eProsima_user_DllExport ImageMarker(
                    const ImageMarker& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object visualization_msgs::msg::ImageMarker that will be copied.
             */
            eProsima_user_DllExport ImageMarker(
                    ImageMarker&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object visualization_msgs::msg::ImageMarker that will be copied.
             */
            eProsima_user_DllExport ImageMarker& operator =(
                    const ImageMarker& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object visualization_msgs::msg::ImageMarker that will be copied.
             */
            eProsima_user_DllExport ImageMarker& operator =(
                    ImageMarker&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x visualization_msgs::msg::ImageMarker object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const ImageMarker& x) const;

            /*!
             * @brief Comparison operator.
             * @param x visualization_msgs::msg::ImageMarker object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const ImageMarker& x) const;

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
             * @brief This function copies the value in member ns
             * @param _ns New value to be copied in member ns
             */
            eProsima_user_DllExport void ns(
                    const std::string& _ns);

            /*!
             * @brief This function moves the value in member ns
             * @param _ns New value to be moved in member ns
             */
            eProsima_user_DllExport void ns(
                    std::string&& _ns);

            /*!
             * @brief This function returns a constant reference to member ns
             * @return Constant reference to member ns
             */
            eProsima_user_DllExport const std::string& ns() const;

            /*!
             * @brief This function returns a reference to member ns
             * @return Reference to member ns
             */
            eProsima_user_DllExport std::string& ns();
            /*!
             * @brief This function sets a value in member id
             * @param _id New value for member id
             */
            eProsima_user_DllExport void id(
                    int32_t _id);

            /*!
             * @brief This function returns the value of member id
             * @return Value of member id
             */
            eProsima_user_DllExport int32_t id() const;

            /*!
             * @brief This function returns a reference to member id
             * @return Reference to member id
             */
            eProsima_user_DllExport int32_t& id();

            /*!
             * @brief This function sets a value in member type
             * @param _type New value for member type
             */
            eProsima_user_DllExport void type(
                    int32_t _type);

            /*!
             * @brief This function returns the value of member type
             * @return Value of member type
             */
            eProsima_user_DllExport int32_t type() const;

            /*!
             * @brief This function returns a reference to member type
             * @return Reference to member type
             */
            eProsima_user_DllExport int32_t& type();

            /*!
             * @brief This function sets a value in member action
             * @param _action New value for member action
             */
            eProsima_user_DllExport void action(
                    int32_t _action);

            /*!
             * @brief This function returns the value of member action
             * @return Value of member action
             */
            eProsima_user_DllExport int32_t action() const;

            /*!
             * @brief This function returns a reference to member action
             * @return Reference to member action
             */
            eProsima_user_DllExport int32_t& action();

            /*!
             * @brief This function copies the value in member position
             * @param _position New value to be copied in member position
             */
            eProsima_user_DllExport void position(
                    const geometry_msgs::msg::Point& _position);

            /*!
             * @brief This function moves the value in member position
             * @param _position New value to be moved in member position
             */
            eProsima_user_DllExport void position(
                    geometry_msgs::msg::Point&& _position);

            /*!
             * @brief This function returns a constant reference to member position
             * @return Constant reference to member position
             */
            eProsima_user_DllExport const geometry_msgs::msg::Point& position() const;

            /*!
             * @brief This function returns a reference to member position
             * @return Reference to member position
             */
            eProsima_user_DllExport geometry_msgs::msg::Point& position();
            /*!
             * @brief This function sets a value in member scale
             * @param _scale New value for member scale
             */
            eProsima_user_DllExport void scale(
                    float _scale);

            /*!
             * @brief This function returns the value of member scale
             * @return Value of member scale
             */
            eProsima_user_DllExport float scale() const;

            /*!
             * @brief This function returns a reference to member scale
             * @return Reference to member scale
             */
            eProsima_user_DllExport float& scale();

            /*!
             * @brief This function copies the value in member outline_color
             * @param _outline_color New value to be copied in member outline_color
             */
            eProsima_user_DllExport void outline_color(
                    const std_msgs::msg::ColorRGBA& _outline_color);

            /*!
             * @brief This function moves the value in member outline_color
             * @param _outline_color New value to be moved in member outline_color
             */
            eProsima_user_DllExport void outline_color(
                    std_msgs::msg::ColorRGBA&& _outline_color);

            /*!
             * @brief This function returns a constant reference to member outline_color
             * @return Constant reference to member outline_color
             */
            eProsima_user_DllExport const std_msgs::msg::ColorRGBA& outline_color() const;

            /*!
             * @brief This function returns a reference to member outline_color
             * @return Reference to member outline_color
             */
            eProsima_user_DllExport std_msgs::msg::ColorRGBA& outline_color();
            /*!
             * @brief This function sets a value in member filled
             * @param _filled New value for member filled
             */
            eProsima_user_DllExport void filled(
                    uint8_t _filled);

            /*!
             * @brief This function returns the value of member filled
             * @return Value of member filled
             */
            eProsima_user_DllExport uint8_t filled() const;

            /*!
             * @brief This function returns a reference to member filled
             * @return Reference to member filled
             */
            eProsima_user_DllExport uint8_t& filled();

            /*!
             * @brief This function copies the value in member fill_color
             * @param _fill_color New value to be copied in member fill_color
             */
            eProsima_user_DllExport void fill_color(
                    const std_msgs::msg::ColorRGBA& _fill_color);

            /*!
             * @brief This function moves the value in member fill_color
             * @param _fill_color New value to be moved in member fill_color
             */
            eProsima_user_DllExport void fill_color(
                    std_msgs::msg::ColorRGBA&& _fill_color);

            /*!
             * @brief This function returns a constant reference to member fill_color
             * @return Constant reference to member fill_color
             */
            eProsima_user_DllExport const std_msgs::msg::ColorRGBA& fill_color() const;

            /*!
             * @brief This function returns a reference to member fill_color
             * @return Reference to member fill_color
             */
            eProsima_user_DllExport std_msgs::msg::ColorRGBA& fill_color();
            /*!
             * @brief This function copies the value in member lifetime
             * @param _lifetime New value to be copied in member lifetime
             */
            eProsima_user_DllExport void lifetime(
                    const builtin_interfaces::msg::Duration& _lifetime);

            /*!
             * @brief This function moves the value in member lifetime
             * @param _lifetime New value to be moved in member lifetime
             */
            eProsima_user_DllExport void lifetime(
                    builtin_interfaces::msg::Duration&& _lifetime);

            /*!
             * @brief This function returns a constant reference to member lifetime
             * @return Constant reference to member lifetime
             */
            eProsima_user_DllExport const builtin_interfaces::msg::Duration& lifetime() const;

            /*!
             * @brief This function returns a reference to member lifetime
             * @return Reference to member lifetime
             */
            eProsima_user_DllExport builtin_interfaces::msg::Duration& lifetime();
            /*!
             * @brief This function copies the value in member points
             * @param _points New value to be copied in member points
             */
            eProsima_user_DllExport void points(
                    const std::vector<geometry_msgs::msg::Point>& _points);

            /*!
             * @brief This function moves the value in member points
             * @param _points New value to be moved in member points
             */
            eProsima_user_DllExport void points(
                    std::vector<geometry_msgs::msg::Point>&& _points);

            /*!
             * @brief This function returns a constant reference to member points
             * @return Constant reference to member points
             */
            eProsima_user_DllExport const std::vector<geometry_msgs::msg::Point>& points() const;

            /*!
             * @brief This function returns a reference to member points
             * @return Reference to member points
             */
            eProsima_user_DllExport std::vector<geometry_msgs::msg::Point>& points();
            /*!
             * @brief This function copies the value in member outline_colors
             * @param _outline_colors New value to be copied in member outline_colors
             */
            eProsima_user_DllExport void outline_colors(
                    const std::vector<std_msgs::msg::ColorRGBA>& _outline_colors);

            /*!
             * @brief This function moves the value in member outline_colors
             * @param _outline_colors New value to be moved in member outline_colors
             */
            eProsima_user_DllExport void outline_colors(
                    std::vector<std_msgs::msg::ColorRGBA>&& _outline_colors);

            /*!
             * @brief This function returns a constant reference to member outline_colors
             * @return Constant reference to member outline_colors
             */
            eProsima_user_DllExport const std::vector<std_msgs::msg::ColorRGBA>& outline_colors() const;

            /*!
             * @brief This function returns a reference to member outline_colors
             * @return Reference to member outline_colors
             */
            eProsima_user_DllExport std::vector<std_msgs::msg::ColorRGBA>& outline_colors();

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
                    const visualization_msgs::msg::ImageMarker& data,
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

            std_msgs::msg::Header m_header;
            std::string m_ns;
            int32_t m_id;
            int32_t m_type;
            int32_t m_action;
            geometry_msgs::msg::Point m_position;
            float m_scale;
            std_msgs::msg::ColorRGBA m_outline_color;
            uint8_t m_filled;
            std_msgs::msg::ColorRGBA m_fill_color;
            builtin_interfaces::msg::Duration m_lifetime;
            std::vector<geometry_msgs::msg::Point> m_points;
            std::vector<std_msgs::msg::ColorRGBA> m_outline_colors;
        };
    } // namespace msg
} // namespace visualization_msgs

#endif // _FAST_DDS_GENERATED_VISUALIZATION_MSGS_MSG_IMAGEMARKER_H_