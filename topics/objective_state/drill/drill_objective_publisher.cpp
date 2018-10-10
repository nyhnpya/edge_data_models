#include "dds_uuid.h"
#include "drill_objective_publisher.h"

CDrillObjectivePublisher::CDrillObjectivePublisher()
{
}

CDrillObjectivePublisher::~CDrillObjectivePublisher()
{
}

bool CDrillObjectivePublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
}

void CDrillObjectivePublisher::SetEstimatedDuration(DataTypes::Time estimatedDuration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->estimatedDuration = estimatedDuration;
    }
}

void CDrillObjectivePublisher::SetRopTarget(const double ropTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropTarget = ropTarget;
    }
    else
    {
        LOG_ERROR("Failed to set rop target on uninitialized sample");
    }
}

void CDrillObjectivePublisher::SetWobTarget(const double wobTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobTarget = wobTarget;
    }
    else
    {
        LOG_ERROR("Failed to set wob target on uninitialized sample");
    }
}

void CDrillObjectivePublisher::SetDiffPressureTarget(const double diffPressureTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPressureTarget = diffPressureTarget;
    }
    else
    {
        LOG_ERROR("Failed to set diff pressure target on uninitialized sample");
    }
}

void CDrillObjectivePublisher::SetTorqueTarget(const double torqueTarget)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueTarget = torqueTarget;
    }
    else
    {
        LOG_ERROR("Failed to set torque target on uninitialized sample");
    }
}

void CDrillObjectivePublisher::SetRopMode(const bool ropMode)
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

void CDrillObjectivePublisher::SetWobMode(const bool wobMode)
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

void CDrillObjectivePublisher::SetDiffPressureMode(const bool diffPressureMode)
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

void CDrillObjectivePublisher::SetTorqueMode(const bool torqueMode)
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

bool CDrillObjectivePublisher::PublishSample()
{
    return Publish();
}

bool CDrillObjectivePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              nec::process::DRILL_OBJECTIVE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
