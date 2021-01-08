/*
 *  Copyright (c) 2019 Ensign Energy Incorporated
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
#ifndef __NEC_CONTROL_HMI_STATE_PUBLISHER_H__
#define __NEC_CONTROL_HMI_STATE_PUBLISHER_H__

#include "keyed_data_writer.h"
#include "autodriller_configuration.h"
#include "autodriller_configurationSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

class CHmiStatePublisher : public TKeyedDataWriter< nec::control::HmiState >
{
    public:
        CHmiStatePublisher();
        ~CHmiStatePublisher();
        
        bool Create(const std::string &publisher);
        bool PublishSample();
        
        /// @param CDdsUuid id
        void SetId(CDdsUuid id);
        /// @param DataTypes::Time timestamp
        void SetTimestamp(const DataTypes::Time timestamp);
        /// @param int32_t mode
        void SetMode(const int32_t mode);
        /// @param int32_t modeController
        void SetModeController(const int32_t modeController);
        /// @param double pipeInnerDiameter
        void SetPipeInnerDiameter(const double pipeInnerDiameter);
        /// @param double pipeOuterDiameter
        void SetPipeOuterDiameter(const double pipeOuterDiameter);
        /// @param double slopeFilter
        void SetSlopeFilter(const double slopeFilter);
        /// @param double tauMax
        void SetTauMax(const double tauMax);
        /// @param double tauMin
        void SetTauMin(const double tauMin);
        /// @param double tauMultiplier
        void SetTauMultiplier(const double tauMultiplier);
        /// @param double differentialPressureInitializeK
        void SetDifferentialPressureInitializeK(const double differentialPressureInitializeK);
        /// @param double differentialPressureInitializeTau
        void SetDifferentialPressureInitializeTau(const double differentialPressureInitializeTau);
        /// @param double differentialPressureInitializePreFilter
        void SetDifferentialPressureInitializePreFilter(const double differentialPressureInitializePreFilter);
        /// @param double differentialPressureR1
        void SetDifferentialPressureR1(const double differentialPressureR1);
        /// @param double differentialPressureR2
        void SetDifferentialPressureR2(const double differentialPressureR2);
        /// @param double rateOfPenetrationInitializeK
        void SetRateOfPenetrationInitializeK(const double rateOfPenetrationInitializeK);
        /// @param double rateOfPenetrationInitializeTau
        void SetRateOfPenetrationInitializeTau(const double rateOfPenetrationInitializeTau);
        /// @param double rateOfPenetrationInitializePreFilter
        void SetRateOfPenetrationInitializePreFilter(const double rateOfPenetrationInitializePreFilter);
        /// @param double rateOfPenetrationInitializeR1
        void SetRateOfPenetrationInitializeR1(const double rateOfPenetrationInitializeR1);
        /// @param double rateOfPenetrationInitializeR2
        void SetRateOfPenetrationInitializeR2(const double rateOfPenetrationInitializeR2);
        /// @param double torqueInitializeK
        void SetTorqueInitializeK(const double torqueInitializeK);
        /// @param double torqueInitializeTau
        void SetTorqueInitializeTau(const double torqueInitializeTau);
        /// @param double torqueInitializePreFilter
        void SetTorqueInitializePreFilter(const double torqueInitializePreFilter);
        /// @param double torqueInitializeR1
        void SetTorqueInitializeR1(const double torqueInitializeR1);
        /// @param double torqueInitializeR2
        void SetTorqueInitializeR2(const double torqueInitializeR2);
        /// @param double weightOnBitInitializeK
        void SetWeightOnBitInitializeK(const double weightOnBitInitializeK);
        /// @param double weightOnBitInitializeTau
        void SetWeightOnBitInitializeTau(const double weightOnBitInitializeTau);
        /// @param double weightOnBitInitializePreFilter
        void SetWeightOnBitInitializePreFilter(const double weightOnBitInitializePreFilter);
        /// @param double weightOnBitInitializeR1
        void SetWeightOnBitInitializeR1(const double weightOnBitInitializeR1);
        /// @param double weightOnBitInitializeR2
        void SetWeightOnBitInitializeR2(const double weightOnBitInitializeR2);
        /// @param double devMin
        void SetDevMin(const double devMin);
        /// @param double intervalMin
        void SetIntervalMin(const double intervalMin);
        /// @param double differentialPressureFilter
        void SetDifferentialPressureFilter(const double differentialPressureFilter);
        /// @param double differentialPressureKcMax
        void SetDifferentialPressureKcMax(const double differentialPressureKcMax);
        /// @param double differentialPressureKcMin
        void SetDifferentialPressureKcMin(const double differentialPressureKcMin);
        /// @param double differentialPressureTdMax
        void SetDifferentialPressureTdMax(const double differentialPressureTdMax);
        /// @param double differentialPressureTdMin
        void SetDifferentialPressureTdMin(const double differentialPressureTdMin);
        /// @param double differentialPressureTiMax
        void SetDifferentialPressureTiMax(const double differentialPressureTiMax);
        /// @param double differentialPressureTiMin
        void SetDifferentialPressureTiMin(const double differentialPressureTiMin);
        /// @param double differentialPressureD
        void SetDifferentialPressureD(const double differentialPressureD);
        /// @param double differentialPressureEps
        void SetDifferentialPressureEps(const double differentialPressureEps);
        /// @param bool differentialPressureEpsManual
        void SetDifferentialPressureEpsManual(const bool differentialPressureEpsManual);
        /// @param double differentialPressureF
        void SetDifferentialPressureF(const double differentialPressureF);
        /// @param double rateOfPenetrationFilter
        void SetRateOfPenetrationFilter(const double rateOfPenetrationFilter);
        /// @param double rateOfPenetrationKcMax
        void SetRateOfPenetrationKcMax(const double rateOfPenetrationKcMax);
        /// @param double rateOfPenetrationKcMin
        void SetRateOfPenetrationKcMin(const double rateOfPenetrationKcMin);
        /// @param double rateOfPenetrationTdMax
        void SetRateOfPenetrationTdMax(const double rateOfPenetrationTdMax);
        /// @param double rateOfPenetrationTdMin
        void SetRateOfPenetrationTdMin(const double rateOfPenetrationTdMin);
        /// @param double rateOfPenetrationTiMax
        void SetRateOfPenetrationTiMax(const double rateOfPenetrationTiMax);
        /// @param double rateOfPenetrationTiMin
        void SetRateOfPenetrationTiMin(const double rateOfPenetrationTiMin);
        /// @param double rateOfPenetrationD
        void SetRateOfPenetrationD(const double rateOfPenetrationD);
        /// @param double rateOfPenetrationEps
        void SetRateOfPenetrationEps(const double rateOfPenetrationEps);
        /// @param bool rateOfPenetrationEpsManual
        void SetRateOfPenetrationEpsManual(const bool rateOfPenetrationEpsManual);
        /// @param double rateOfPenetrationF
        void SetRateOfPenetrationF(const double rateOfPenetrationF);
        /// @param double weightOnBitFilter
        void SetWeightOnBitFilter(const double weightOnBitFilter);
        /// @param double weightOnBitKcMax
        void SetWeightOnBitKcMax(const double weightOnBitKcMax);
        /// @param double weightOnBitKcMin
        void SetWeightOnBitKcMin(const double weightOnBitKcMin);
        /// @param double weightOnBitTdMax
        void SetWeightOnBitTdMax(const double weightOnBitTdMax);
        /// @param double weightOnBitTdMin
        void SetWeightOnBitTdMin(const double weightOnBitTdMin);
        /// @param double weightOnBitTiMax
        void SetWeightOnBitTiMax(const double weightOnBitTiMax);
        /// @param double weightOnBitTiMin
        void SetWeightOnBitTiMin(const double weightOnBitTiMin);
        /// @param double weightOnBitD
        void SetWeightOnBitD(const double weightOnBitD);
        /// @param double weightOnBitEps
        void SetWeightOnBitEps(const double weightOnBitEps);
        /// @param bool weightOnBitEpsManual
        void SetWeightOnBitEpsManual(const bool weightOnBitEpsManual);
        /// @param double weightOnBitF
        void SetWeightOnBitF(const double weightOnBitF);
        /// @param double torqueFilter
        void SetTorqueFilter(const double torqueFilter);
        /// @param double torqueKcMax
        void SetTorqueKcMax(const double torqueKcMax);
        /// @param double torqueKcMin
        void SetTorqueKcMin(const double torqueKcMin);
        /// @param double torqueTdMax
        void SetTorqueTdMax(const double torqueTdMax);
        /// @param double torqueTdMin
        void SetTorqueTdMin(const double torqueTdMin);
        /// @param double torqueTiMax
        void SetTorqueTiMax(const double torqueTiMax);
        /// @param double torqueTiMin
        void SetTorqueTiMin(const double torqueTiMin);
        /// @param double torqueD
        void SetTorqueD(const double torqueD);
        /// @param double torqueEps
        void SetTorqueEps(const double torqueEps);
        /// @param bool torqueEpsManual
        void SetTorqueEpsManual(const bool torqueEpsManual);
        /// @param double torqueF
        void SetTorqueF(const double torqueF);
        /// @param int32_t status
        void SetStatus(const int32_t status);
        /// @param bool tuningEnabled
        void SetTuningEnabled(const bool tuningEnabled);
};

#endif // __NEC_CONTROL_HMI_STATE_PUBLISHER_H__
