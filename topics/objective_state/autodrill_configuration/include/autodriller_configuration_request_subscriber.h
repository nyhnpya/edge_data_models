#ifndef __AUTODRILLER_CONFIGURATION_REQUEST_SUBSCRIBER_H__
#define __AUTODRILLER_CONFIGURATION_REQUEST_SUBSCRIBER_H__

#include "subscriber.h"
#include "base_data_types.h"
#include "autodriller_configuration.h"
#include "autodriller_configurationSupport.h"

class CAutoDrillerConfigurationRequestSubscriber : public TSubscriber< nec::control::HmiRequest >
{
 public:
    typedef std::function<void(const nec::control::HmiRequest &data)> OnDataAvailableEvent;

    CAutoDrillerConfigurationRequestSubscriber();
    ~CAutoDrillerConfigurationRequestSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    bool ValidData();

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
    bool GetModelTwoDifferentialPressureRequestK(double &modelTwoDifferentialPressureRequestK);
    bool GetModelTwoDifferentialPressureRequestTau(double &modelTwoDifferentialPressureRequestTau);
    bool GetModelTwoRateOfPenetrationRequestK(double &modelTwoRateOfPenetrationRequestK);
    bool GetModelTwoRateOfPenetrationRequestTau(double &modelTwoRateOfPenetrationRequestTau);
    bool GetModelTwoTorqueRequestK(double &modelTwoTorqueRequestK);
    bool GetModelTwoTorqueRequestTau(double &modelTwoTorqueRequestTau);
    bool GetModelTwoWeightOnBitRequestK(double &modelTwoWeightOnBitRequestK);
    bool GetModelTwoWeightOnBitRequestTau(double &modelTwoWeightOnBitRequestTau);
    bool GetStatus(long &status);
    bool GetTuningEnable(bool &tuningEnable);

 protected:
    void DataAvailable(const nec::control::HmiRequest &data,
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

 private:
    nec::control::HmiRequest     m_data;
    DDS::SampleInfo              m_sampleInfo;
    DDS::LivelinessChangedStatus m_livelinessStatus;
    OnDataAvailableEvent         m_pOnDataAvailable;
    OnSubscriptionMatchedEvent   m_pOnSubscriptionMatched;
    OnDataDisposedEvent          m_pOnDataDisposed;
    OnLivelinessChangedEvent     m_pOnLivelinessChanged;
};

#endif // __AUTODRILLER_CONFIGURATION_REQUEST_SUBSCRIBER_H__
