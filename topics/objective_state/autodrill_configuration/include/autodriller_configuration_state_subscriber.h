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
    typedef std::function<void(const AutoDrillerConfiguration::HmiState &data)> OnDataAvailableEvent;

    CAutoDrillerConfigurationStateSubscriber();
    ~CAutoDrillerConfigurationStateSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    bool ValidData();

    // Topic getters
    bool GetId(DataTypes::Uuid &id);
    bool GetTimestamp(DataTypes::Time &timestamp);
    bool GetMode(double &mode);
    bool GetmodeController(double &modeController);
    bool GetModelReset(double &modelReset);
    bool GetPipeInnerDiameter(double &pipeInnerDiameter);
    bool GetPipeOuterDiameter(double &pipeOuterDiameter);
    bool GetDifferentialPressureInitializeK(double &differentialPressureInitializeK);
    bool GetDifferentialPressureInitializeTau(double &differentialPressureInitializeTau);
    bool GetDifferentialPressurePreFilter(double &differentialPressurePreFilter);
    bool GetDifferentialPressureR1(double &differentialPressureR1);
    bool GetDifferentialPressureR2(double &differentialPressureR2);
    bool GetRateOfPenetrationInitializeK(double &rateOfPenetrationInitializeK);
    bool GetRateOfPenetrationInitializeTau(double &rateOfPenetrationInitializeTau);
    bool GetRateOfPenetrationInitializePreFilter(double &rateOfPenetrationInitializePreFilter);
    bool GetRateOfPenetrationInitializeR1(double &rateOfPenetrationInitializeR1);
    bool GetRateOfPenetrationInitializeR2(double &rateOfPenetrationInitializeR2);
    bool GetTorqueInitializeK(double &torqueInitializeK);
    bool GetTorqueInitializeTau(double &torqueInitializeTau);
    bool GetTorqueInitializePreFilter(double &torqueInitializePreFilter);
    bool GetTorqueInitializeR1(double &torqueInitializeR1);
    bool GetTorqueInitializeR2(double &torqueInitializeR2);
    bool GetWeightOnBitInitializeK(double &weightOnBitInitializeK);
    bool GetWeightOnBitInitializeTau(double &weightOnBitInitializeTau);
    bool GetWeightOnBitInitializePreFilter(double &weightOnBitInitializePreFilter);
    bool GetWeightOnBitInitializeR1(double &weightOnBitInitializeR1);
    bool GetWeightOnBitInitializeR2(double &weightOnBitInitializeR2);
    bool GetDevMin(double &devMin);
    bool GetIntervalMin(double &intervalMin);
    bool GetDifferentialPressureFilter(double &differentialPressureFilter);
    bool GetDifferentialPressureKcMax(double &differentialPressureKcMax);
    bool GetDifferentialPressureKcMin(double &differentialPressureKcMin);
    bool GetDifferentialPressureTdMax(double &differentialPressureTdMax);
    bool GetDifferentialPressureTdMin(double &differentialPressureTdMin);
    bool GetDifferentialPressureTiMax(double &differentialPressureTiMax);
    bool GetDifferentialPressureTiMin(double &differentialPressureTiMin);
    bool GetDifferentialPressureD(double &differentialPressureD);
    bool GetDifferentialPressureEps(double &differentialPressureEps);
    bool GetDifferentialPressureEpsManual(double &differentialPressureEpsManual);
    bool GetDifferentialPressureF(double &differentialPressureF);
    bool GetRateOfPenetrationFilter(double &rateOfPenetrationFilter);
    bool GetRateOfPenetrationKcMax(double &rateOfPenetrationKcMax);
    bool GetRateOfPenetrationKcMin(double &rateOfPenetrationKcMin);
    bool GetRateOfPenetrationTdMax(double &rateOfPenetrationTdMax);
    bool GetRateOfPenetrationTdMin(double &rateOfPenetrationTdMin);
    bool GetRateOfPenetrationTiMax(double &rateOfPenetrationTiMax);
    bool GetRateOfPenetrationTiMin(double &rateOfPenetrationTiMin);
    bool GetRateOfPenetrationD(double &rateOfPenetrationD);
    bool GetRateOfPenetrationEps(double &rateOfPenetrationEps);
    bool GetRateOfPenetrationEpsManual(double &rateOfPenetrationEpsManual);
    bool GetRateOfPenetrationF(double &rateOfPenetrationF);
    bool GetWeightOnBitFilter(double &weightOnBitFilter);
    bool GetWeightOnBitKcMax(double &weightOnBitKcMax);
    bool GetWeightOnBitKcMin(double &weightOnBitKcMin);
    bool GetWeightOnBitTdMax(double &weightOnBitTdMax);
    bool GetWeightOnBitTdMin(double &weightOnBitTdMin);
    bool GetWeightOnBitTiMax(double &weightOnBitTiMax);
    bool GetWeightOnBitTiMin(double &weightOnBitTiMin);
    bool GetWeightOnBitD(double &weightOnBitD);
    bool GetWeightOnBitEps(double &weightOnBitEps);
    bool GetWeightOnBitEpsManual(double &weightOnBitEpsManual);
    bool GetWeightOnBitF(double &weightOnBitF);
    bool GetTorqueFilter(double &torqueFilter);
    bool GetTorqueKcMax(double &torqueKcMax);
    bool GetTorqueKcMin(double &torqueKcMin);
    bool GetTorqueTdMax(double &torqueTdMax);
    bool GetTorqueTdMin(double &torqueTdMin);
    bool GetTorqueTiMax(double &torqueTiMax);
    bool GetTorqueTiMin(double &torqueTiMin);
    bool GetTorqueD(double &torqueD);
    bool GetTorqueEps(double &torqueEps);
    bool GetTorqueEpsManual(double &torqueEpsManual);
    bool GetTorqueF(double &torqueF);
    bool GetStatus(double &status);
    bool GetTuningDisable(double &tuningDisable);
    bool GetTuningEnable(double &tuningEnable);

 protected:
    void DataAvailable(const AutoDrillerConfiguration::HmiState &data,
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);

 private:
    AutoDrillerConfiguration::HmiState m_data;
    DDS::SampleInfo                    m_sampleInfo;
    OnDataAvailableEvent               m_pOnDataAvailable;
};

#endif // __AUTODRILLER_CONFIGURATION_STATE_SUBSCRIBER_H__
