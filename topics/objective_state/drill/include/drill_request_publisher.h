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
#ifndef __DRILL_REQUEST_PUBLISHER_H__
#define __DRILL_REQUEST_PUBLISHER_H__

#include "publisher.h"
#include "drill.h"
#include "drillSupport.h"

#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::length;
using namespace units::velocity;
using namespace units::force;
using namespace units::torque;
using namespace units::pressure;

class CDrillRequestPublisher : public TPublisher< nec::process::DrillRequest >
{
 public:
    CDrillRequestPublisher();
    ~CDrillRequestPublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    // Topic getters
    void SetObjectiveId(const DataTypes::Uuid objectiveId);
    void SetPriority(DataTypes::Priority priority);
    void SetTimeNeeded(DataTypes::Time timeNeeded);
    void SetDuration(DataTypes::Time duration);
    void SetRopTarget(const meters_per_second_t ropTarget);
    void SetWobTarget(const newton_t wobTarget);
    void SetDiffPressureTarget(const pascal_t diffPressureTarget);
    void SetTorqueTarget(const newton_meter_t torqueTarget);
    void SetRopMode(const bool ropMode);
    void SetWobMode(const bool wobMode);
    void SetDiffPressureMode(const bool diffPressureMode);
    void SetTorqueMode(const bool torqueMode);
};

#endif // __DRILL_REQUEST_PUBLISHER_H__
