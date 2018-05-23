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
#ifndef __DRILLING_CALIBRATION_REQUEST_PUBLISHER_H__
#define __DRILLING_CALIBRATION_REQUEST_PUBLISHER_H__

#include "publisher.h"
#include "base_data_types.h"
#include "drilling_calibration.h"
#include "drilling_calibrationSupport.h"

class CDrillingCalibrationRequestPublisher : public TPublisher< nec::control::DrillingCalibrationRequest >
{
 public:
    CDrillingCalibrationRequestPublisher();
    ~CDrillingCalibrationRequestPublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    // Topic getters
    void SetObjectiveId(const DataTypes::Uuid objectiveId);
    void SetTimestamp(const DataTypes::Time timestamp);
    void SetWobProportional(const double wobProportional);
    void SetWobIntegral(const double wobIntegral);
    void SetDifferentialPressureProportional(const double differentialPressureProportional);
    void SetDifferentialPressureIntegral(const double differentialPressureIntegral);
    void SetTorqueProportional(const double torqueProportional);
    void SetTorqueIntegral(const double torqueIntegral);
};

#endif // __DRILLING_CALIBRATION_REQUEST_PUBLISHER_H__
