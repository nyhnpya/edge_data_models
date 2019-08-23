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
#ifndef __DRILLING_CALIBRATION_REQUEST_SUBSCRIBER_H__
#define __DRILLING_CALIBRATION_REQUEST_SUBSCRIBER_H__

#include "subscriber.h"
#include "base_data_types.h"
#include "drilling_calibration.h"
#include "drilling_calibrationSupport.h"

class CDrillingCalibrationRequestSubscriber : public TSubscriber< nec::control::DrillingCalibrationRequest >
{
 public:
    CDrillingCalibrationRequestSubscriber();
    ~CDrillingCalibrationRequestSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    bool ValidData();

    // Topic getters
    bool GetId(DataTypes::Uuid &id);
    bool GetTimestamp(DataTypes::Time &timestamp);
    bool GetWobProportional(double &wobProportional);
    bool GetWobIntegral(double &wobIntegral);
    bool GetDifferentialPressureProportional(double &differentialPressureProportional);
    bool GetDifferentialPressureIntegral(double &differentialPressureIntegral);
    bool GetTorqueProportional(double &torqueProportional);
    bool GetTorqueIntegral(double &torqueIntegral);

 protected:
    void DataAvailable(const nec::control::DrillingCalibrationRequest &data,
               const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

 private:
    nec::control::DrillingCalibrationRequest m_data;
    DDS::SampleInfo                                 m_sampleInfo;
    DDS::LivelinessChangedStatus                    m_livelinessStatus;
    OnDataAvailableEvent                            m_pOnDataAvailable;
    OnSubscriptionMatchedEvent                      m_pOnSubscriptionMatched;
    OnDataDisposedEvent                             m_pOnDataDisposed;
    OnLivelinessChangedEvent                        m_pOnLivelinessChanged;
};

#endif // __DRILLING_CALIBRATION_REQUEST_SUBSCRIBER_H__
