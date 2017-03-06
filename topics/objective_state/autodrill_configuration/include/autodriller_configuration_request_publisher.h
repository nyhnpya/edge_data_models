#ifndef __AUTODRILLER_CONFIGURATION_REQUEST_PUBLISHER_H__
#define __AUTODRILLER_CONFIGURATION_REQUEST_PUBLISHER_H__

#include "publisher.h"
#include "base_data_types.h"
#include "autodriller_configuration.h"
#include "autodriller_configurationSupport.h"

class CAutoDrillerConfigurationRequestPublisher : public TPublisher< AutoDrillerConfiguration::HmiRequest >
{
 public:
    CAutoDrillerConfigurationRequestPublisher();
    ~CAutoDrillerConfigurationRequestPublisher();

    bool Create(int32_t domain);
    bool PublishSample();

    // Topic getters
    void SetId(const DataTypes::Uuid id);
    void SetTimestamp(const DataTypes::Time timestamp);
    void SetDifferentialPressureKpCalculated(double differentialPressureKpCalculated);
    void SetDifferentialPressureKpCurrent(double differentialPressureKpCurrent);
    void SetDifferentialPressureTiCalculated(double dpTiCalculated);
    void SetDifferentialPressureTiCurrent(double dpTiCurrent);
    void SetRateOfPenetrationKpCalculated(double rateOfPenetrationKpCalculated);
    void SetRateOfPenetrationKpCurrent(double rateOfPenetrationKpCurrent);
    void SetRateOfPenetrationTiCalcualted(double rateOfPenetrationTiCalcualted);
    void SetRateOfPenetrationTiCurrent(double rateOfPenetrationTiCurrent);
    void SetTorqueKpCalculated(double torqueKpCalculated);
    void SetTorqueKpCurrent(double torqueKpCurrent);
    void SetTorqueTiCalculated(double torqueTiCalculated);
    void SetToqueTiCurrent(double toqueTiCurrent);
    void SetWeightOnBitKpCalculated(double weightOnBitKpCalculated);
    void SetWeightOnBitKpCurrent(double weightOnBitKpCurrent);
    void SetWeightOnBitTiCalculated(double weightOnBitTiCalculated);
    void SetWeightOnBitTiCurrent(double weightOnBitTiCurrent);
    void SetMode(long mode);
    void SetModeController(double modeController);
    void SetOnDataAvailable(double onDataAvailable);
    void SetOnLivelinessLost(double onLivelinessLost);
    void SetModelOneDifferentialPressureRequestK(double modelOneDifferentialPressureRequestK);
    void SetModelOneDifferentialPressureRequestTau(double modelOneDifferentialPressureRequestTau);
    void SetModelOneRateOfPenetrationRequestK(double modelOneRateOfPenetrationRequestK);
    void SetModelOneRateOfPenetrationRequestTau(double modelOneRateOfPenetrationRequestTau);
    void SetModelOneTorqueRequestK(double modelOneTorqueRequestK);
    void SetModelOneTorqueRequestTau(double modelOneTorqueRequestTau);
    void SetModelOneWeightOnBitRequestK(double modelOneWeightOnBitRequestK);
    void SetModelOneWeightOnBitRequestTau(double modelOneWeightOnBitRequestTau);
    void SetModelTwoDifferentialPressureRequestK(double modelTwoDifferentialPressureRequestK);
    void SetModelTwoDifferentialPressureRequestTau(double modelTwoDifferentialPressureRequestTau);
    void SetModelTwoRateOfPenetrationRequestK(double modelTwoRateOfPenetrationRequestK);
    void SetModelTwoRateOfPenetrationRequestTau(double modelTwoRateOfPenetrationRequestTau);
    void SetModelTwoTorqueRequestK(double modelTwoTorqueRequestK);
    void SetModelTwoTorqueRequestTau(double modelTwoTorqueRequestTau);
    void SetModelTwoWeightOnBitRequestK(double modelTwoWeightOnBitRequestK);
    void SetModelTwoWeightOnBitRequestTau(double modelTwoWeightOnBitRequestTau);
    void SetStatus(long status);
    void SetTuningDisable(bool tuningDisable);
    void SetTuningEnable(bool tuningEnable);
};

#endif // __AUTODRILLER_CONFIGURATION_REQUEST_PUBLISHER_H__
