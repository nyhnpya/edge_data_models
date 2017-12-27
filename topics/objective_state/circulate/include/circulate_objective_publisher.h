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
#ifndef __CIRCULATE_OBJECTIVE_PUBLISHER_H__ 
#define __CIRCULATE_OBJECTIVE_PUBLISHER_H__ 

#include "publisher.h"
#include "circulate.h"
#include "circulateSupport.h"

#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::pressure;

class CCirculateObjectivePublisher : public TPublisher< nec::process::CirculateObjective >
{
 public:
    CCirculateObjectivePublisher();
    ~CCirculateObjectivePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    void SetEstimatedDuration(DataTypes::Time estimatedDuration);
    void SetTargetFlowRate(DDS_Double targetFlowRate);
};

#endif // __CIRCULATE_OBJECTIVE_PUBLISHER_H__ 
