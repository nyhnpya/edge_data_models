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
#ifndef __DRILLING_CALIBRATION_STATE_PUBLISHER_H__
#define __DRILLING_CALIBRATION_STATE_PUBLISHER_H__

#include "publisher.h"
#include "base_data_types.h"
#include "drilling_calibration.h"
#include "drilling_calibrationSupport.h"

class CDrillingCalibrationStatePublisher : public TPublisher< nec::control::DrillingCalibrationState >
{
 public:
    CDrillingCalibrationStatePublisher();
    ~CDrillingCalibrationStatePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    // Topic getters
    void SetTimestamp(const DataTypes::Time timestamp);
    void SetWobProportional(const double wobProportional);
    void SetWobIntegral(const double wobIntegral);
    void SetDifferentialPressureProportional(const double differentialPressureProportional);
    void SetDifferentialPressureIntegral(const double differentialPressureIntegral);
    void SetTorqueProportional(const double torqueProportional);
    void SetTorqueIntegral(const double torqueIntegral);
    void SetMinWobProportional(const double minWobProportional);
    void SetMaxWobProportional(const double maxWobProportional);
    void SetMinWobIntegral(const double minWobIntegral);
    void SetMaxWobIntegral(const double maxWobIntegral);
    void SetMinDifferentialPressureProportional(const double minDifferentialPressureProportional);
    void SetMaxDifferentialPressureProportional(const double maxDifferentialPressureProportional);
    void SetMinDifferentialPressureIntegral(const double minDifferentialPressureIntegral);
    void SetMaxDifferentialPressureIntegral(const double maxDifferentialPressureIntegral);
    void SetMinTorqueProportional(const double minTorqueProportional);
    void SetMaxTorqueProportional(const double maxTorqueProportional);
    void SetMinTorqueIntegral(const double minTorqueIntegral);
    void SetMaxTorqueIntegral(const double maxTorqueIntegral);
};

#endif // __DRILLING_CALIBRATION_STATE_PUBLISHER_H__
