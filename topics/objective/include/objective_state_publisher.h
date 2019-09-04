/*
 *  Copyright (c) 2019 Ensign Energy Incorporated
 *  All Rights Reserved.
 *
 * NOTICE:  All information contained herein is, and remains
 * the property of Ensign Energy Incorporated and its suppliers,
 * if any.  The intellectual and technical concepts contained
 * herein are proprietary to Ensign Energy Incorporated
 * and its suppliers and may be covered by U.S. and Foreign Patents,
 * patents in process, and are protected by trade secret or copyright law.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from Ensign Energy Incorporated.
 */
#ifndef __PROCESS_PLAN_OBJECTIVE_STATE_PUBLISHER_H__
#define __PROCESS_PLAN_OBJECTIVE_STATE_PUBLISHER_H__

#include "publisher.h"
#include "objective.h"
#include "objectiveSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

/// @ingroup Actual
/// @brief current state of rotation system.
///
///
class CObjectiveStatePublisher : public TPublisher< process::plan::ObjectiveState >
{
    public:
        CObjectiveStatePublisher();
        ~CObjectiveStatePublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        /// id of requestor
        /// @param CDdsUuid id
        void SetId(CDdsUuid id);
        /// id of parent objective
        /// @param CDdsUuid parentId
        void SetParentId(CDdsUuid parentId);
        /// timestamp when the data was published
        /// @param DataTypes::Time timestamp
        void SetTimestamp(const DataTypes::Time timestamp);
        /// current objective
        /// @param DataTypes::Objective objective
        void SetObjective(const DataTypes::Objective objective);
};

#endif // __PROCESS_PLAN_OBJECTIVE_STATE_PUBLISHER_H__
