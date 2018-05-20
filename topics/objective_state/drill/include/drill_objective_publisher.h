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
#ifndef __DRILLING_OBJECTIVE_PUBLISHER_H__
#define __DRILLING_OBJECTIVE_PUBLISHER_H__

#include "publisher.h"
#include "base_data_types.h"
#include "drill.h"
#include "drillSupport.h"

class CDrillObjectivePublisher : public TPublisher< nec::process::DrillingObjective >
{
 public:
    CDrillObjectivePublisher();
    ~CDrillObjectivePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    // setters
    void SetEstimatedDuration(DataTypes::Time estimatedDuration);
    void SetRopLimit(const double ropLimit);
    void SetWobLimit(const double wobLimit);
    void SetDifferentialPressureLimit(const double differentialPressureLimit);
    void SetTorqueLimit(const double torqueLimit);
    void SetRopMode(const bool ropMode);
    void SetWobMode(const bool wobMode);
    void SetDifferentialPressureMode(const bool differentialPressureMode);
    void SetTorqueMode(const bool torqueMode);
};

#endif // __DRILLING_OBJECTIVE_PUBLISHER_H__
