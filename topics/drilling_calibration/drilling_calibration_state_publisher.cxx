#include "drilling_calibration_state_publisher.h"

CDrillingCalibrationStatePublisher::CDrillingCalibrationStatePublisher()
{
}

CDrillingCalibrationStatePublisher::~CDrillingCalibrationStatePublisher()
{
}

bool CDrillingCalibrationStatePublisher::Create(const std::string &publisher)
{
    return TKeyedDataWriter::Create(publisher,
                                    nec::control::DRILLING_CALIBRATION_STATE,
                                    "EdgeBaseLibrary",
                                    "EdgeBaseProfile");
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

void CDrillingCalibrationStatePublisher::SetTimestamp(const DataTypes::Time timestamp)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timestamp = timestamp;
    }
}

void CDrillingCalibrationStatePublisher::SetWobProportional(const double wobProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobProportional = wobProportional;
    }
}

void CDrillingCalibrationStatePublisher::SetWobIntegral(const double wobIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobIntegral = wobIntegral;
    }
}

void CDrillingCalibrationStatePublisher::SetDifferentialPressureProportional(const double differentialPressureProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureProportional = differentialPressureProportional;
    }
}

void CDrillingCalibrationStatePublisher::SetDifferentialPressureIntegral(const double differentialPressureIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureIntegral = differentialPressureIntegral;
    }
}

void CDrillingCalibrationStatePublisher::SetTorqueProportional(const double torqueProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueProportional = torqueProportional;
    }
}

void CDrillingCalibrationStatePublisher::SetTorqueIntegral(const double torqueIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueIntegral = torqueIntegral;
    }
}

void CDrillingCalibrationStatePublisher::SetMinWobProportional(const double minWobProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minWobProportional = minWobProportional;
    }
}

void CDrillingCalibrationStatePublisher::SetMaxWobProportional(const double maxWobProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxWobProportional = maxWobProportional;
    }
}

void CDrillingCalibrationStatePublisher::SetMinWobIntegral(const double minWobIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minWobIntegral = minWobIntegral;
    }
}

void CDrillingCalibrationStatePublisher::SetMaxWobIntegral(const double maxWobIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxWobIntegral = maxWobIntegral;
    }
}

void CDrillingCalibrationStatePublisher::SetMinDifferentialPressureProportional(const double minDifferentialPressureProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minDifferentialPressureProportional = minDifferentialPressureProportional;
    }
}

void CDrillingCalibrationStatePublisher::SetMaxDifferentialPressureProportional(const double maxDifferentialPressureProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxDifferentialPressureProportional = maxDifferentialPressureProportional;
    }
}

void CDrillingCalibrationStatePublisher::SetMinDifferentialPressureIntegral(const double minDifferentialPressureIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minDifferentialPressureIntegral = minDifferentialPressureIntegral;
    }
}

void CDrillingCalibrationStatePublisher::SetMaxDifferentialPressureIntegral(const double maxDifferentialPressureIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxDifferentialPressureIntegral = maxDifferentialPressureIntegral;
    }
}

void CDrillingCalibrationStatePublisher::SetMinTorqueProportional(const double minTorqueProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minTorqueProportional = minTorqueProportional;
    }
}

void CDrillingCalibrationStatePublisher::SetMaxTorqueProportional(const double maxTorqueProportional)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxTorqueProportional = maxTorqueProportional;
    }
}

void CDrillingCalibrationStatePublisher::SetMinTorqueIntegral(const double minTorqueIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minTorqueIntegral = minTorqueIntegral;
    }
}

void CDrillingCalibrationStatePublisher::SetMaxTorqueIntegral(const double maxTorqueIntegral)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxTorqueIntegral = maxTorqueIntegral;
    }
}

