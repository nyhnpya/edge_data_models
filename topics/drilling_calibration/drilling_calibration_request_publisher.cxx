#include "drilling_calibration_request_publisher.h"

CDrillingCalibrationRequestPublisher::CDrillingCalibrationRequestPublisher()
{
}

CDrillingCalibrationRequestPublisher::~CDrillingCalibrationRequestPublisher()
{
}

bool CDrillingCalibrationRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       nec::control::DRILLING_CALIBRATION_REQUEST,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CDrillingCalibrationRequestPublisher::Initialize()
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

bool CDrillingCalibrationRequestPublisher::PublishSample()
{
    return Publish();
}

void CDrillingCalibrationRequestPublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CDrillingCalibrationRequestPublisher::SetTimestamp(DataTypes::Time timestamp)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timestamp = timestamp;
    }
}

void CDrillingCalibrationRequestPublisher::SetWobProportional(double wobProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobProportional = wobProportional;
    }
}

void CDrillingCalibrationRequestPublisher::SetWobIntegral(double wobIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobIntegral = wobIntegral;
    }
}

void CDrillingCalibrationRequestPublisher::SetDifferentialPressureProportional(double differentialPressureProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureProportional = differentialPressureProportional;
    }
}

void CDrillingCalibrationRequestPublisher::SetDifferentialPressureIntegral(double differentialPressureIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureIntegral = differentialPressureIntegral;
    }
}

void CDrillingCalibrationRequestPublisher::SetTorqueProportional(double torqueProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueProportional = torqueProportional;
    }
}

void CDrillingCalibrationRequestPublisher::SetTorqueIntegral(double torqueIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueIntegral = torqueIntegral;
    }
}

