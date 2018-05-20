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
#ifndef __DRILLING_STATE_PUBLISHER_H__
#define __DRILLING_STATE_PUBLISHER_H__

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

class CDrillStatePublisher : public TPublisher< nec::process::DrillingState >
{
 public:
    CDrillStatePublisher();
    ~CDrillStatePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    // Topic setters
    void SetObjectiveId(DataTypes::Uuid pObjectiveId);
    void SetTimestamp(const DataTypes::Time timestamp);
    void SetRopActual(const meters_per_second_t ropActual);
    void SetWobActual(const newton_t wobActual);
    void SetDifferentialPressureActual(const pascal_t differentialPressureActual);
    void SetTorqueActual(const newton_meter_t torqueActual);
    void SetRopLimit(const meters_per_second_t ropLimit);
    void SetWobLimit(const newton_t wobLimit);
    void SetDifferentialPressureLimit(const pascal_t differentialPressureLimit);
    void SetTorqueLimit(const newton_meter_t torqueLimit);
    void SetRopMode(const bool ropMode);
    void SetWobMode(const bool wobMode);
    void SetDifferentialPressureMode(const bool differentialPressureMode);
    void SetTorqueMode(const bool torqueMode);
    void SetRopTarget(const meters_per_second_t ropTarget);
    void SetWobTarget(const newton_t wobTarget);
    void SetDifferentialPressureTarget(const pascal_t differentialPressureTarget);
    void SetTorqueTarget(const newton_meter_t torqueTarget);
    void SetBitOnBottom(const bool bitOnBottom);
};

#endif // __DRILLING_STATE_PUBLISHER_H__
