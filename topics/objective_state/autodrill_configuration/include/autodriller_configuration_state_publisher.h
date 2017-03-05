#ifndef __AUTODRILLER_CONFIGURATION_STATE_PUBLISHER_H__
#define __AUTODRILLER_CONFIGURATION_STATE_PUBLISHER_H__

#include "publisher.h"
#include "base_data_types.h"
#include "autodriller_configuration.h"
#include "autodriller_configurationSupport.h"

class CAutoDrillerConfigurationStatePublisher : public TPublisher< AutoDrillerConfiguration::HmiState >
{
 public:
    CAutoDrillerConfigurationStatePublisher();
    ~CAutoDrillerConfigurationStatePublisher();

    bool Create(int32_t domain);
    bool PublishSample();

    // Topic getters
    void SetId(const DataTypes::Uuid id);
    void SetTimestamp(const DataTypes::Time timestamp);
    void SetWobProportional(const double wobProportional);
    void SetWobIntegral(const double wobIntegral);
    void SetDifferentialPressureProportional(const double differentialPressureProportional);
    void SetDifferentialPressureIntegral(const double differentialPressureIntegral);
    void SetTorqueProportional(const double torqueProportional);
    void SetTorqueIntegral(const double torqueIntegral);
    void SetMinWobProportional(const double minWobProportional);
    void SetMaxWobProportional(const double maxWobProportional);
    void SetMinWobIntegral(const double minWobIntegral);
    void SetMaxWobIntegral(const double maxWobIntegral);
    void SetMinDifferentialPressureProportional(const double minDifferentialPressureProportional);
    void SetMaxDifferentialPressureProportional(const double maxDifferentialPressureProportional);
    void SetMinDifferentialPressureIntegral(const double minDifferentialPressureIntegral);
    void SetMaxDifferentialPressureIntegral(const double maxDifferentialPressureIntegral);
    void SetMinTorqueProportional(const double minTorqueProportional);
    void SetMaxTorqueProportional(const double maxTorqueProportional);
    void SetMinTorqueIntegral(const double minTorqueIntegral);
    void SetMaxTorqueIntegral(const double maxTorqueIntegral);
    void SetRopMode(const bool ropMode);
    void SetWobMode(const bool wobMode);
    void SetDifferentialPressureMode(const bool differentialPressureMode);
    void SetTorqueMode(const bool torqueMode);
};

#endif // __AUTODRILLER_CONFIGURATION_STATE_PUBLISHER_H__
