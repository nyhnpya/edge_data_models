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
#ifndef __ROPTIMIZER_CONFIGURATION_STATE_PUBLISHER_H__
#define __ROPTIMIZER_CONFIGURATION_STATE_PUBLISHER_H__

#include "publisher.h"
#include "base_data_types.h"
#include "roptimizer_configuration.h"
#include "roptimizer_configurationSupport.h"

#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::length;

namespace CRoptimizerConfigurationStatePublisher
{
    class CConfigurationStateStatePublisher : public TPublisher< Shell::Hmi::RoptimizerConfiguration::RoptimizerSteadyState >
    {
    public:
        CConfigurationStateStatePublisher();
        ~CConfigurationStateStatePublisher();

        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();

        // Topic getters
        void SetRpmSteadyState(bool state);
        void SetRopSteadyState(bool state);
        void SetWobSteadyState(bool state);
        void SetTorqueSteadyState(bool state);
        void SetSteadyStateWindow(int32_t value);
        void SetSteadyStateMin(int32_t value);
        void SetRpmStepSize(int32_t value);
        void SetRopStepSize(int32_t value);
        void SetBitWear(double value);
        void SetMSE(double value);
        void SetPower(double value);
    };
};

#endif // __ROPTIMIZER_CONFIGURATION_REQUEST_SUBSCRIBER_H__
