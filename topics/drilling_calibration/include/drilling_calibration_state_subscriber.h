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
#ifndef __NEC_CONTROL_DRILLING_CALIBRATION_STATE_SUBSCRIBER_H__
#define __NEC_CONTROL_DRILLING_CALIBRATION_STATE_SUBSCRIBER_H__

#include "subscriber.h"
#include "drilling_calibration.h"
#include "drilling_calibrationSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

class CDrillingCalibrationStateSubscriber : public TSubscriber< nec::control::DrillingCalibrationState >
{
    public:
        CDrillingCalibrationStateSubscriber();
        ~CDrillingCalibrationStateSubscriber();
        
        bool Create(int32_t domain);
        bool ValidData();
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        
        /// @return CDdsUuid id
        CDdsUuid GetId();
        /// @return DataTypes::Time timestamp
        DataTypes::Time GetTimestamp();
        /// @return double wobProportional
        double GetWobProportional();
        /// @return double wobIntegral
        double GetWobIntegral();
        /// @return double differentialPressureProportional
        double GetDifferentialPressureProportional();
        /// @return double differentialPressureIntegral
        double GetDifferentialPressureIntegral();
        /// @return double torqueProportional
        double GetTorqueProportional();
        /// @return double torqueIntegral
        double GetTorqueIntegral();
        /// @return double minWobProportional
        double GetMinWobProportional();
        /// @return double maxWobProportional
        double GetMaxWobProportional();
        /// @return double minWobIntegral
        double GetMinWobIntegral();
        /// @return double maxWobIntegral
        double GetMaxWobIntegral();
        /// @return double minDifferentialPressureProportional
        double GetMinDifferentialPressureProportional();
        /// @return double maxDifferentialPressureProportional
        double GetMaxDifferentialPressureProportional();
        /// @return double minDifferentialPressureIntegral
        double GetMinDifferentialPressureIntegral();
        /// @return double maxDifferentialPressureIntegral
        double GetMaxDifferentialPressureIntegral();
        /// @return double minTorqueProportional
        double GetMinTorqueProportional();
        /// @return double maxTorqueProportional
        double GetMaxTorqueProportional();
        /// @return double minTorqueIntegral
        double GetMinTorqueIntegral();
        /// @return double maxTorqueIntegral
        double GetMaxTorqueIntegral();

    protected:
        void DataAvailable(const nec::control::DrillingCalibrationState &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        nec::control::DrillingCalibrationState                                m_data;
        DDS::SampleInfo                                                       m_sampleInfo;
        DDS::LivelinessChangedStatus                                          m_livelinessStatus;
        OnDataAvailableEvent                                                  m_pOnDataAvailable;
        OnDataDisposedEvent                                                   m_pOnDataDisposed;
        OnLivelinessChangedEvent                                              m_pOnLivelinessChanged;
};

#endif // __NEC_CONTROL_DRILLING_CALIBRATION_STATE_SUBSCRIBER_H__
