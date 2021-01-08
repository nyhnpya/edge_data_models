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
#ifndef __NEC_CONTROL_DRILLING_CALIBRATION_REQUEST_PUBLISHER_H__
#define __NEC_CONTROL_DRILLING_CALIBRATION_REQUEST_PUBLISHER_H__

#include "keyed_data_writer.h"
#include "drilling_calibration.h"
#include "drilling_calibrationSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

class CDrillingCalibrationRequestPublisher : public TKeyedDataWriter< nec::control::DrillingCalibrationRequest >
{
    public:
        CDrillingCalibrationRequestPublisher();
        ~CDrillingCalibrationRequestPublisher();
        
        bool Create(const std::string &publisher);
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
};

#endif // __NEC_CONTROL_DRILLING_CALIBRATION_REQUEST_PUBLISHER_H__
