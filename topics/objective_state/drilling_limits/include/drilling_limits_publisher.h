/*
 *  Copyright (c) 2017 Ensign Energy Incorporated
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
#ifndef __DRILLING_LIMITS_PUBLISHER_H__
#define __DRILLING_LIMITS_PUBLISHER_H__

#include "publisher.h"
#include "drilling_limits.h"
#include "drilling_limitsSupport.h"

#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::length;
using namespace units::angular_velocity;
using namespace units::velocity;
using namespace units::force;
using namespace units::torque;
using namespace units::pressure;

class CDrillingLimitsPublisher : public TPublisher< process::plan::DrillingLimits >
{
 public:
    CDrillingLimitsPublisher();
    ~CDrillingLimitsPublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    // Topic setters
    void SetId(DataTypes::Uuid id);
    void SetStartDepth(meter_t depth);
    void SetEndDepth(meter_t depth);
    void SetRopMin(meters_per_second_t ropMin);
    void SetRopMax(meters_per_second_t ropMax);
    void SetWobMin(newton_t wobMin);
    void SetWobMax(newton_t wobMax);
    void SetDifferentialPressureMin(pascal_t diffPMin);
    void SetDifferentialPressureMax(pascal_t diffPMax);
    void SetTorqueMin(newton_meter_t torqueMin);
    void SetTorqueMax(newton_meter_t torqueMax);
    void SetRotateMin(radians_per_second_t rotateMin);
    void SetRotateMax(radians_per_second_t rotateMax);
};

#endif // __DRILLING_LIMITS_PUBLISHER_H__
