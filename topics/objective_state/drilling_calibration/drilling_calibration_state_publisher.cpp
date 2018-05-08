#include "dds_uuid.h"
#include "drilling_calibration_state_publisher.h"

CDrillingCalibrationStatePublisher::CDrillingCalibrationStatePublisher()
{
}

CDrillingCalibrationStatePublisher::~CDrillingCalibrationStatePublisher()
{
}

bool CDrillingCalibrationStatePublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
}

void CDrillingCalibrationStatePublisher::SetTimestamp(const DataTypes::Time timestamp)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timestamp.sec = timestamp.sec;
        m_pDataInstance->timestamp.nanosec = timestamp.nanosec;
    }
    else
    {
        LOG_ERROR("Failed to set timestamp because of uninitialized sample");
    }
}

void CDrillingCalibrationStatePublisher::SetWobProportional(const double wobProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobProportional = wobProportional;
    }
    else
    {
        LOG_ERROR("Failed to set wob proportional because of uninitialized sample");
    }
}

void CDrillingCalibrationStatePublisher::SetWobIntegral(const double wobIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobIntegral = wobIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set wob integral because of uninitialized sample");
    }
}

void CDrillingCalibrationStatePublisher::SetDifferentialPressureProportional(const double differentialPressureProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureProportional = differentialPressureProportional;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure proportional because of uninitialized sample");
    }
}

void CDrillingCalibrationStatePublisher::SetDifferentialPressureIntegral(const double differentialPressureIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureIntegral = differentialPressureIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure integral because of uninitialized sample");
    }
}

void CDrillingCalibrationStatePublisher::SetTorqueProportional(const double torqueProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueProportional = torqueProportional;
    }
    else
    {
        LOG_ERROR("Failed to set torque proportional because of uninitialized sample");
    }
}

void CDrillingCalibrationStatePublisher::SetTorqueIntegral(const double torqueIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueIntegral = torqueIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set torque integral because of uninitialized sample");
    }
}

void CDrillingCalibrationStatePublisher::SetMinWobProportional(const double minWobProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minWobProportional = minWobProportional;
    }
    else
    {
        LOG_ERROR("Failed to set wob proportional because of uninitialized sample");
    }
}

void CDrillingCalibrationStatePublisher::SetMaxWobProportional(const double maxWobProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxWobProportional = maxWobProportional;
    }
    else
    {
        LOG_ERROR("Failed to set wob proportional because of uninitialized sample");
    }
}

void CDrillingCalibrationStatePublisher::SetMinWobIntegral(const double minWobIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minWobIntegral = minWobIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set wob integral because of uninitialized sample");
    }
}

void CDrillingCalibrationStatePublisher::SetMaxWobIntegral(const double maxWobIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxWobIntegral = maxWobIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set wob integral because of uninitialized sample");
    }
}

void CDrillingCalibrationStatePublisher::SetMinDifferentialPressureProportional(const double minDifferentialPressureProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minDifferentialPressureProportional = minDifferentialPressureProportional;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure proportional because of uninitialized sample");
    }
}

void CDrillingCalibrationStatePublisher::SetMaxDifferentialPressureProportional(const double maxDifferentialPressureProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxDifferentialPressureProportional = maxDifferentialPressureProportional;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure proportional because of uninitialized sample");
    }
}

void CDrillingCalibrationStatePublisher::SetMinDifferentialPressureIntegral(const double minDifferentialPressureIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minDifferentialPressureIntegral = minDifferentialPressureIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure integral because of uninitialized sample");
    }
}

void CDrillingCalibrationStatePublisher::SetMaxDifferentialPressureIntegral(const double maxDifferentialPressureIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxDifferentialPressureIntegral = maxDifferentialPressureIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure integral because of uninitialized sample");
    }
}

void CDrillingCalibrationStatePublisher::SetMinTorqueProportional(const double minTorqueProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minTorqueProportional = minTorqueProportional;
    }
    else
    {
        LOG_ERROR("Failed to set torque proportional because of uninitialized sample");
    }
}

void CDrillingCalibrationStatePublisher::SetMaxTorqueProportional(const double maxTorqueProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxTorqueProportional = maxTorqueProportional;
    }
    else
    {
        LOG_ERROR("Failed to set torque proportional because of uninitialized sample");
    }
}

void CDrillingCalibrationStatePublisher::SetMinTorqueIntegral(const double minTorqueIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minTorqueIntegral = minTorqueIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set torque integral because of uninitialized sample");
    }
}

void CDrillingCalibrationStatePublisher::SetMaxTorqueIntegral(const double maxTorqueIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxTorqueIntegral = maxTorqueIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set torque integral because of uninitialized sample");
    }
}

bool CDrillingCalibrationStatePublisher::PublishSample()
{
    bool bRetVal = false;

    DDS_Time_t currentTime;

    GetParticipant()->get_current_time(currentTime);
    m_pDataInstance->timestamp.sec = currentTime.sec;
    m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    bRetVal = Publish();

    return bRetVal;
}

bool CDrillingCalibrationStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              nec::control::DRILLING_CALIBRATION_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
