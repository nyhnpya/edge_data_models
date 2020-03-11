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

#include "publisher.h"
#include "autodriller_configuration.h"
#include "autodriller_configurationSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

class CHmiRequestPublisher : public TPublisher< nec::control::HmiRequest >
{
    public:
        CHmiRequestPublisher();
        ~CHmiRequestPublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        /// @param CDdsUuid id
        void SetId(CDdsUuid id);
        /// @param DataTypes::Time timestamp
        void SetTimestamp(const DataTypes::Time timestamp);
        /// @param int32_t mode
        void SetMode(const int32_t mode);
        /// @param double modeController
        void SetModeController(const double modeController);
        /// @param double modelTwoDifferentialPressureRequestK
        void SetModelTwoDifferentialPressureRequestK(const double modelTwoDifferentialPressureRequestK);
        /// @param double modelTwoDifferentialPressureRequestTau
        void SetModelTwoDifferentialPressureRequestTau(const double modelTwoDifferentialPressureRequestTau);
        /// @param double modelTwoRateOfPenetrationRequestK
        void SetModelTwoRateOfPenetrationRequestK(const double modelTwoRateOfPenetrationRequestK);
        /// @param double modelTwoRateOfPenetrationRequestTau
        void SetModelTwoRateOfPenetrationRequestTau(const double modelTwoRateOfPenetrationRequestTau);
        /// @param double modelTwoTorqueRequestK
        void SetModelTwoTorqueRequestK(const double modelTwoTorqueRequestK);
        /// @param double modelTwoTorqueRequestTau
        void SetModelTwoTorqueRequestTau(const double modelTwoTorqueRequestTau);
        /// @param double modelTwoWeightOnBitRequestK
        void SetModelTwoWeightOnBitRequestK(const double modelTwoWeightOnBitRequestK);
        /// @param double modelTwoWeightOnBitRequestTau
        void SetModelTwoWeightOnBitRequestTau(const double modelTwoWeightOnBitRequestTau);
        /// @param int32_t status
        void SetStatus(const int32_t status);
        /// @param bool tuningEnable
        void SetTuningEnable(const bool tuningEnable);
};

#endif // __NEC_CONTROL_HMI_REQUEST_PUBLISHER_H__
