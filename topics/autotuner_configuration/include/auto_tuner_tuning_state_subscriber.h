/*
 *  Copyright (c) 2019 Ensign Energy Incorporated
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
#ifndef __SHELL_HMI_AUTOTUNERCONFIGURATION_AUTO_TUNER_TUNING_STATE_SUBSCRIBER_H__
#define __SHELL_HMI_AUTOTUNERCONFIGURATION_AUTO_TUNER_TUNING_STATE_SUBSCRIBER_H__

#include "subscriber.h"
#include "autotuner_configuration.h"
#include "autotuner_configurationSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

/// @brief Requested state change in the rotation system.
///
///
class CAutoTunerTuningStateSubscriber : public TSubscriber< Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState >
{
    public:
        CAutoTunerTuningStateSubscriber();
        ~CAutoTunerTuningStateSubscriber();
        
        bool Create(int32_t domain);
        bool ValidData();
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        
        /// @return std::string id
        std::string GetId();
        /// @return double filter
        double GetFilter();
        /// @return double d
        double GetD();
        /// @return double f
        double GetF();
        /// @return double epsilon
        double GetEpsilon();
        /// @return bool epsilonManual
        bool GetEpsilonManual();
        /// @return double kcMin
        double GetKcMin();
        /// @return double kcMax
        double GetKcMax();
        /// @return double tiMin
        double GetTiMin();
        /// @return double tiMax
        double GetTiMax();
        /// @return double initK
        double GetInitK();
        /// @return double initTau
        double GetInitTau();
        /// @return double initPreFilter
        double GetInitPreFilter();
        /// @return double r1
        double GetR1();
        /// @return double r2
        double GetR2();

    protected:
        void DataAvailable(const Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState              m_data;
        DDS::SampleInfo                                                       m_sampleInfo;
        DDS::LivelinessChangedStatus                                          m_livelinessStatus;
        OnDataAvailableEvent                                                  m_pOnDataAvailable;
        OnDataDisposedEvent                                                   m_pOnDataDisposed;
        OnLivelinessChangedEvent                                              m_pOnLivelinessChanged;
};

#endif // __SHELL_HMI_AUTOTUNERCONFIGURATION_AUTO_TUNER_TUNING_STATE_SUBSCRIBER_H__
