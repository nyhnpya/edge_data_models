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
#ifndef __SHELL_HMI_AUTOTUNERCONFIGURATION_DIFFP_TUNING_REQUEST_SUBSCRIBER_H__
#define __SHELL_HMI_AUTOTUNERCONFIGURATION_DIFFP_TUNING_REQUEST_SUBSCRIBER_H__

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
class CDiffpTuningRequestSubscriber : public TSubscriber< Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest >
{
    public:
        CDiffpTuningRequestSubscriber();
        ~CDiffpTuningRequestSubscriber();
        
        bool Create(int32_t domain);
        bool ValidData();
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        
        /// @return double diffPFilter
        double GetDiffPFilter();
        /// @return double diffPD
        double GetDiffPD();
        /// @return double diffPF
        double GetDiffPF();
        /// @return double diffPEps
        double GetDiffPEps();
        /// @return bool diffPEpsManual
        bool GetDiffPEpsManual();
        /// @return double diffPKcMin
        double GetDiffPKcMin();
        /// @return double diffPKcMax
        double GetDiffPKcMax();
        /// @return double diffPTiMin
        double GetDiffPTiMin();
        /// @return double diffPTiMax
        double GetDiffPTiMax();

    protected:
        void DataAvailable(const Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest                m_data;
        DDS::SampleInfo                                                       m_sampleInfo;
        DDS::LivelinessChangedStatus                                          m_livelinessStatus;
        OnDataAvailableEvent                                                  m_pOnDataAvailable;
        OnDataDisposedEvent                                                   m_pOnDataDisposed;
        OnLivelinessChangedEvent                                              m_pOnLivelinessChanged;
};

#endif // __SHELL_HMI_AUTOTUNERCONFIGURATION_DIFFP_TUNING_REQUEST_SUBSCRIBER_H__
