#include "dds_uuid.h"
#include "hoist_objective_publisher.h"

CHoistObjectivePublisher::CHoistObjectivePublisher()
{
}

CHoistObjectivePublisher::~CHoistObjectivePublisher()
{
}

bool CHoistObjectivePublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    uuid.ExportUuid(m_pDataInstance->id);

    return true;
}

void CHoistObjectivePublisher::SetId(const DataTypes::Uuid &id)
{
    if (m_pDataInstance != nullptr)
    {
        memcpy(m_pDataInstance, id, sizeof(DataTypes::Uuid));
    }
}

void CHoistObjectivePublisher::SetEstimatedDuration(DataTypes::Time &estimatedDuration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->estimatedDuration = estimatedDuration;
    }
}

void CHoistObjectivePublisher::SetTargetVelocity(DDS_Double &targetVelocity)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetVelocity = targetVelocity;
    }
}

void CHoistObjectivePublisher::SetTargetDestination(DDS_Double &targetDestination)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetDestination = targetDestination;
    }
}

bool CHoistObjectivePublisher::PublishSample()
{
    return Publish();
}

bool CHoistObjectivePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              ProcessHoist::HOIST_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
