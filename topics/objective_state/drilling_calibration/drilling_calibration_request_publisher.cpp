#include "dds_uuid.h"
#include "drilling_calibration_request_publisher.h"

CDrillingCalibrationRequestPublisher::CDrillingCalibrationRequestPublisher()
{
}

CDrillingCalibrationRequestPublisher::~CDrillingCalibrationRequestPublisher()
{
}

bool CDrillingCalibrationRequestPublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
}

void CDrillingCalibrationRequestPublisher::SetObjectiveId(const DataTypes::Uuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId);
    }
}

void CDrillingCalibrationRequestPublisher::SetTimestamp(const DataTypes::Time timestamp)
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

void CDrillingCalibrationRequestPublisher::SetWobProportional(const double wobProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobProportional = wobProportional;
    }
    else
    {
        LOG_ERROR("Failed to set wob proportional on uninitialized sample");
    }
}

void CDrillingCalibrationRequestPublisher::SetWobIntegral(const double wobIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobIntegral = wobIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set wob integral on uninitialized sample");
    }
}

void CDrillingCalibrationRequestPublisher::SetDifferentialPressureProportional(const double differentialPressureProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureProportional = differentialPressureProportional;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure proportional on uninitialized sample");
    }
}

void CDrillingCalibrationRequestPublisher::SetDifferentialPressureIntegral(const double differentialPressureIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureIntegral = differentialPressureIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure integral on uninitialized sample");
    }
}

void CDrillingCalibrationRequestPublisher::SetTorqueProportional(const double torqueProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueProportional = torqueProportional;
    }
    else
    {
        LOG_ERROR("Failed to set torque proportional on uninitialized sample");
    }
}

void CDrillingCalibrationRequestPublisher::SetTorqueIntegral(const double torqueIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueIntegral = torqueIntegral;
    }
    else
    {
        LOG_ERROR("Failed to set torque integral on uninitialized sample");
    }
}

bool CDrillingCalibrationRequestPublisher::PublishSample()
{
    bool bRetVal = false;

    DDS_Time_t currentTime;

    GetParticipant()->get_current_time(currentTime);
    m_pDataInstance->timestamp.sec = currentTime.sec;
    m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    bRetVal = Publish();

    return bRetVal;
}

bool CDrillingCalibrationRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              nec::control::DRILLING_CALIBRATION_REQUEST,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
