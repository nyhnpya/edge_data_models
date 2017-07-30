#include "dds_uuid.h"
#include "hoist_objective_publisher.h"

CHoistObjectivePublisher::CHoistObjectivePublisher()
{
}

CHoistObjectivePublisher::~CHoistObjectivePublisher()
{
    DDS_String_free(m_pDataInstance->id);
}

bool CHoistObjectivePublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
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

void CHoistObjectivePublisher::SetTargetPosition(DDS_Double &targetPosition)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetPosition = targetPosition;
    }
}

bool CHoistObjectivePublisher::PublishSample()
{
    return Publish();
}

bool CHoistObjectivePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              SafeHoistFunctions::HOIST_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
