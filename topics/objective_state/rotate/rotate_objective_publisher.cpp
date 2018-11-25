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
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(m_requestId);
    }
    else
    {
        LOG_ERROR("Failed to set objective id because of uninitialized sample");
    }

    return true;
}

void CRotateObjectivePublisher::SetId(DataTypes::Uuid &id)
{
    m_requestId = DDS_String_dup(id);
}

void CRotateObjectivePublisher::SetObjectiveId(DataTypes::Uuid &objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId);
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
