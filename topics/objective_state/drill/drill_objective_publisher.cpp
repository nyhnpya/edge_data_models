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

void CDrillObjectivePublisher::SetRopLimit(const double ropLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropLimit = ropLimit;
    }
    else
    {
        LOG_ERROR("Failed to set rop limit on uninitialized sample");
    }
}

void CDrillObjectivePublisher::SetWobLimit(const double wobLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobLimit = wobLimit;
    }
    else
    {
        LOG_ERROR("Failed to set wob limit on uninitialized sample");
    }
}

void CDrillObjectivePublisher::SetDifferentialPressureLimit(const double differentialPressureLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->differentialPressureLimit = differentialPressureLimit;
    }
    else
    {
        LOG_ERROR("Failed to set differential pressure limit on uninitialized sample");
    }
}

void CDrillObjectivePublisher::SetTorqueLimit(const double torqueLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueLimit = torqueLimit;
    }
    else
    {
        LOG_ERROR("Failed to set torque limit on uninitialized sample");
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

void CDrillObjectivePublisher::SetDifferentialPressureMode(const bool differentialPressureMode)
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
                              nec::process::DRILLING_OBJECTIVE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
