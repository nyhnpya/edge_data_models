#include "dds_uuid.h"
#include "drill_request_publisher.h"

CDrillRequestPublisher::CDrillRequestPublisher()
{
}

CDrillRequestPublisher::~CDrillRequestPublisher()
{
}

bool CDrillRequestPublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
}

void CDrillRequestPublisher::SetPriority(DataTypes::Priority priority)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->priority = priority;
    }
}

void CDrillRequestPublisher::SetTimeNeeded(DataTypes::Time timeNeeded)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timeNeeded = timeNeeded;
    }
}

void CDrillRequestPublisher::SetDuration(DataTypes::Time duration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->duration = duration;
    }
}

void CDrillRequestPublisher::SetRopLimit(const meters_per_second_t ropLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropLimit = units::unit_cast<double>(ropLimit);
    }
    else
    {
        LOG_ERROR("Failed to set rop limit on uninitialized sample");
    }
}

void CDrillRequestPublisher::SetWobLimit(const newton_t wobLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobLimit = units::unit_cast<double>(wobLimit);
    }
    else
    {
        LOG_ERROR("Failed to set wob limit on uninitialized sample");
    }
}

void CDrillRequestPublisher::SetDifferentialPressureLimit(const pascal_t differentialPressureLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureLimit = units::unit_cast<double>(differentialPressureLimit);
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure limit on uninitialized sample");
    }
}

void CDrillRequestPublisher::SetTorqueLimit(const newton_meter_t torqueLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueLimit = units::unit_cast<double>(torqueLimit);
    }
    else
    {
        LOG_ERROR("Failed to set torque limit on uninitialized sample");
    }
}

void CDrillRequestPublisher::SetRopMode(const bool ropMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropMode = ropMode;
    }
    else
    {
        LOG_ERROR("Failed to set rop mode on uninitialized sample");
    }
}

void CDrillRequestPublisher::SetWobMode(const bool wobMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobMode = wobMode;
    }
    else
    {
        LOG_ERROR("Failed to set wob mode on uninitialized sample");
    }
}

void CDrillRequestPublisher::SetDifferentialPressureMode(const bool differentialPressureMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureMode = differentialPressureMode;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure mode on uninitialized sample");
    }
}

void CDrillRequestPublisher::SetTorqueMode(const bool torqueMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueMode = torqueMode;
    }
    else
    {
        LOG_ERROR("Failed to set torque mode on uninitialized sample");
    }
}

bool CDrillRequestPublisher::PublishSample()
{
    return Publish();
}

bool CDrillRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              nec::process::DRILLING_REQUEST,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
