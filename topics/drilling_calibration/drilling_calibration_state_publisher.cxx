#include "drilling_calibration_state_publisher.h"

CDrillingCalibrationStatePublisher::CDrillingCalibrationStatePublisher()
{
}

CDrillingCalibrationStatePublisher::~CDrillingCalibrationStatePublisher()
{
        if (m_pDataInstance != nullptr)
        {
            DDS_String_free(m_pDataInstance->id);
        }
}

bool CDrillingCalibrationStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       nec::control::DRILLING_CALIBRATION_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CDrillingCalibrationStatePublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        uuid.GenerateUuid();
        m_pDataInstance->id = DDS_String_dup(uuid.c_str());
        retVal = true;
    }

    return retVal;
}

bool CDrillingCalibrationStatePublisher::PublishSample()
{
    DDS_Time_t currentTime;

    if (m_pDataInstance != nullptr)
    {
        GetParticipant()->get_current_time(currentTime);
        m_pDataInstance->timestamp.sec = currentTime.sec;
        m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    }

    return Publish();
}

void CDrillingCalibrationStatePublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CDrillingCalibrationStatePublisher::SetTimestamp(DataTypes::Time timestamp)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timestamp = timestamp;
    }
}

void CDrillingCalibrationStatePublisher::SetWobProportional(double wobProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobProportional = wobProportional;
    }
}

void CDrillingCalibrationStatePublisher::SetWobIntegral(double wobIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobIntegral = wobIntegral;
    }
}

void CDrillingCalibrationStatePublisher::SetDifferentialPressureProportional(double differentialPressureProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureProportional = differentialPressureProportional;
    }
}

void CDrillingCalibrationStatePublisher::SetDifferentialPressureIntegral(double differentialPressureIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureIntegral = differentialPressureIntegral;
    }
}

void CDrillingCalibrationStatePublisher::SetTorqueProportional(double torqueProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueProportional = torqueProportional;
    }
}

void CDrillingCalibrationStatePublisher::SetTorqueIntegral(double torqueIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueIntegral = torqueIntegral;
    }
}

void CDrillingCalibrationStatePublisher::SetMinWobProportional(double minWobProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minWobProportional = minWobProportional;
    }
}

void CDrillingCalibrationStatePublisher::SetMaxWobProportional(double maxWobProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxWobProportional = maxWobProportional;
    }
}

void CDrillingCalibrationStatePublisher::SetMinWobIntegral(double minWobIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minWobIntegral = minWobIntegral;
    }
}

void CDrillingCalibrationStatePublisher::SetMaxWobIntegral(double maxWobIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxWobIntegral = maxWobIntegral;
    }
}

void CDrillingCalibrationStatePublisher::SetMinDifferentialPressureProportional(double minDifferentialPressureProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minDifferentialPressureProportional = minDifferentialPressureProportional;
    }
}

void CDrillingCalibrationStatePublisher::SetMaxDifferentialPressureProportional(double maxDifferentialPressureProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxDifferentialPressureProportional = maxDifferentialPressureProportional;
    }
}

void CDrillingCalibrationStatePublisher::SetMinDifferentialPressureIntegral(double minDifferentialPressureIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minDifferentialPressureIntegral = minDifferentialPressureIntegral;
    }
}

void CDrillingCalibrationStatePublisher::SetMaxDifferentialPressureIntegral(double maxDifferentialPressureIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxDifferentialPressureIntegral = maxDifferentialPressureIntegral;
    }
}

void CDrillingCalibrationStatePublisher::SetMinTorqueProportional(double minTorqueProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minTorqueProportional = minTorqueProportional;
    }
}

void CDrillingCalibrationStatePublisher::SetMaxTorqueProportional(double maxTorqueProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxTorqueProportional = maxTorqueProportional;
    }
}

void CDrillingCalibrationStatePublisher::SetMinTorqueIntegral(double minTorqueIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minTorqueIntegral = minTorqueIntegral;
    }
}

void CDrillingCalibrationStatePublisher::SetMaxTorqueIntegral(double maxTorqueIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxTorqueIntegral = maxTorqueIntegral;
    }
}

