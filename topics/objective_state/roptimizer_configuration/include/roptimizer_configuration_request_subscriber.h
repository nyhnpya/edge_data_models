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
#ifndef __ROPTIMIZER_CONFIGURATION_REQUEST_SUBSCRIBER_H__
#define __ROPTIMIZER_CONFIGURATION_REQUEST_SUBSCRIBER_H__

#include "subscriber.h"
#include "base_data_types.h"
#include "roptimizer_configuration.h"
#include "roptimizer_configurationSupport.h"

#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::length;

namespace CRoptimizerConfigurationRequestSubscriber
{
    class CConfigurationStateRequestSubscriber : public TSubscriber< Shell::Hmi::RoptimizerConfiguration::RoptimizerConfigurationRequest >
    {
    public:
        CConfigurationStateRequestSubscriber();
        ~CConfigurationStateRequestSubscriber();

        bool Create(int32_t domain);
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        bool ValidData();

        // Topic getters
        int32_t GetSteadyStateWindow();
        int32_t GetSteadyStateMin();
        int32_t GetRpmStepSize();
        int32_t GetRopStepSize();
        
    protected:
        void DataAvailable(const Shell::Hmi::RoptimizerConfiguration::RoptimizerConfigurationRequest &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        Shell::Hmi::RoptimizerConfiguration::RoptimizerConfigurationRequest m_data;
        DDS::SampleInfo                           m_sampleInfo;
        DDS::LivelinessChangedStatus              m_livelinessStatus;
        OnDataAvailableEvent                      m_pOnDataAvailable;
        OnSubscriptionMatchedEvent                m_pOnSubscriptionMatched;
        OnDataDisposedEvent                       m_pOnDataDisposed;
        OnLivelinessChangedEvent                  m_pOnLivelinessChanged;
    };
};

#endif // __ROPTIMIZER_CONFIGURATION_REQUEST_SUBSCRIBER_H__
