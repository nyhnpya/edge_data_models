#include "dds_uuid.h"
#include "rotate_objective_publisher.h"

CRotateObjectivePublisher::CRotateObjectivePublisher()
{
}

CRotateObjectivePublisher::~CRotateObjectivePublisher()
{
}

bool CRotateObjectivePublisher::Initialize()
{
    return true;
}

void CRotateObjectivePublisher::SetId(DataTypes::Uuid &uuid)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = uuid;
    }
    else
    {
        LOG_ERROR("Failed to set objective id because of uninitialized sample");
    }
}

void CRotateObjectivePublisher::SetObjectiveId(DataTypes::Uuid &uuid)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = uuid;
    }
    else
    {
        LOG_ERROR("Failed to set objective objective id because of uninitialized sample");
    }
}

void CRotateObjectivePublisher::SetEstimatedDuration(DataTypes::Time estimatedDuration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->estimatedDuration = estimatedDuration;
    }
}

void CRotateObjectivePublisher::SetTargetRate(radians_per_second_t targetRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetRate = units::unit_cast<double>(targetRate);
    }
}

bool CRotateObjectivePublisher::PublishSample()
{
    return Publish();
}

bool CRotateObjectivePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              nec::process::ROTATE_OBJECTIVE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
