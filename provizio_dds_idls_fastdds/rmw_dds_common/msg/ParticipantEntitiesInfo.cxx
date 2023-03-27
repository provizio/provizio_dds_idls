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
 * @file ParticipantEntitiesInfo.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "ParticipantEntitiesInfo.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define rmw_dds_common_msg_NodeEntitiesInfo_max_cdr_typesize 5536ULL;
#define rmw_dds_common_msg_ParticipantEntitiesInfo_max_cdr_typesize 553632ULL;

#define rmw_dds_common_msg_Gid_max_cdr_typesize 25ULL;
#define rmw_dds_common_msg_NodeEntitiesInfo_max_key_cdr_typesize 0ULL;
#define rmw_dds_common_msg_ParticipantEntitiesInfo_max_key_cdr_typesize 0ULL;

#define rmw_dds_common_msg_Gid_max_key_cdr_typesize 0ULL;

rmw_dds_common::msg::ParticipantEntitiesInfo::ParticipantEntitiesInfo()
{
    // rmw_dds_common::msg::Gid m_gid

    // sequence<rmw_dds_common::msg::NodeEntitiesInfo> m_node_entities_info_seq


}

rmw_dds_common::msg::ParticipantEntitiesInfo::~ParticipantEntitiesInfo()
{


}

rmw_dds_common::msg::ParticipantEntitiesInfo::ParticipantEntitiesInfo(
        const ParticipantEntitiesInfo& x)
{
    m_gid = x.m_gid;
    m_node_entities_info_seq = x.m_node_entities_info_seq;
}

rmw_dds_common::msg::ParticipantEntitiesInfo::ParticipantEntitiesInfo(
        ParticipantEntitiesInfo&& x) noexcept 
{
    m_gid = std::move(x.m_gid);
    m_node_entities_info_seq = std::move(x.m_node_entities_info_seq);
}

rmw_dds_common::msg::ParticipantEntitiesInfo& rmw_dds_common::msg::ParticipantEntitiesInfo::operator =(
        const ParticipantEntitiesInfo& x)
{

    m_gid = x.m_gid;
    m_node_entities_info_seq = x.m_node_entities_info_seq;

    return *this;
}

rmw_dds_common::msg::ParticipantEntitiesInfo& rmw_dds_common::msg::ParticipantEntitiesInfo::operator =(
        ParticipantEntitiesInfo&& x) noexcept
{

    m_gid = std::move(x.m_gid);
    m_node_entities_info_seq = std::move(x.m_node_entities_info_seq);

    return *this;
}

bool rmw_dds_common::msg::ParticipantEntitiesInfo::operator ==(
        const ParticipantEntitiesInfo& x) const
{

    return (m_gid == x.m_gid && m_node_entities_info_seq == x.m_node_entities_info_seq);
}

bool rmw_dds_common::msg::ParticipantEntitiesInfo::operator !=(
        const ParticipantEntitiesInfo& x) const
{
    return !(*this == x);
}

size_t rmw_dds_common::msg::ParticipantEntitiesInfo::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return rmw_dds_common_msg_ParticipantEntitiesInfo_max_cdr_typesize;
}

size_t rmw_dds_common::msg::ParticipantEntitiesInfo::getCdrSerializedSize(
        const rmw_dds_common::msg::ParticipantEntitiesInfo& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += rmw_dds_common::msg::Gid::getCdrSerializedSize(data.gid(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.node_entities_info_seq().size(); ++a)
    {
        current_alignment += rmw_dds_common::msg::NodeEntitiesInfo::getCdrSerializedSize(data.node_entities_info_seq().at(a), current_alignment);}


    return current_alignment - initial_alignment;
}

void rmw_dds_common::msg::ParticipantEntitiesInfo::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_gid;
    scdr << m_node_entities_info_seq;

}

void rmw_dds_common::msg::ParticipantEntitiesInfo::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_gid;
    dcdr >> m_node_entities_info_seq;
}

/*!
 * @brief This function copies the value in member gid
 * @param _gid New value to be copied in member gid
 */
void rmw_dds_common::msg::ParticipantEntitiesInfo::gid(
        const rmw_dds_common::msg::Gid& _gid)
{
    m_gid = _gid;
}

/*!
 * @brief This function moves the value in member gid
 * @param _gid New value to be moved in member gid
 */
void rmw_dds_common::msg::ParticipantEntitiesInfo::gid(
        rmw_dds_common::msg::Gid&& _gid)
{
    m_gid = std::move(_gid);
}

/*!
 * @brief This function returns a constant reference to member gid
 * @return Constant reference to member gid
 */
const rmw_dds_common::msg::Gid& rmw_dds_common::msg::ParticipantEntitiesInfo::gid() const
{
    return m_gid;
}

/*!
 * @brief This function returns a reference to member gid
 * @return Reference to member gid
 */
rmw_dds_common::msg::Gid& rmw_dds_common::msg::ParticipantEntitiesInfo::gid()
{
    return m_gid;
}
/*!
 * @brief This function copies the value in member node_entities_info_seq
 * @param _node_entities_info_seq New value to be copied in member node_entities_info_seq
 */
void rmw_dds_common::msg::ParticipantEntitiesInfo::node_entities_info_seq(
        const std::vector<rmw_dds_common::msg::NodeEntitiesInfo>& _node_entities_info_seq)
{
    m_node_entities_info_seq = _node_entities_info_seq;
}

/*!
 * @brief This function moves the value in member node_entities_info_seq
 * @param _node_entities_info_seq New value to be moved in member node_entities_info_seq
 */
void rmw_dds_common::msg::ParticipantEntitiesInfo::node_entities_info_seq(
        std::vector<rmw_dds_common::msg::NodeEntitiesInfo>&& _node_entities_info_seq)
{
    m_node_entities_info_seq = std::move(_node_entities_info_seq);
}

/*!
 * @brief This function returns a constant reference to member node_entities_info_seq
 * @return Constant reference to member node_entities_info_seq
 */
const std::vector<rmw_dds_common::msg::NodeEntitiesInfo>& rmw_dds_common::msg::ParticipantEntitiesInfo::node_entities_info_seq() const
{
    return m_node_entities_info_seq;
}

/*!
 * @brief This function returns a reference to member node_entities_info_seq
 * @return Reference to member node_entities_info_seq
 */
std::vector<rmw_dds_common::msg::NodeEntitiesInfo>& rmw_dds_common::msg::ParticipantEntitiesInfo::node_entities_info_seq()
{
    return m_node_entities_info_seq;
}


size_t rmw_dds_common::msg::ParticipantEntitiesInfo::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return rmw_dds_common_msg_ParticipantEntitiesInfo_max_key_cdr_typesize;
}

bool rmw_dds_common::msg::ParticipantEntitiesInfo::isKeyDefined()
{
    return false;
}

void rmw_dds_common::msg::ParticipantEntitiesInfo::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

