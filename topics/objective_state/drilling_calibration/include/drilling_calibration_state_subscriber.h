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
#ifndef __DRILLING_CALIBRATION_STATE_SUBSCRIBER_H__
#define __DRILLING_CALIBRATION_STATE_SUBSCRIBER_H__

#include "subscriber.h"
#include "base_data_types.h"
#include "drilling_calibration.h"
#include "drilling_calibrationSupport.h"

class CDrillingCalibrationStateSubscriber : public TSubscriber< nec::control::DrillingCalibrationState >
{
 public:
    typedef std::function<void(const nec::control::DrillingCalibrationState &data)> OnDataAvailableEvent;

    CDrillingCalibrationStateSubscriber();
    ~CDrillingCalibrationStateSubscriber();

	// Topic initialization
    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);

    // Topic getters
    bool GetId(DataTypes::Uuid &id);
    bool GetTimestamp(DataTypes::Time &timestamp);
    bool GetWobProportional(double &wobProportional);
    bool GetWobIntegral(double &wobIntegral);
    bool GetDifferentialPressureProportional(double &differentialPressureProportional);
    bool GetDifferentialPressureIntegral(double &differentialPressureIntegral);
    bool GetTorqueProportional(double &torqueProportional);
    bool GetTorqueIntegral(double &torqueIntegral);
    bool GetMinWobProportional(double &minWobProportional);
    bool GetMaxWobProportional(double &maxWobProportional);
    bool GetMinWobIntegral(double &minWobIntegral);
    bool GetMaxWobIntegral(double &maxWobIntegral);
    bool GetMinDifferentialPressureProportional(double &minDifferentialPressureProportional);
    bool GetMaxDifferentialPressureProportional(double &maxDifferentialPressureProportional);
    bool GetMinDifferentialPressureIntegral(double &minDifferentialPressureIntegral);
    bool GetMaxDifferentialPressureIntegral(double &maxDifferentialPressureIntegral);
    bool GetMinTorqueProportional(double &minTorqueProportional);
    bool GetMaxTorqueProportional(double &maxTorqueProportional);
    bool GetMinTorqueIntegral(double &minTorqueIntegral);
    bool GetMaxTorqueIntegral(double &maxTorqueIntegral);
    bool GetRopMode(bool &ropMode);
    bool GetWobMode(bool &wobMode);
    bool GetDifferentialPressureMode(bool &differentialPressureMode);
    bool GetTorqueMode(bool &torqueMode);
	
	// Topic status
	bool ValidData();
	bool ValidSubscription();

 protected:
    void DataAvailable(const nec::control::DrillingCalibrationState &data,
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);
    void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

 private:
	 bool                                          m_subscriptionMatched;
	 nec::control::DrillingCalibrationState m_data;
    DDS::SampleInfo                               m_sampleInfo;
    OnDataAvailableEvent                          m_pOnDataAvailable;
	OnDataDisposedEvent                           m_pOnDataDisposed;
	OnLivelinessChangedEvent                      m_pOnLivelinessChanged;
	OnSubscriptionMatchedEvent                    m_pOnSubscriptionMatched;
};

#endif // __DRILLING_CALIBRATION_STATE_SUBSCRIBER_H__
