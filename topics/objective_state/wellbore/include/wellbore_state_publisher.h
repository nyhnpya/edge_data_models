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
#ifndef __WELLBORE_STATE_PUBLISHER_H__
#define __WELLBORE_STATE_PUBLISHER_H__

#include <mutex>
#include "publisher.h"
#include "base_data_types.h"
#include "wellbore.h"
#include "wellboreSupport.h"

#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::length;

class CWellboreStatePublisher : public TPublisher<nec::process::WellboreState>
{
public:
    CWellboreStatePublisher();
    virtual ~CWellboreStatePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    // Topic getters
    void SetBitDepth(meter_t bitDept);
    void SetHoleDepth(meter_t holeDepth);

private:
};

#endif // __WELLBORE_STATE_PUBLISHER_H__
