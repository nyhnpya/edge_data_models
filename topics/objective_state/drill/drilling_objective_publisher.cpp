#include "dds_uuid.h"
#include "drilling_objective_publisher.h"

CDrillingObjectivePublisher::CDrillingObjectivePublisher()
{
}

CDrillingObjectivePublisher::~CDrillingObjectivePublisher()
{
    DDS_String_free(m_pDataInstance->id);
}

bool CDrillingObjectivePublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
}

void CDrillingObjectivePublisher::SetEstimatedDuration(DataTypes::Time estimatedDuration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->estimatedDuration = estimatedDuration;
    }
}

void CDrillingObjectivePublisher::SetRopLimit(const double ropLimit)
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

void CDrillingObjectivePublisher::SetWobLimit(const double wobLimit)
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

void CDrillingObjectivePublisher::SetDifferentialPressureLimit(const double differentialPressureLimit)
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

void CDrillingObjectivePublisher::SetTorqueLimit(const double torqueLimit)
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

void CDrillingObjectivePublisher::SetRopMode(const bool ropMode)
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

void CDrillingObjectivePublisher::SetWobMode(const bool wobMode)
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

void CDrillingObjectivePublisher::SetDifferentialPressureMode(const bool differentialPressureMode)
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

void CDrillingObjectivePublisher::SetTorqueMode(const bool torqueMode)
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

bool CDrillingObjectivePublisher::PublishSample()
{
    return Publish();
}

bool CDrillingObjectivePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              Hoisting::DRILLING_OBJECTIVE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
