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
#ifndef __OBJECTIVE_STATE_PUBLISHER_H__
#define __OBJECTIVE_STATE_PUBLISHER_H__

#include <mutex>
#include "publisher.h"
#include "base_data_types.h"
#include "objective.h"
#include "objectiveSupport.h"

class CObjectiveStatePublisher : public TPublisher< process::plan::ObjectiveState>
{
public:
    CObjectiveStatePublisher();
    virtual ~CObjectiveStatePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    // Topic getters
    void SetObjective(DataTypes::Objective objective);
    DataTypes::Uuid GetId();
    
};

#endif // __OBJECTIVE_STATE_PUBLISHER_H__
