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
#ifndef __NEC_CONTROL_HMI_REQUEST_PUBLISHER_H__
#define __NEC_CONTROL_HMI_REQUEST_PUBLISHER_H__

#include "keyed_data_writer.h"
#include "autodriller_configuration.h"
#include "autodriller_configurationSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

class CHmiRequestPublisher : public TKeyedDataWriter< nec::control::HmiRequest >
{
    public:
        CHmiRequestPublisher();
        ~CHmiRequestPublisher();
        
        bool Create(const std::string &publisher);
        bool PublishSample();
        
        /// @param CDdsUuid id
        void SetId(CDdsUuid id);
        /// @param DataTypes::Time timestamp
        void SetTimestamp(const DataTypes::Time timestamp);
        /// @param int32_t mode
        void SetMode(const int32_t mode);
        /// @param double modeController
        void SetModeController(const double modeController);
        /// @param double differentialPressureRequestK
        void SetDifferentialPressureRequestK(const double differentialPressureRequestK);
        /// @param double differentialPressureRequestTau
        void SetDifferentialPressureRequestTau(const double differentialPressureRequestTau);
        /// @param double rateOfPenetrationRequestK
        void SetRateOfPenetrationRequestK(const double rateOfPenetrationRequestK);
        /// @param double rateOfPenetrationRequestTau
        void SetRateOfPenetrationRequestTau(const double rateOfPenetrationRequestTau);
        /// @param double torqueRequestK
        void SetTorqueRequestK(const double torqueRequestK);
        /// @param double torqueRequestTau
        void SetTorqueRequestTau(const double torqueRequestTau);
        /// @param double weightOnBitRequestK
        void SetWeightOnBitRequestK(const double weightOnBitRequestK);
        /// @param double weightOnBitRequestTau
        void SetWeightOnBitRequestTau(const double weightOnBitRequestTau);
        /// @param int32_t status
        void SetStatus(const int32_t status);
        /// @param bool tuningEnable
        void SetTuningEnable(const bool tuningEnable);
};

#endif // __NEC_CONTROL_HMI_REQUEST_PUBLISHER_H__
