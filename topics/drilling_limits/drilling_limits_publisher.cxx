#include "drilling_limits_publisher.h"

CDrillingLimitsPublisher::CDrillingLimitsPublisher()
{
}

CDrillingLimitsPublisher::~CDrillingLimitsPublisher()
{
}

bool CDrillingLimitsPublisher::Create(const std::string &publisher)
{
    return TKeyedDataWriter::Create(publisher,
                                    process::plan::DRILLING_LIMITS,
                                    "EdgeBaseLibrary",
                                    "ConfigProfile");
}

bool CDrillingLimitsPublisher::PublishSample()
{
    return Publish();
}

void CDrillingLimitsPublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CDrillingLimitsPublisher::SetStartDepth(const units::length::meter_t startDepth)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->startDepth = units::unit_cast<double>(startDepth);
    }
}

void CDrillingLimitsPublisher::SetEndDepth(const units::length::meter_t endDepth)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->endDepth = units::unit_cast<double>(endDepth);
    }
}

void CDrillingLimitsPublisher::SetRopMin(const units::velocity::meters_per_second_t ropMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropMin = units::unit_cast<double>(ropMin);
    }
}

void CDrillingLimitsPublisher::SetRopMax(const units::velocity::meters_per_second_t ropMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropMax = units::unit_cast<double>(ropMax);
    }
}

void CDrillingLimitsPublisher::SetWobMin(const units::force::newton_t wobMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobMin = units::unit_cast<double>(wobMin);
    }
}

void CDrillingLimitsPublisher::SetWobMax(const units::force::newton_t wobMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobMax = units::unit_cast<double>(wobMax);
    }
}

void CDrillingLimitsPublisher::SetDiffPMin(const units::pressure::pascal_t diffPMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPMin = units::unit_cast<double>(diffPMin);
    }
}

void CDrillingLimitsPublisher::SetDiffPMax(const units::pressure::pascal_t diffPMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPMax = units::unit_cast<double>(diffPMax);
    }
}

void CDrillingLimitsPublisher::SetTorqueMin(const units::torque::newton_meter_t torqueMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueMin = units::unit_cast<double>(torqueMin);
    }
}

void CDrillingLimitsPublisher::SetTorqueMax(const units::torque::newton_meter_t torqueMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueMax = units::unit_cast<double>(torqueMax);
    }
}

void CDrillingLimitsPublisher::SetRotateMin(const units::angular_velocity::radians_per_second_t rotateMin)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rotateMin = units::unit_cast<double>(rotateMin);
    }
}

void CDrillingLimitsPublisher::SetRotateMax(const units::angular_velocity::radians_per_second_t rotateMax)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->rotateMax = units::unit_cast<double>(rotateMax);
    }
}

