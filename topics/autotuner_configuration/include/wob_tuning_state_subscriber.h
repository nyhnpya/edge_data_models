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
#ifndef __SHELL_HMI_AUTOTUNERCONFIGURATION_WOB_TUNING_STATE_SUBSCRIBER_H__
#define __SHELL_HMI_AUTOTUNERCONFIGURATION_WOB_TUNING_STATE_SUBSCRIBER_H__

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
class CWobTuningStateSubscriber : public TSubscriber< Shell::Hmi::AutoTunerConfiguration::WobTuningState >
{
    public:
        CWobTuningStateSubscriber();
        ~CWobTuningStateSubscriber();
        
        bool Create(int32_t domain);
        bool ValidData();
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        
        /// @return double wobFilter
        double GetWobFilter();
        /// @return double wobD
        double GetWobD();
        /// @return double wobF
        double GetWobF();
        /// @return double wobEps
        double GetWobEps();
        /// @return bool wobEpsManual
        bool GetWobEpsManual();
        /// @return double wobKcMin
        double GetWobKcMin();
        /// @return double wobKcMax
        double GetWobKcMax();
        /// @return double wobTiMin
        double GetWobTiMin();
        /// @return double wobTiMax
        double GetWobTiMax();
        /// @return double wobInitK
        double GetWobInitK();
        /// @return double wobInitTau
        double GetWobInitTau();
        /// @return double wobInitPreFilter
        double GetWobInitPreFilter();
        /// @return double wobR1
        double GetWobR1();
        /// @return double wobR2
        double GetWobR2();

    protected:
        void DataAvailable(const Shell::Hmi::AutoTunerConfiguration::WobTuningState &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        Shell::Hmi::AutoTunerConfiguration::WobTuningState                    m_data;
        DDS::SampleInfo                                                       m_sampleInfo;
        DDS::LivelinessChangedStatus                                          m_livelinessStatus;
        OnDataAvailableEvent                                                  m_pOnDataAvailable;
        OnDataDisposedEvent                                                   m_pOnDataDisposed;
        OnLivelinessChangedEvent                                              m_pOnLivelinessChanged;
};

#endif // __SHELL_HMI_AUTOTUNERCONFIGURATION_WOB_TUNING_STATE_SUBSCRIBER_H__
