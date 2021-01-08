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
#include "keyed_data_writer.h"
#include "base_data_types.h"
#include "objective.h"
#include "objectiveSupport.h"
#include "dds_uuid.h"

class CObjectiveStatePublisher : public TKeyedDataWriter< process::plan::ObjectiveState>
{
public:
    CObjectiveStatePublisher();
    virtual ~CObjectiveStatePublisher();

    bool Create(const std::string &publisher);
    bool PublishSample();

    // Topic getters
    void SetId(CDdsUuid id);
    void SetObjective(DataTypes::Objective objective);

    DataTypes::Uuid GetId();
};

#endif // __OBJECTIVE_STATE_PUBLISHER_H__
