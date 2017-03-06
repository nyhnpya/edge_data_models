#ifndef __AUTODRILLER_CONFIGURATION_REQUEST_SUBSCRIBER_H__
#define __AUTODRILLER_CONFIGURATION_REQUEST_SUBSCRIBER_H__

#include "subscriber.h"
#include "base_data_types.h"
#include "autodriller_configuration.h"
#include "autodriller_configurationSupport.h"

class CAutoDrillerConfigurationRequestSubscriber : public TSubscriber< AutoDrillerConfiguration::HmiRequest >
{
 public:
    typedef std::function<void(const AutoDrillerConfiguration::HmiRequest &data)> OnDataAvailableEvent;

    CAutoDrillerConfigurationRequestSubscriber();
    ~CAutoDrillerConfigurationRequestSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);

    // Topic getters
    bool GetId(DataTypes::Uuid &id);
    bool GetTimestamp(DataTypes::Time &timestamp);
    bool GetDifferentialPressureKpCalculated(double &differentialPressureKpCalculated);
    bool GetDifferentialPressureKpCurrent(double &differentialPressureKpCurrent);
    bool GetDifferentialPressureTiCalculated(double &dpTiCalculated);
    bool GetDifferentialPressureTiCurrent(double &dpTiCurrent);
    bool GetRateOfPenetrationKpCalculated(double &rateOfPenetrationKpCalculated);
    bool GetRateOfPenetrationKpCurrent(double &rateOfPenetrationKpCurrent);
    bool GetRateOfPenetrationTiCalcualted(double &rateOfPenetrationTiCalcualted);
    bool GetRateOfPenetrationTiCurrent(double &rateOfPenetrationTiCurrent);
    bool GetTorqueKpCalculated(double &torqueKpCalculated);
    bool GetTorqueKpCurrent(double &torqueKpCurrent);
    bool GetTorqueTiCalculated(double &torqueTiCalculated);
    bool GetToqueTiCurrent(double &toqueTiCurrent);
    bool GetWeightOnBitKpCalculated(double &weightOnBitKpCalculated);
    bool GetWeightOnBitKpCurrent(double &weightOnBitKpCurrent);
    bool GetWeightOnBitTiCalculated(double &weightOnBitTiCalculated);
    bool GetWeightOnBitTiCurrent(double &weightOnBitTiCurrent);
    bool GetMode(long &mode);
    bool GetModeController(double &modeController);
    bool GetOnDataAvailable(double &onDataAvailable);
    bool GetOnLivelinessLost(double &onLivelinessLost);
    bool GetModelOneDifferentialPressureRequestK(double &modelOneDifferentialPressureRequestK);
    bool GetModelOneDifferentialPressureRequestTau(double &modelOneDifferentialPressureRequestTau);
    bool GetModelOneRateOfPenetrationRequestK(double &modelOneRateOfPenetrationRequestK);
    bool GetModelOneRateOfPenetrationRequestTau(double &modelOneRateOfPenetrationRequestTau);
    bool GetModelOneTorqueRequestK(double &modelOneTorqueRequestK);
    bool GetModelOneTorqueRequestTau(double &modelOneTorqueRequestTau);
    bool GetModelOneWeightOnBitRequestK(double &modelOneWeightOnBitRequestK);
    bool GetModelOneWeightOnBitRequestTau(double &modelOneWeightOnBitRequestTau);
    bool GetModelTwoDifferentialPressureRequestK(double &modelTwoDifferentialPressureRequestK);
    bool GetModelTwoDifferentialPressureRequestTau(double &modelTwoDifferentialPressureRequestTau);
    bool GetModelTwoRateOfPenetrationRequestK(double &modelTwoRateOfPenetrationRequestK);
    bool GetModelTwoRateOfPenetrationRequestTau(double &modelTwoRateOfPenetrationRequestTau);
    bool GetModelTwoTorqueRequestK(double &modelTwoTorqueRequestK);
    bool GetModelTwoTorqueRequestTau(double &modelTwoTorqueRequestTau);
    bool GetModelTwoWeightOnBitRequestK(double &modelTwoWeightOnBitRequestK);
    bool GetModelTwoWeightOnBitRequestTau(double &modelTwoWeightOnBitRequestTau);
    bool GetStatus(long &status);
    bool GetTuningDisable(bool &tuningDisable);
    bool GetTuningEnable(bool &tuningEnable);

 protected:
    void DataAvailable(const AutoDrillerConfiguration::HmiRequest &data,
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

 private:
    AutoDrillerConfiguration::HmiRequest m_data;
    DDS::SampleInfo                      m_sampleInfo;
    OnDataAvailableEvent                 m_pOnDataAvailable;
    OnSubscriptionMatchedEvent           m_pOnSubscriptionMatched;
};

#endif // __AUTODRILLER_CONFIGURATION_REQUEST_SUBSCRIBER_H__
