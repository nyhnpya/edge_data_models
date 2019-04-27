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
#ifndef __NEC_PROCESS_HOIST_OBJECTIVE_PUBLISHER_H__
#define __NEC_PROCESS_HOIST_OBJECTIVE_PUBLISHER_H__

#include "publisher.h"
#include "hoist.h"
#include "hoistSupport.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

class CHoistObjectivePublisher : public TPublisher< nec::process::HoistObjective >
{
    public:
        CHoistObjectivePublisher();
        ~CHoistObjectivePublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        void SetId(CDdsUuid id);
        void SetObjectiveId(CDdsUuid objectiveId);
        void SetEstimatedDuration(const DataTypes::Time estimatedDuration);
        void SetTargetVelocity(const units::velocity::meters_per_second_t targetVelocity);
        void SetTargetPosition(const units::length::meter_t targetPosition);
};

#endif // __NEC_PROCESS_HOIST_OBJECTIVE_PUBLISHER_H__
