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
#ifndef __NEC_PROCESS_CIRCULATE_REQUEST_PUBLISHER_H__
#define __NEC_PROCESS_CIRCULATE_REQUEST_PUBLISHER_H__

#include "keyed_data_writer.h"
#include "circulate.h"
#include "circulateSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

/// @ingroup Request
/// @brief requested state change in the circulation system.
///
///
class CCirculateRequestPublisher : public TKeyedDataWriter< nec::process::CirculateRequest >
{
    public:
        CCirculateRequestPublisher();
        ~CCirculateRequestPublisher();
        
        bool Create(const std::string &publisher);
        bool PublishSample();
        
        /// id of requestor
        /// @param CDdsUuid id
        void SetId(CDdsUuid id);
        /// id of current objective
        /// @param CDdsUuid objectiveId
        void SetObjectiveId(CDdsUuid objectiveId);
        /// priority of the request
        /// @param DataTypes::Priority priority
        void SetPriority(const DataTypes::Priority priority);
        /// time requester needs the resource
        /// @param DataTypes::Time timeNeeded
        void SetTimeNeeded(const DataTypes::Time timeNeeded);
        /// estimated duration requestor needs the resource
        /// @param DataTypes::Time estimatedDuration
        void SetEstimatedDuration(const DataTypes::Time estimatedDuration);
        /// requetsed flow rate
        /// @param units::volume_velocity::cubic_meters_per_second_t targetFlowRate
        void SetTargetFlowRate(const units::volume_velocity::cubic_meters_per_second_t targetFlowRate);
};

#endif // __NEC_PROCESS_CIRCULATE_REQUEST_PUBLISHER_H__
