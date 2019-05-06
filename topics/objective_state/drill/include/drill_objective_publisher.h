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
#ifndef __NEC_PROCESS_DRILL_OBJECTIVE_PUBLISHER_H__
#define __NEC_PROCESS_DRILL_OBJECTIVE_PUBLISHER_H__

#include "publisher.h"
#include "drill.h"
#include "drillSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

class CDrillObjectivePublisher : public TPublisher< nec::process::DrillObjective >
{
    public:
        CDrillObjectivePublisher();
        ~CDrillObjectivePublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        void SetId(CDdsUuid id);
        void SetObjectiveId(CDdsUuid objectiveId);
        void SetEstimatedDuration(const DataTypes::Time estimatedDuration);
        void SetRopTarget(const units::velocity::meters_per_second_t ropTarget);
        void SetWobTarget(const units::force::newton_t wobTarget);
        void SetDiffPressureTarget(const units::pressure::pascal_t diffPressureTarget);
        void SetTorqueTarget(const units::torque::newton_meter_t torqueTarget);
        void SetRopMode(const bool ropMode);
        void SetWobMode(const bool wobMode);
        void SetDiffPressureMode(const bool diffPressureMode);
        void SetTorqueMode(const bool torqueMode);
};

#endif // __NEC_PROCESS_DRILL_OBJECTIVE_PUBLISHER_H__
