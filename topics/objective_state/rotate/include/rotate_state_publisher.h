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
#ifndef __ROTATE_STATE_PUBLISHER_H__ 
#define __ROTATE_STATE_PUBLISHER_H__ 

#include "publisher.h"
#include "rotate.h"
#include "rotateSupport.h"

#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::angular_velocity;

class CRotateStatePublisher : public TPublisher< nec::process::RotateState >
{
 public:
    CRotateStatePublisher();
    ~CRotateStatePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    void SetActualRate(radians_per_second_t actualRate);
    void SetMaxRate(radians_per_second_t maxRate);
    void SetMinRate(radians_per_second_t minRate);
    void SetObjectiveId(const DataTypes::Uuid objectiveId);
    void SetStatus(const DataTypes::Status status);
    void SetTargetRate(radians_per_second_t targetRate);
};

#endif // __ROTATE_STATE_PUBLISHER_H__ 
