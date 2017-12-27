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
#ifndef __AUTOTUNER_CONFIGURATION_REQUEST_SUBSCRIBER_H__
#define __AUTOTUNER_CONFIGURATION_REQUEST_SUBSCRIBER_H__

#include "subscriber.h"
#include "base_data_types.h"
#include "autotuner_configuration.h"
#include "autotuner_configurationSupport.h"

namespace CAutoTunerConfigurationRequestSubscriber
{
    class CModelStateRequestSubscriber : public TSubscriber< AutoTunerConfiguration::ModelStateRequest >
    {
    public:
        typedef std::function<void(const AutoTunerConfiguration::ModelStateRequest &data)> OnDataAvailableEvent;

        CModelStateRequestSubscriber();
        ~CModelStateRequestSubscriber();

        bool Create(int32_t domain);
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        bool ValidData();

        // Topic getters
        bool GetModelReset(bool &modelReset);
        bool GetPipeInnerDiameter(double &pipeInnerDiameter);
        bool GetPipeOuterDiameter(double &pipeOuterDiameter);
        bool GetSlopeFilter(double &slopeFilter);
        bool GetTauMax(double &tauMax);
        bool GetTauMin(double &tauMin);
        bool GetTauMultiplier(double &tauMultiplier);
        bool GetMaxDeviation(double &maxDeviation);
        bool GetMinInterval(double &minInterval);

    protected:
        void DataAvailable(const AutoTunerConfiguration::ModelStateRequest &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        AutoTunerConfiguration::ModelStateRequest m_data;
        DDS::SampleInfo                           m_sampleInfo;
        DDS::LivelinessChangedStatus              m_livelinessStatus;
        OnDataAvailableEvent                      m_pOnDataAvailable;
        OnSubscriptionMatchedEvent                m_pOnSubscriptionMatched;
        OnDataDisposedEvent                       m_pOnDataDisposed;
        OnLivelinessChangedEvent                  m_pOnLivelinessChanged;
    };

    class CWobTuningRequestSubscriber : public TSubscriber< AutoTunerConfiguration::WobTuningRequest >
    {
    public:
        typedef std::function<void(const AutoTunerConfiguration::WobTuningRequest &data)> OnDataAvailableEvent;

        CWobTuningRequestSubscriber();
        ~CWobTuningRequestSubscriber();

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
        bool GewobEpsManual(bool &wobEpsManual);
        bool GetWobKcMin(double &wobKcMin);
        bool GetWobKcMax(double &wobKcMax);
        bool GetWobTiMin(double &wobTiMin);
        bool GetWobTiMax(double &wobTiMax);

    protected:
        void DataAvailable(const AutoTunerConfiguration::WobTuningRequest &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        AutoTunerConfiguration::WobTuningRequest m_data;
        DDS::SampleInfo                          m_sampleInfo;
        DDS::LivelinessChangedStatus             m_livelinessStatus;
        OnDataAvailableEvent                     m_pOnDataAvailable;
        OnSubscriptionMatchedEvent               m_pOnSubscriptionMatched;
        OnDataDisposedEvent                      m_pOnDataDisposed;
        OnLivelinessChangedEvent                 m_pOnLivelinessChanged;
    };

    class CDiffpTuningRequestSubscriber : public TSubscriber< AutoTunerConfiguration::DiffpTuningRequest >
    {
    public:
        typedef std::function<void(const AutoTunerConfiguration::DiffpTuningRequest &data)> OnDataAvailableEvent;

        CDiffpTuningRequestSubscriber();
        ~CDiffpTuningRequestSubscriber();

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
        bool GediffPEpsManual(bool &diffPEpsManual);
        bool GetDiffpKcMin(double &diffPKcMin);
        bool GetDiffpKcMax(double &diffPKcMax);
        bool GetDiffpTiMin(double &diffPTiMin);
        bool GetDiffpTiMax(double &diffPTiMax);

    protected:
        void DataAvailable(const AutoTunerConfiguration::DiffpTuningRequest &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        AutoTunerConfiguration::DiffpTuningRequest m_data;
        DDS::SampleInfo                            m_sampleInfo;
        DDS::LivelinessChangedStatus               m_livelinessStatus;
        OnDataAvailableEvent                       m_pOnDataAvailable;
        OnSubscriptionMatchedEvent                 m_pOnSubscriptionMatched;
        OnDataDisposedEvent                        m_pOnDataDisposed;
        OnLivelinessChangedEvent                   m_pOnLivelinessChanged;
    };

    class CTorqueTuningRequestSubscriber : public TSubscriber< AutoTunerConfiguration::TorqueTuningRequest >
    {
    public:
        typedef std::function<void(const AutoTunerConfiguration::TorqueTuningRequest &data)> OnDataAvailableEvent;

        CTorqueTuningRequestSubscriber();
        ~CTorqueTuningRequestSubscriber();

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
        bool GetTorqueEpsManual(bool &torqueEpsManual);
        bool GetTorqueKcMin(double &torqueKcMin);
        bool GetTorqueKcMax(double &torqueKcMax);
        bool GetTorqueTiMin(double &torqueTiMin);
        bool GetTorqueTiMax(double &torqueTiMax);

    protected:
        void DataAvailable(const AutoTunerConfiguration::TorqueTuningRequest &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        AutoTunerConfiguration::TorqueTuningRequest m_data;
        DDS::SampleInfo                             m_sampleInfo;
        DDS::LivelinessChangedStatus                m_livelinessStatus;
        OnDataAvailableEvent                        m_pOnDataAvailable;
        OnSubscriptionMatchedEvent                  m_pOnSubscriptionMatched;
        OnDataDisposedEvent                         m_pOnDataDisposed;
        OnLivelinessChangedEvent                    m_pOnLivelinessChanged;
    };
};

#endif // __AUTOTUNER_CONFIGURATION_REQUEST_SUBSCRIBER_H__
