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
#ifndef __HOIST_STATE_PUBLISHER_H__ 
#define __HOIST_STATE_PUBLISHER_H__ 

#include "publisher.h"
#include "hoist.h"
#include "hoistSupport.h"

#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::length;
using namespace units::force;
using namespace units::velocity;

class CHoistStatePublisher : public TPublisher< nec::process::HoistState >
{
 public:
    CHoistStatePublisher();
    ~CHoistStatePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    void SetActualPosition(meter_t actualPosition);
    void SetActualVelocity(meters_per_second_t actualVelocity);
    void SetActualHookload(newton_t actualHookload);
    void SetMaxHoistPosition(meter_t maxHoistPosition);
    void SetMaxHoistVelocity(meters_per_second_t maxHoistVelocity);
    void SetMaxLowerPosition(meter_t maxLowerPosition);
    void SetMaxLowerVelocity(meters_per_second_t maxLowerVelocity);
    void SetMaxHookload(newton_t maxHookload);
    void SetObjectiveId(const DataTypes::Uuid objectiveId);
    void SetStatus(const DataTypes::Status status);
    void SetTargetPosition(meter_t targetPosition);
    void SetTargetVelocity(meters_per_second_t targetVelocity);
};

#endif // __HOIST_STATE_PUBLISHER_H__ 
