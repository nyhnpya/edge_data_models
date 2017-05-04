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
    CDdsUuid uuid;

    uuid.GenerateUuid();
    uuid.ExportUuid(m_pDataInstance->id);

    return true;
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
