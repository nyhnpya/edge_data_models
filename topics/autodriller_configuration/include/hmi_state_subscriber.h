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
#ifndef __NEC_CONTROL_HMI_STATE_SUBSCRIBER_H__
#define __NEC_CONTROL_HMI_STATE_SUBSCRIBER_H__

#include "subscriber.h"
#include "autodriller_configuration.h"
#include "autodriller_configurationSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

class CHmiStateSubscriber : public TSubscriber< nec::control::HmiState >
{
    public:
        CHmiStateSubscriber();
        ~CHmiStateSubscriber();
        
        bool Create(int32_t domain);
        bool ValidData();
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        
        /// @return CDdsUuid id
        CDdsUuid GetId();
        /// @return DataTypes::Time timestamp
        DataTypes::Time GetTimestamp();
        /// @return int32_t mode
        int32_t GetMode();
        /// @return int32_t modeController
        int32_t GetModeController();
        /// @return double pipeInnerDiameter
        double GetPipeInnerDiameter();
        /// @return double pipeOuterDiameter
        double GetPipeOuterDiameter();
        /// @return double slopeFilter
        double GetSlopeFilter();
        /// @return double tauMax
        double GetTauMax();
        /// @return double tauMin
        double GetTauMin();
        /// @return double tauMultiplier
        double GetTauMultiplier();
        /// @return double differentialPressureInitializeK
        double GetDifferentialPressureInitializeK();
        /// @return double differentialPressureInitializeTau
        double GetDifferentialPressureInitializeTau();
        /// @return double differentialPressureInitializePreFilter
        double GetDifferentialPressureInitializePreFilter();
        /// @return double differentialPressureR1
        double GetDifferentialPressureR1();
        /// @return double differentialPressureR2
        double GetDifferentialPressureR2();
        /// @return double rateOfPenetrationInitializeK
        double GetRateOfPenetrationInitializeK();
        /// @return double rateOfPenetrationInitializeTau
        double GetRateOfPenetrationInitializeTau();
        /// @return double rateOfPenetrationInitializePreFilter
        double GetRateOfPenetrationInitializePreFilter();
        /// @return double rateOfPenetrationInitializeR1
        double GetRateOfPenetrationInitializeR1();
        /// @return double rateOfPenetrationInitializeR2
        double GetRateOfPenetrationInitializeR2();
        /// @return double torqueInitializeK
        double GetTorqueInitializeK();
        /// @return double torqueInitializeTau
        double GetTorqueInitializeTau();
        /// @return double torqueInitializePreFilter
        double GetTorqueInitializePreFilter();
        /// @return double torqueInitializeR1
        double GetTorqueInitializeR1();
        /// @return double torqueInitializeR2
        double GetTorqueInitializeR2();
        /// @return double weightOnBitInitializeK
        double GetWeightOnBitInitializeK();
        /// @return double weightOnBitInitializeTau
        double GetWeightOnBitInitializeTau();
        /// @return double weightOnBitInitializePreFilter
        double GetWeightOnBitInitializePreFilter();
        /// @return double weightOnBitInitializeR1
        double GetWeightOnBitInitializeR1();
        /// @return double weightOnBitInitializeR2
        double GetWeightOnBitInitializeR2();
        /// @return double devMin
        double GetDevMin();
        /// @return double intervalMin
        double GetIntervalMin();
        /// @return double differentialPressureFilter
        double GetDifferentialPressureFilter();
        /// @return double differentialPressureKcMax
        double GetDifferentialPressureKcMax();
        /// @return double differentialPressureKcMin
        double GetDifferentialPressureKcMin();
        /// @return double differentialPressureTdMax
        double GetDifferentialPressureTdMax();
        /// @return double differentialPressureTdMin
        double GetDifferentialPressureTdMin();
        /// @return double differentialPressureTiMax
        double GetDifferentialPressureTiMax();
        /// @return double differentialPressureTiMin
        double GetDifferentialPressureTiMin();
        /// @return double differentialPressureD
        double GetDifferentialPressureD();
        /// @return double differentialPressureEps
        double GetDifferentialPressureEps();
        /// @return bool differentialPressureEpsManual
        bool GetDifferentialPressureEpsManual();
        /// @return double differentialPressureF
        double GetDifferentialPressureF();
        /// @return double rateOfPenetrationFilter
        double GetRateOfPenetrationFilter();
        /// @return double rateOfPenetrationKcMax
        double GetRateOfPenetrationKcMax();
        /// @return double rateOfPenetrationKcMin
        double GetRateOfPenetrationKcMin();
        /// @return double rateOfPenetrationTdMax
        double GetRateOfPenetrationTdMax();
        /// @return double rateOfPenetrationTdMin
        double GetRateOfPenetrationTdMin();
        /// @return double rateOfPenetrationTiMax
        double GetRateOfPenetrationTiMax();
        /// @return double rateOfPenetrationTiMin
        double GetRateOfPenetrationTiMin();
        /// @return double rateOfPenetrationD
        double GetRateOfPenetrationD();
        /// @return double rateOfPenetrationEps
        double GetRateOfPenetrationEps();
        /// @return bool rateOfPenetrationEpsManual
        bool GetRateOfPenetrationEpsManual();
        /// @return double rateOfPenetrationF
        double GetRateOfPenetrationF();
        /// @return double weightOnBitFilter
        double GetWeightOnBitFilter();
        /// @return double weightOnBitKcMax
        double GetWeightOnBitKcMax();
        /// @return double weightOnBitKcMin
        double GetWeightOnBitKcMin();
        /// @return double weightOnBitTdMax
        double GetWeightOnBitTdMax();
        /// @return double weightOnBitTdMin
        double GetWeightOnBitTdMin();
        /// @return double weightOnBitTiMax
        double GetWeightOnBitTiMax();
        /// @return double weightOnBitTiMin
        double GetWeightOnBitTiMin();
        /// @return double weightOnBitD
        double GetWeightOnBitD();
        /// @return double weightOnBitEps
        double GetWeightOnBitEps();
        /// @return bool weightOnBitEpsManual
        bool GetWeightOnBitEpsManual();
        /// @return double weightOnBitF
        double GetWeightOnBitF();
        /// @return double torqueFilter
        double GetTorqueFilter();
        /// @return double torqueKcMax
        double GetTorqueKcMax();
        /// @return double torqueKcMin
        double GetTorqueKcMin();
        /// @return double torqueTdMax
        double GetTorqueTdMax();
        /// @return double torqueTdMin
        double GetTorqueTdMin();
        /// @return double torqueTiMax
        double GetTorqueTiMax();
        /// @return double torqueTiMin
        double GetTorqueTiMin();
        /// @return double torqueD
        double GetTorqueD();
        /// @return double torqueEps
        double GetTorqueEps();
        /// @return bool torqueEpsManual
        bool GetTorqueEpsManual();
        /// @return double torqueF
        double GetTorqueF();
        /// @return int32_t status
        int32_t GetStatus();
        /// @return bool tuningEnabled
        bool GetTuningEnabled();

    protected:
        void DataAvailable(const nec::control::HmiState &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        nec::control::HmiState                                                m_data;
        DDS::SampleInfo                                                       m_sampleInfo;
        DDS::LivelinessChangedStatus                                          m_livelinessStatus;
        OnDataAvailableEvent                                                  m_pOnDataAvailable;
        OnDataDisposedEvent                                                   m_pOnDataDisposed;
        OnLivelinessChangedEvent                                              m_pOnLivelinessChanged;
};

#endif // __NEC_CONTROL_HMI_STATE_SUBSCRIBER_H__
