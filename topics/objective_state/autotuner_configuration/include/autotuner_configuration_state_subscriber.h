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
#ifndef __AUTOTUNER_CONFIGURATION_STATE_SUBSCRIBER_H__
#define __AUTOTUNER_CONFIGURATION_STATE_SUBSCRIBER_H__

#include "subscriber.h"
#include "base_data_types.h"
#include "autotuner_configuration.h"
#include "autotuner_configurationSupport.h"

#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::length;

namespace CAutoTunerConfigurationStateSubscriber
{
    class CModelStateStateSubscriber : public TSubscriber< Shell::Hmi::AutoTunerConfiguration::ModelStateState >
    {
    public:
        CModelStateStateSubscriber();
        ~CModelStateStateSubscriber();

        bool Create(int32_t domain);
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        bool ValidData();

        // Topic getters
        meter_t GetPipeInnerDiameter();
        meter_t GetPipeOuterDiameter();
        bool GetSlopeFilter(double &slopeFilter);
        bool GetTauMin(double &tauMin);
        bool GetTauMax(double &tauMax);
        bool GetTauMultiplier(double &tauMultiplier);
        bool GetMaxDeviation(double &maxDeviation);
        bool GetMinInterval(double &minInterval);
        bool GetTunerEnabled(bool &tunerEnabled);

    protected:
        void DataAvailable(const Shell::Hmi::AutoTunerConfiguration::ModelStateState &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        Shell::Hmi::AutoTunerConfiguration::ModelStateState m_data;
        DDS::SampleInfo                         m_sampleInfo;
        DDS::LivelinessChangedStatus            m_livelinessStatus;
        OnDataAvailableEvent                    m_pOnDataAvailable;
        OnSubscriptionMatchedEvent              m_pOnSubscriptionMatched;
        OnDataDisposedEvent                     m_pOnDataDisposed;
        OnLivelinessChangedEvent                m_pOnLivelinessChanged;
    };

    class CWobTuningStateSubscriber : public TSubscriber< Shell::Hmi::AutoTunerConfiguration::WobTuningState >
    {
    public:
        typedef std::function<void(const Shell::Hmi::AutoTunerConfiguration::WobTuningState &data)> OnDataAvailableEvent;

        CWobTuningStateSubscriber();
        ~CWobTuningStateSubscriber();

        bool Create(int32_t domain);
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        bool ValidData();

        // Topic getters
        bool GetWobFilter(double &wobFilter);
        bool GetWobD(double &wobD);
        bool GetWobF(double &wobF);
        bool GetWobEps(double &wobEps);
        bool GetWobManual(bool &wobEpsManual);
        bool GetWobKcMin(double &wobKcMin);
        bool GetWobKcMax(double &wobKcMax);
        bool GetWobTiMin(double &wobTiMin);
        bool GetWobTiMax(double &wobTiMax);
        bool GetWobInitK(double &wobInitK);
        bool GetWobInitTau(double &wobInitTau);
        bool GetWobInitPreFilter(double &wobInitPreFilter);
        bool GetWobR1(double &wobR1);
        bool GetWobR2(double &wobR2);

    protected:
        void DataAvailable(const Shell::Hmi::AutoTunerConfiguration::WobTuningState &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        Shell::Hmi::AutoTunerConfiguration::WobTuningState m_data;
        DDS::SampleInfo                        m_sampleInfo;
        DDS::LivelinessChangedStatus           m_livelinessStatus;
        OnDataAvailableEvent                   m_pOnDataAvailable;
        OnSubscriptionMatchedEvent             m_pOnSubscriptionMatched;
        OnDataDisposedEvent                    m_pOnDataDisposed;
        OnLivelinessChangedEvent               m_pOnLivelinessChanged;
    };

    class CDiffpTuningStateSubscriber : public TSubscriber< Shell::Hmi::AutoTunerConfiguration::DiffpTuningState >
    {
    public:
        typedef std::function<void(const Shell::Hmi::AutoTunerConfiguration::DiffpTuningState &data)> OnDataAvailableEvent;

        CDiffpTuningStateSubscriber();
        ~CDiffpTuningStateSubscriber();

        bool Create(int32_t domain);
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        bool ValidData();

        // Topic getters
        bool GetDiffpFilter(double &diffPFilter);
        bool GetDiffpD(double &diffPD);
        bool GetDiffpF(double &diffPF);
        bool GetDiffpEps(double &diffPEps);
        bool GetDiffpManual(bool &diffPEpsManual);
        bool GetDiffpKcMin(double &diffPKcMin);
        bool GetDiffpKcMax(double &diffPKcMax);
        bool GetDiffpTiMin(double &diffPTiMin);
        bool GetDiffpTiMax(double &diffPTiMax);
        bool GetDiffpInitK(double diffpInitK);
        bool GetDiffpInitTau(double diffpInitTau);
        bool GetDiffpInitPreFilter(double diffpInitPreFilter);
        bool GetDiffpR1(double diffpR1);
        bool GetDiffpR2(double diffpR2);

    protected:
        void DataAvailable(const Shell::Hmi::AutoTunerConfiguration::DiffpTuningState &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        Shell::Hmi::AutoTunerConfiguration::DiffpTuningState m_data;
        DDS::SampleInfo                          m_sampleInfo;
        DDS::LivelinessChangedStatus             m_livelinessStatus;
        OnDataAvailableEvent                     m_pOnDataAvailable;
        OnSubscriptionMatchedEvent               m_pOnSubscriptionMatched;
        OnDataDisposedEvent                      m_pOnDataDisposed;
        OnLivelinessChangedEvent                 m_pOnLivelinessChanged;
    };

    class CTorqueTuningStateSubscriber : public TSubscriber< Shell::Hmi::AutoTunerConfiguration::TorqueTuningState >
    {
    public:
        typedef std::function<void(const Shell::Hmi::AutoTunerConfiguration::TorqueTuningState &data)> OnDataAvailableEvent;

        CTorqueTuningStateSubscriber();
        ~CTorqueTuningStateSubscriber();

        bool Create(int32_t domain);
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        bool ValidData();

        // Topic getters
        bool GetTorqueFilter(double &torqueFilter);
        bool GetTorqueD(double &torqueD);
        bool GetTorqueF(double &torqueF);
        bool GetTorqueEps(double &torqueEps);
        bool GetTorqueManual(bool &torqueEpsManual);
        bool GetTorqueKcMin(double &torqueKcMin);
        bool GetTorqueKcMax(double &torqueKcMax);
        bool GetTorqueTiMin(double &torqueTiMin);
        bool GetTorqueTiMax(double &torqueTiMax);
        bool GetTorqueInitK(double torqueInitK);
        bool GetTorqueInitTau(double torqueInitTau);
        bool GetTorqueInitPreFilter(double torqueInitPreFilter);
        bool GetTorqueR1(double torqueR1);
        bool GetTorqueR2(double torqueR2);

    protected:
        void DataAvailable(const Shell::Hmi::AutoTunerConfiguration::TorqueTuningState &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        Shell::Hmi::AutoTunerConfiguration::TorqueTuningState m_data;
        DDS::SampleInfo                           m_sampleInfo;
        DDS::LivelinessChangedStatus              m_livelinessStatus;
        OnDataAvailableEvent                      m_pOnDataAvailable;
        OnSubscriptionMatchedEvent                m_pOnSubscriptionMatched;
        OnDataDisposedEvent                       m_pOnDataDisposed;
        OnLivelinessChangedEvent                  m_pOnLivelinessChanged;
    };
};

#endif // __AUTOTUNER_CONFIGURATION_STATE_SUBSCRIBER_H__
