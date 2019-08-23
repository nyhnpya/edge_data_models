/*
 *  Copyright (c) 2017 Ensign Energy Incorporated
 *  All Rights Reserved.
 *
 * NOTICE:  All information contained herein is, and remains
 * the property of Ensign Energy Incorporated and its suppliers,
 * if any.  The intellectual and technical concepts contained
 * herein are proprietary to Ensign Energy Incorporated
 * and its suppliers and may be covered by U.S. and Foreign Patents,
 * patents in process, and are protected by trade secret or copyright law.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from Ensign Energy Incorporated.
 */
#ifndef __AUTODRILLER_CONFIGURATION_REQUEST_PUBLISHER_H__
#define __AUTODRILLER_CONFIGURATION_REQUEST_PUBLISHER_H__

#include "publisher.h"
#include "base_data_types.h"
#include "autodriller_configuration.h"
#include "autodriller_configurationSupport.h"

class CAutoDrillerConfigurationRequestPublisher : public TPublisher< nec::control::HmiRequest >
{
 public:
    CAutoDrillerConfigurationRequestPublisher();
    ~CAutoDrillerConfigurationRequestPublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    // Topic getters
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
    void SetModelTwoDifferentialPressureRequestK(double modelTwoDifferentialPressureRequestK);
    void SetModelTwoDifferentialPressureRequestTau(double modelTwoDifferentialPressureRequestTau);
    void SetModelTwoRateOfPenetrationRequestK(double modelTwoRateOfPenetrationRequestK);
    void SetModelTwoRateOfPenetrationRequestTau(double modelTwoRateOfPenetrationRequestTau);
    void SetModelTwoTorqueRequestK(double modelTwoTorqueRequestK);
    void SetModelTwoTorqueRequestTau(double modelTwoTorqueRequestTau);
    void SetModelTwoWeightOnBitRequestK(double modelTwoWeightOnBitRequestK);
    void SetModelTwoWeightOnBitRequestTau(double modelTwoWeightOnBitRequestTau);
    void SetStatus(long status);
    void SetTuningEnable(bool tuningEnable);
};

#endif // __AUTODRILLER_CONFIGURATION_REQUEST_PUBLISHER_H__
