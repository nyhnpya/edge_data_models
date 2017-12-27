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
#ifndef __SIM_AUTODRILLER_OBJECTIVE_PUBLISHER_H__
#define __SIM_AUTODRILLER_OBJECTIVE_PUBLISHER_H__

#include "publisher.h"
#include "base_data_types.h"
#include "drill_simulation.h"
#include "drill_simulationSupport.h"

class CSimDrillObjectivePublisher : public TPublisher< Simulation::AutoDrillerObjective >
{
 public:
    CSimDrillObjectivePublisher();
    ~CSimDrillObjectivePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    // setters
    void SetId(const DataTypes::Uuid id);
    void SetRopLimit(const double ropLimit);
    void SetWobLimit(const double wobLimit);
    void SetDifferentialPressureLimit(const double differentialPressureLimit);
    void SetTorqueLimit(const double torqueLimit);
    void SetRopMode(const bool ropMode);
    void SetWobMode(const bool wobMode);
    void SetDifferentialPressureMode(const bool differentialPressureMode);
    void SetTorqueMode(const bool torqueMode);
};

#endif // __SIM_AUTODRILLER_OBJECTIVE_PUBLISHER_H__
