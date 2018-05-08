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
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
}

void CHoistObjectivePublisher::SetEstimatedDuration(DataTypes::Time estimatedDuration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->estimatedDuration = estimatedDuration;
    }
}

void CHoistObjectivePublisher::SetTargetVelocity(meters_per_second_t targetVelocity)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetVelocity = units::unit_cast<double>(targetVelocity);
    }
}

void CHoistObjectivePublisher::SetTargetPosition(meter_t targetPosition)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetPosition = units::unit_cast<double>(targetPosition);
    }
}

bool CHoistObjectivePublisher::PublishSample()
{
    return Publish();
}

bool CHoistObjectivePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              nec::process::HOIST_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
