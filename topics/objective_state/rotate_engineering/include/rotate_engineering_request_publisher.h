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
#ifndef __NEC_ENGINEERING_ROTATE_ENGINEERING_REQUEST_PUBLISHER_H__
#define __NEC_ENGINEERING_ROTATE_ENGINEERING_REQUEST_PUBLISHER_H__

#include "publisher.h"
#include "rotate_engineering.h"
#include "rotate_engineeringSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

class CRotateEngineeringRequestPublisher : public TPublisher< nec::engineering::RotateEngineeringRequest >
{
    public:
        CRotateEngineeringRequestPublisher();
        ~CRotateEngineeringRequestPublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        void SetId(CDdsUuid id);
        void SetPriority(const DataTypes::Priority priority);
        void SetTimeNeeded(const DataTypes::Time timeNeeded);
        void SetDuration(const DataTypes::Time duration);
        void SetTargetRate(const units::angular_velocity::radians_per_second_t targetRate);
        void SetTorque(const units::torque::newton_meter_t torque);
};

#endif // __NEC_ENGINEERING_ROTATE_ENGINEERING_REQUEST_PUBLISHER_H__
