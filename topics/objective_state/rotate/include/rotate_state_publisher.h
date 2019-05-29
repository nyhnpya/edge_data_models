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
#ifndef __NEC_PROCESS_ROTATE_STATE_PUBLISHER_H__
#define __NEC_PROCESS_ROTATE_STATE_PUBLISHER_H__

#include "publisher.h"
#include "rotate.h"
#include "rotateSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

class CRotateStatePublisher : public TPublisher< nec::process::RotateState >
{
    public:
        CRotateStatePublisher();
        ~CRotateStatePublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        void SetId(CDdsUuid id);
        void SetObjectiveId(CDdsUuid objectiveId);
        void SetTimestamp(const DataTypes::Time timestamp);
        void SetStatus(const DataTypes::Status status);
        void SetActualRate(const units::angular_velocity::radians_per_second_t actualRate);
        void SetMinRate(const units::angular_velocity::radians_per_second_t minRate);
        void SetMaxRate(const units::angular_velocity::radians_per_second_t maxRate);
        void SetTargetRate(const units::angular_velocity::radians_per_second_t targetRate);
};

#endif // __NEC_PROCESS_ROTATE_STATE_PUBLISHER_H__
