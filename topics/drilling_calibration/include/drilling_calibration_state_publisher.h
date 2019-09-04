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
#ifndef __NEC_CONTROL_DRILLING_CALIBRATION_STATE_PUBLISHER_H__
#define __NEC_CONTROL_DRILLING_CALIBRATION_STATE_PUBLISHER_H__

#include "publisher.h"
#include "drilling_calibration.h"
#include "drilling_calibrationSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

class CDrillingCalibrationStatePublisher : public TPublisher< nec::control::DrillingCalibrationState >
{
    public:
        CDrillingCalibrationStatePublisher();
        ~CDrillingCalibrationStatePublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        /// @param CDdsUuid id
        void SetId(CDdsUuid id);
        /// @param DataTypes::Time timestamp
        void SetTimestamp(const DataTypes::Time timestamp);
        /// @param double wobProportional
        void SetWobProportional(const double wobProportional);
        /// @param double wobIntegral
        void SetWobIntegral(const double wobIntegral);
        /// @param double differentialPressureProportional
        void SetDifferentialPressureProportional(const double differentialPressureProportional);
        /// @param double differentialPressureIntegral
        void SetDifferentialPressureIntegral(const double differentialPressureIntegral);
        /// @param double torqueProportional
        void SetTorqueProportional(const double torqueProportional);
        /// @param double torqueIntegral
        void SetTorqueIntegral(const double torqueIntegral);
        /// @param double minWobProportional
        void SetMinWobProportional(const double minWobProportional);
        /// @param double maxWobProportional
        void SetMaxWobProportional(const double maxWobProportional);
        /// @param double minWobIntegral
        void SetMinWobIntegral(const double minWobIntegral);
        /// @param double maxWobIntegral
        void SetMaxWobIntegral(const double maxWobIntegral);
        /// @param double minDifferentialPressureProportional
        void SetMinDifferentialPressureProportional(const double minDifferentialPressureProportional);
        /// @param double maxDifferentialPressureProportional
        void SetMaxDifferentialPressureProportional(const double maxDifferentialPressureProportional);
        /// @param double minDifferentialPressureIntegral
        void SetMinDifferentialPressureIntegral(const double minDifferentialPressureIntegral);
        /// @param double maxDifferentialPressureIntegral
        void SetMaxDifferentialPressureIntegral(const double maxDifferentialPressureIntegral);
        /// @param double minTorqueProportional
        void SetMinTorqueProportional(const double minTorqueProportional);
        /// @param double maxTorqueProportional
        void SetMaxTorqueProportional(const double maxTorqueProportional);
        /// @param double minTorqueIntegral
        void SetMinTorqueIntegral(const double minTorqueIntegral);
        /// @param double maxTorqueIntegral
        void SetMaxTorqueIntegral(const double maxTorqueIntegral);
};

#endif // __NEC_CONTROL_DRILLING_CALIBRATION_STATE_PUBLISHER_H__
