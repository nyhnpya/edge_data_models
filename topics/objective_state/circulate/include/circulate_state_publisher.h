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
#ifndef __CIRCULATE_STATE_PUBLISHER_H__ 
#define __CIRCULATE_STATE_PUBLISHER_H__ 

#include "publisher.h"
#include "circulate.h"
#include "circulateSupport.h"

#ifdef _WIN32
#undef pascal
#endif
#include "units.h"
#include "dds_uuid.h"

using namespace units;
using namespace units::pressure;

class CCirculateStatePublisher : public TPublisher< nec::process::CirculateState >
{
 public:
    CCirculateStatePublisher();
    ~CCirculateStatePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    void SetActualFlowRate(double actualFlowRate);
    void SetActualStandpipePressure(pascal_t actualStandpipePressure);
    void SetMaxFlowRate(double maxRateFlowRate);
    void SetMaxStandpipePressure(pascal_t maxStandpipePressure);
    void SetMinFlowRate(double minRateFlowRate);
    void SetMinStandpipePressure(pascal_t minStandpipePressure);
    void SetObjectiveId(CDdsUuid objectiveId);
    void SetStatus(const DataTypes::Status status);
    void SetTargetFlowRate(double targetFlowRate);
};

#endif // __CIRCULATE_STATE_PUBLISHER_H__ 
