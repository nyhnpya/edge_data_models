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
#ifndef __NEC_PROCESS_CIRCULATE_STATE_PUBLISHER_H__
#define __NEC_PROCESS_CIRCULATE_STATE_PUBLISHER_H__

#include "publisher.h"
#include "circulate.h"
#include "circulateSupport.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

class CCirculateStatePublisher : public TPublisher< nec::process::CirculateState >
{
    public:
        CCirculateStatePublisher();
        ~CCirculateStatePublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        void SetId(CDdsUuid id);
        void SetObjectiveId(CDdsUuid objectiveId);
        void SetTimestamp(const DataTypes::Time timestamp);
        void SetStatus(const DataTypes::Status status);
        void SetActualFlowRate(const units::volume_velocity::cubic_meters_per_second_t actualFlowRate);
        void SetActualStandpipePressure(const units::pressure::pascal_t actualStandpipePressure);
        void SetMinFlowRate(const units::volume_velocity::cubic_meters_per_second_t minFlowRate);
        void SetMaxFlowRate(const units::volume_velocity::cubic_meters_per_second_t maxFlowRate);
        void SetMinStandpipePressure(const units::pressure::pascal_t minStandpipePressure);
        void SetMaxStandpipePressure(const units::pressure::pascal_t maxStandpipePressure);
        void SetTargetFlowRate//(const units::volume_velocity::cubic_meters_per_second_t targetFlowRate//);
};

#endif // __NEC_PROCESS_CIRCULATE_STATE_PUBLISHER_H__
