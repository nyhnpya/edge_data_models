#ifndef __AUTODRILLER_CONFIGURATION_REQUEST_SUBSCRIBER_H__
#define __AUTODRILLER_CONFIGURATION_REQUEST_SUBSCRIBER_H__

#include "subscriber.h"
#include "base_data_types.h"
#include "autodriller_configuration.h"
#include "autodriller_configurationSupport.h"

class CAutoDrillerConfigurationRequestSubscriber : public TSubscriber< AutoDrillerConfiguration::HmiRequest >
{
 public:
    typedef std::function<void(const CalibrationHoisting::AutoDrillerConfigurationRequest &data)> OnDataAvailableEvent;

    CAutoDrillerConfigurationRequestSubscriber();
    ~CAutoDrillerConfigurationRequestSubscriber();

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
    void DataAvailable(const AutoDrillerConfiguration::HmiRequest &data,
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

 private:
    CalibrationHoisting::AutoDrillerConfigurationRequest m_data;
    DDS::SampleInfo                                      m_sampleInfo;
    OnDataAvailableEvent                                 m_pOnDataAvailable;
    OnSubscriptionMatchedEvent                           m_pOnSubscriptionMatched;
};

#endif // __AUTODRILLER_CONFIGURATION_REQUEST_SUBSCRIBER_H__
