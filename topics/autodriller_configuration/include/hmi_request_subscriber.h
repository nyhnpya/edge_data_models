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
#ifndef __NEC_CONTROL_HMI_REQUEST_SUBSCRIBER_H__
#define __NEC_CONTROL_HMI_REQUEST_SUBSCRIBER_H__

#include "subscriber.h"
#include "autodriller_configuration.h"
#include "autodriller_configurationSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

class CHmiRequestSubscriber : public TSubscriber< nec::control::HmiRequest >
{
    public:
        CHmiRequestSubscriber();
        ~CHmiRequestSubscriber();
        
        bool Create(int32_t domain);
        bool ValidData();
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        
        /// @return CDdsUuid id
        CDdsUuid GetId();
        /// @return DataTypes::Time timestamp
        DataTypes::Time GetTimestamp();
        /// @return int32_t mode
        int32_t GetMode();
        /// @return double modeController
        double GetModeController();
        /// @return double modelTwoDifferentialPressureRequestK
        double GetModelTwoDifferentialPressureRequestK();
        /// @return double modelTwoDifferentialPressureRequestTau
        double GetModelTwoDifferentialPressureRequestTau();
        /// @return double modelTwoRateOfPenetrationRequestK
        double GetModelTwoRateOfPenetrationRequestK();
        /// @return double modelTwoRateOfPenetrationRequestTau
        double GetModelTwoRateOfPenetrationRequestTau();
        /// @return double modelTwoTorqueRequestK
        double GetModelTwoTorqueRequestK();
        /// @return double modelTwoTorqueRequestTau
        double GetModelTwoTorqueRequestTau();
        /// @return double modelTwoWeightOnBitRequestK
        double GetModelTwoWeightOnBitRequestK();
        /// @return double modelTwoWeightOnBitRequestTau
        double GetModelTwoWeightOnBitRequestTau();
        /// @return int32_t status
        int32_t GetStatus();
        /// @return bool tuningEnable
        bool GetTuningEnable();

    protected:
        void DataAvailable(const nec::control::HmiRequest &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        nec::control::HmiRequest                                              m_data;
        DDS::SampleInfo                                                       m_sampleInfo;
        DDS::LivelinessChangedStatus                                          m_livelinessStatus;
        OnDataAvailableEvent                                                  m_pOnDataAvailable;
        OnDataDisposedEvent                                                   m_pOnDataDisposed;
        OnLivelinessChangedEvent                                              m_pOnLivelinessChanged;
};

#endif // __NEC_CONTROL_HMI_REQUEST_SUBSCRIBER_H__
