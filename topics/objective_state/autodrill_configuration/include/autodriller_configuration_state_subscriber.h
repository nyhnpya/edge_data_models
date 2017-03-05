#ifndef __AUTODRILLER_CONFIGURATION_STATE_SUBSCRIBER_H__
#define __AUTODRILLER_CONFIGURATION_STATE_SUBSCRIBER_H__

#include "subscriber.h"
#include "fd_event_handlers.h"
#include "base_data_types.h"
#include "autodriller_configuration.h"
#include "autodriller_configurationSupport.h"

class CAutoDrillerConfigurationStateSubscriber : public TSubscriber< AutoDrillerConfiguration::HmiState >
{
 public:
    typedef std::function<void(const CalibrationHoisting::AutoDrillerConfigurationState &data)> OnDataAvailableEvent;

    CAutoDrillerConfigurationStateSubscriber();
    ~CAutoDrillerConfigurationStateSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
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
    void DataAvailable(const AutoDrillerConfiguration::HmiState &data,
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);

 private:
    CalibrationHoisting::AutoDrillerConfigurationState m_data;
    DDS::SampleInfo                                    m_sampleInfo;
    OnDataAvailableEvent                               m_pOnDataAvailable;
};

#endif // __AUTODRILLER_CONFIGURATION_STATE_SUBSCRIBER_H__
