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
    bool Initialize();
    bool PublishSample();

    // Topic getters
    void SetTimestamp(const DataTypes::Time timestamp);
    void SetMode(int32_t mode);
    void SetModeController(int32_t modeController);
    void SetModelReset(bool modelReset);
    void SetPipeInnerDiameter(double pipeInnerDiameter);
    void SetPipeOuterDiameter(double pipeOuterDiameter);
    void SetSlopeFilter(double slopeFilter);
    void SetTauMax(double tauMax);
    void SetTauMin(double tauMin);
    void SetTauMultiplier(double tauMultiplier);
    void SetDifferentialPressureInitializeK(double differentialPressureInitializeK);
    void SetDifferentialPressureInitializeTau(double differentialPressureInitializeTau);
    void SetDifferentialPressureInitializePreFilter(double differentialPressureInitializePreFilter);
    void SetDifferentialPressureR1(double differentialPressureR1);
    void SetDifferentialPressureR2(double differentialPressureR2);
    void SetRateOfPenetrationInitializeK(double rateOfPenetrationInitializeK);
    void SetRateOfPenetrationInitializeTau(double rateOfPenetrationInitializeTau);
    void SetRateOfPenetrationInitializePreFilter(double rateOfPenetrationInitializePreFilter);
    void SetRateOfPenetrationInitializeR1(double rateOfPenetrationInitializeR1);
    void SetRateOfPenetrationInitializeR2(double rateOfPenetrationInitializeR2);
    void SetTorqueInitializeK(double torqueInitializeK);
    void SetTorqueInitializeTau(double torqueInitializeTau);
    void SetTorqueInitializePreFilter(double torqueInitializePreFilter);
    void SetTorqueInitializeR1(double torqueInitializeR1);
    void SetTorqueInitializeR2(double torqueInitializeR2);
    void SetWeightOnBitInitializeK(double weightOnBitInitializeK);
    void SetWeightOnBitInitializeTau(double weightOnBitInitializeTau);
    void SetWeightOnBitInitializePreFilter(double weightOnBitInitializePreFilter);
    void SetWeightOnBitInitializeR1(double weightOnBitInitializeR1);
    void SetWeightOnBitInitializeR2(double weightOnBitInitializeR2);
    void SetDevMin(double devMin);
    void SetIntervalMin(double intervalMin);
    void SetDifferentialPressureFilter(double differentialPressureFilter);
    void SetDifferentialPressureKcMax(double differentialPressureKcMax);
    void SetDifferentialPressureKcMin(double differentialPressureKcMin);
    void SetDifferentialPressureTdMax(double differentialPressureTdMax);
    void SetDifferentialPressureTdMin(double differentialPressureTdMin);
    void SetDifferentialPressureTiMax(double differentialPressureTiMax);
    void SetDifferentialPressureTiMin(double differentialPressureTiMin);
    void SetDifferentialPressureD(double differentialPressureD);
    void SetDifferentialPressureEps(double differentialPressureEps);
    void SetDifferentialPressureEpsManual(bool differentialPressureEpsManual);
    void SetDifferentialPressureF(double differentialPressureF);
    void SetRateOfPenetrationFilter(double rateOfPenetrationFilter);
    void SetRateOfPenetrationKcMax(double rateOfPenetrationKcMax);
    void SetRateOfPenetrationKcMin(double rateOfPenetrationKcMin);
    void SetRateOfPenetrationTdMax(double rateOfPenetrationTdMax);
    void SetRateOfPenetrationTdMin(double rateOfPenetrationTdMin);
    void SetRateOfPenetrationTiMax(double rateOfPenetrationTiMax);
    void SetRateOfPenetrationTiMin(double rateOfPenetrationTiMin);
    void SetRateOfPenetrationD(double rateOfPenetrationD);
    void SetRateOfPenetrationEps(double rateOfPenetrationEps);
    void SetRateOfPenetrationEpsManual(bool rateOfPenetrationEpsManual);
    void SetRateOfPenetrationF(double rateOfPenetrationF);
    void SetWeightOnBitFilter(double weightOnBitFilter);
    void SetWeightOnBitKcMax(double weightOnBitKcMax);
    void SetWeightOnBitKcMin(double weightOnBitKcMin);
    void SetWeightOnBitTdMax(double weightOnBitTdMax);
    void SetWeightOnBitTdMin(double weightOnBitTdMin);
    void SetWeightOnBitTiMax(double weightOnBitTiMax);
    void SetWeightOnBitTiMin(double weightOnBitTiMin);
    void SetWeightOnBitD(double weightOnBitD);
    void SetWeightOnBitEps(double weightOnBitEps);
    void SetWeightOnBitEpsManual(bool weightOnBitEpsManual);
    void SetWeightOnBitF(double weightOnBitF);
    void SetTorqueFilter(double torqueFilter);
    void SetTorqueKcMax(double torqueKcMax);
    void SetTorqueKcMin(double torqueKcMin);
    void SetTorqueTdMax(double torqueTdMax);
    void SetTorqueTdMin(double torqueTdMin);
    void SetTorqueTiMax(double torqueTiMax);
    void SetTorqueTiMin(double torqueTiMin);
    void SetTorqueD(double torqueD);
    void SetTorqueEps(double torqueEps);
    void SetTorqueEpsManual(bool torqueEpsManual);
    void SetTorqueF(double torqueF);
    void SetStatus(int32_t status);
    void SetTuningDisable(bool tuningDisable);
    void SetTuningEnable(bool tuningEnable);
};

#endif // __AUTODRILLER_CONFIGURATION_STATE_PUBLISHER_H__
