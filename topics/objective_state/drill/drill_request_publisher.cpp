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

void CDrillRequestPublisher::SetRopTarget(const meters_per_second_t ropTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropTarget = units::unit_cast<double>(ropTarget);
    }
    else
    {
        LOG_ERROR("Failed to set rop target on uninitialized sample");
    }
}

void CDrillRequestPublisher::SetWobTarget(const newton_t wobTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobTarget = units::unit_cast<double>(wobTarget);
    }
    else
    {
        LOG_ERROR("Failed to set wob target on uninitialized sample");
    }
}

void CDrillRequestPublisher::SetDiffPressureTarget(const pascal_t diffPressureTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPressureTarget = units::unit_cast<double>(diffPressureTarget);
    }
    else
    {
        LOG_ERROR("Failed to set diff pressure target on uninitialized sample");
    }
}

void CDrillRequestPublisher::SetTorqueTarget(const newton_meter_t torqueTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTarget = units::unit_cast<double>(torqueTarget);
    }
    else
    {
        LOG_ERROR("Failed to set torque target on uninitialized sample");
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

void CDrillRequestPublisher::SetDiffPressureMode(const bool diffPressureMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPressureMode = diffPressureMode;
    }
    else
    {
        LOG_ERROR("Failed to set diff pressure mode on uninitialized sample");
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
                              nec::process::DRILL_REQUEST,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
