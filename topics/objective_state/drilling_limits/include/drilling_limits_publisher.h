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
#ifndef __PROCESS_PLAN_DRILLING_LIMITS_PUBLISHER_H__
#define __PROCESS_PLAN_DRILLING_LIMITS_PUBLISHER_H__

#include "publisher.h"
#include "drilling_limits.h"
#include "drilling_limitsSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

class CDrillingLimitsPublisher : public TPublisher< process::plan::DrillingLimits >
{
    public:
        CDrillingLimitsPublisher();
        ~CDrillingLimitsPublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        void SetId(CDdsUuid id);
        void SetStartDepth(const units::length::meter_t startDepth);
        void SetEndDepth(const units::length::meter_t endDepth);
        void SetRopMin(const units::velocity::meters_per_second_t ropMin);
        void SetRopMax(const units::velocity::meters_per_second_t ropMax);
        void SetWobMin(const units::force::newton_t wobMin);
        void SetWobMax(const units::force::newton_t wobMax);
        void SetDiffPMin(const units::pressure::pascal_t diffPMin);
        void SetDiffPMax(const units::pressure::pascal_t diffPMax);
        void SetTorqueMin(const units::torque::newton_meter_t torqueMin);
        void SetTorqueMax(const units::torque::newton_meter_t torqueMax);
        void SetRotateMin(const units::angular_velocity::radians_per_second_t rotateMin);
        void SetRotateMax(const units::angular_velocity::radians_per_second_t rotateMax);
};

#endif // __PROCESS_PLAN_DRILLING_LIMITS_PUBLISHER_H__
