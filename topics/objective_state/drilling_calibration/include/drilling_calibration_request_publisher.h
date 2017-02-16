#ifndef __DRILLING_CALIBRATION_REQUEST_PUBLISHER_H__
#define __DRILLING_CALIBRATION_REQUEST_PUBLISHER_H__

#include "publisher.h"
#include "base_data_types.h"
#include "drilling_calibration.h"
#include "drilling_calibrationSupport.h"

class CDrillingCalibrationRequestPublisher : public TPublisher< CalibrationHoisting::DrillingCalibrationRequest >
{
 public:
    CDrillingCalibrationRequestPublisher();
    ~CDrillingCalibrationRequestPublisher();

    bool Create(int32_t domain);
    bool PublishSample();

    // Topic getters
    void SetId(const DataTypes::Uuid id);
    void SetTimestamp(const DataTypes::Time timestamp);
    void SetWobProportional(const double wobProportional);
    void SetWobIntegral(const double wobIntegral);
    void SetDifferentialPressureProportional(const double differentialPressureProportional);
    void SetDifferentialPressureIntegral(const double differentialPressureIntegral);
    void SetTorqueProportional(const double torqueProportional);
    void SetTorqueIntegral(const double torqueIntegral);
};

#endif // __DRILLING_CALIBRATION_REQUEST_PUBLISHER_H__
