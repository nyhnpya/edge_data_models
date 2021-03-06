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
#ifndef __AUTO_REAM_OBJECTIVE_PUBLISHER_H__
#define __AUTO_REAM_OBJECTIVE_PUBLISHER_H__

#include "publisher.h"
#include "base_data_types.h"
#include "auto_ream.h"
#include "auto_reamSupport.h"

class CAutoReamObjectivePublisher : public TPublisher< nec::process::AutoReamObjective >
{
 public:
    CAutoReamObjectivePublisher();
    ~CAutoReamObjectivePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    // setters
    void SetEstimatedDuration(DataTypes::Time estimatedDuration);
};

#endif // __AUTO_REAM_OBJECTIVE_PUBLISHER_H__
