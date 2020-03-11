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
#ifndef __SHELL_HMI_AUTOTUNERCONFIGURATION_MODEL_STATE_STATE_SUBSCRIBER_H__
#define __SHELL_HMI_AUTOTUNERCONFIGURATION_MODEL_STATE_STATE_SUBSCRIBER_H__

#include "subscriber.h"
#include "autotuner_configuration.h"
#include "autotuner_configurationSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

/// @brief Requested state change in the rotation system.
///
///
class CModelStateStateSubscriber : public TSubscriber< Shell::Hmi::AutoTunerConfiguration::ModelStateState >
{
    public:
        CModelStateStateSubscriber();
        ~CModelStateStateSubscriber();
        
        bool Create(int32_t domain);
        bool ValidData();
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        
        /// id of requestor
        /// @return units::length::meter_t pipeInnerDiameter
        units::length::meter_t GetPipeInnerDiameter();
        /// id of current objective
        /// @return units::length::meter_t pipeOuterDiameter
        units::length::meter_t GetPipeOuterDiameter();
        /// @return double slopeFilter
        double GetSlopeFilter();
        /// @return double tauMax
        double GetTauMax();
        /// @return double tauMin
        double GetTauMin();
        /// @return double tauMultiplier
        double GetTauMultiplier();
        /// @return double maxDeviation
        double GetMaxDeviation();
        /// @return double minInterval
        double GetMinInterval();
        /// @return bool tunerEnabled
        bool GetTunerEnabled();

    protected:
        void DataAvailable(const Shell::Hmi::AutoTunerConfiguration::ModelStateState &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        Shell::Hmi::AutoTunerConfiguration::ModelStateState                   m_data;
        DDS::SampleInfo                                                       m_sampleInfo;
        DDS::LivelinessChangedStatus                                          m_livelinessStatus;
        OnDataAvailableEvent                                                  m_pOnDataAvailable;
        OnDataDisposedEvent                                                   m_pOnDataDisposed;
        OnLivelinessChangedEvent                                              m_pOnLivelinessChanged;
};

#endif // __SHELL_HMI_AUTOTUNERCONFIGURATION_MODEL_STATE_STATE_SUBSCRIBER_H__
