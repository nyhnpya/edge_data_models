#include "drilling_calibration_request_publisher.h"

CDrillingCalibrationRequestPublisher::CDrillingCalibrationRequestPublisher()
{
}

CDrillingCalibrationRequestPublisher::~CDrillingCalibrationRequestPublisher()
{
}

bool CDrillingCalibrationRequestPublisher::Create(const std::string &publisher)
{
    return TKeyedDataWriter::Create(publisher,
                                    nec::control::DRILLING_CALIBRATION_REQUEST,
                                    "EdgeBaseLibrary",
                                    "EdgeBaseProfile");
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

void CDrillingCalibrationRequestPublisher::SetTimestamp(const DataTypes::Time timestamp)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timestamp = timestamp;
    }
}

void CDrillingCalibrationRequestPublisher::SetWobProportional(const double wobProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobProportional = wobProportional;
    }
}

void CDrillingCalibrationRequestPublisher::SetWobIntegral(const double wobIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobIntegral = wobIntegral;
    }
}

void CDrillingCalibrationRequestPublisher::SetDifferentialPressureProportional(const double differentialPressureProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureProportional = differentialPressureProportional;
    }
}

void CDrillingCalibrationRequestPublisher::SetDifferentialPressureIntegral(const double differentialPressureIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureIntegral = differentialPressureIntegral;
    }
}

void CDrillingCalibrationRequestPublisher::SetTorqueProportional(const double torqueProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueProportional = torqueProportional;
    }
}

void CDrillingCalibrationRequestPublisher::SetTorqueIntegral(const double torqueIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueIntegral = torqueIntegral;
    }
}

