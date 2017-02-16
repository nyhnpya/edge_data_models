#include "rotate_objective_publisher.h"

CRotateObjectivePublisher::CRotateObjectivePublisher()
{
}

CRotateObjectivePublisher::~CRotateObjectivePublisher()
{
}

void CRotateObjectivePublisher::SetId(const DataTypes::Uuid id)
{
    if (m_pDataInstance != nullptr)
    {
        memcpy(m_pDataInstance, id, sizeof(DataTypes::Uuid));
    }
}

void CRotateObjectivePublisher::SetEstimatedDuration(DataTypes::Time estimatedDuration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->estimatedDuration = estimatedDuration;
    }
}

void CRotateObjectivePublisher::SetTargetRate(double targetRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetRate = targetRate;
    }
}

bool CRotateObjectivePublisher::PublishSample()
{
    return Publish();
}

bool CRotateObjectivePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              ProcessRotation::ROTATE_OBJECTIVE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
