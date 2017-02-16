#ifndef __DRILLING_CALIBRATION_REQUEST_SUBSCRIBER_H__
#define __DRILLING_CALIBRATION_REQUEST_SUBSCRIBER_H__

#include "subscriber.h"
#include "base_data_types.h"
#include "drilling_calibration.h"
#include "drilling_calibrationSupport.h"

class CDrillingCalibrationRequestSubscriber : public TSubscriber< CalibrationHoisting::DrillingCalibrationRequest >
{
 public:
    typedef std::function<void(const CalibrationHoisting::DrillingCalibrationRequest &data)> OnDataAvailableEvent;

    CDrillingCalibrationRequestSubscriber();
    ~CDrillingCalibrationRequestSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
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

 protected:
    void DataAvailable(const CalibrationHoisting::DrillingCalibrationRequest &data,
               const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

 private:
    CalibrationHoisting::DrillingCalibrationRequest m_data;
    DDS::SampleInfo                                 m_sampleInfo;
    OnDataAvailableEvent                            m_pOnDataAvailable;
    OnSubscriptionMatchedEvent                      m_pOnSubscriptionMatched;
};

#endif // __DRILLING_CALIBRATION_REQUEST_SUBSCRIBER_H__
