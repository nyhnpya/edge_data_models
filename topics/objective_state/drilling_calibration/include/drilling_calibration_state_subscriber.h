#ifndef __DRILLING_CALIBRATION_STATE_SUBSCRIBER_H__
#define __DRILLING_CALIBRATION_STATE_SUBSCRIBER_H__

#include "subscriber.h"
#include "fd_event_handlers.h"
#include "base_data_types.h"
#include "drilling_calibration.h"
#include "drilling_calibrationSupport.h"

class CDrillingCalibrationStateSubscriber : public TSubscriber< CalibrationHoisting::DrillingCalibrationState >
{
 public:
    typedef std::function<void(const CalibrationHoisting::DrillingCalibrationState &data)> OnDataAvailableEvent;

    CDrillingCalibrationStateSubscriber();
    ~CDrillingCalibrationStateSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);
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

 protected:
    void DataAvailable(const CalibrationHoisting::DrillingCalibrationState &data,
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);
    void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

 private:
    CalibrationHoisting::DrillingCalibrationState m_data;
    DDS::SampleInfo                               m_sampleInfo;
    DDS::LivelinessChangedStatus m_livelinessStatus;
    OnDataAvailableEvent                          m_pOnDataAvailable;
    OnDataDisposedEvent                           m_pOnDataDisposed;
    OnLivelinessChangedEvent     m_pOnLivelinessChanged;
    OnSubscriptionMatchedEvent   m_pOnSubscriptionMatched;
};

#endif // __DRILLING_CALIBRATION_STATE_SUBSCRIBER_H__
