#include "hoist_objective_publisher.h"

CHoistObjectivePublisher::CHoistObjectivePublisher()
{
}

CHoistObjectivePublisher::~CHoistObjectivePublisher()
{
}

bool CHoistObjectivePublisher::Create(const std::string &publisher)
{
    return TKeyedDataWriter::Create(publisher,
                                    nec::process::HOIST_OBJECTIVE,
                                    "EdgeBaseLibrary",
                                    "HoistObjectiveProfile");
}

bool CHoistObjectivePublisher::PublishSample()
{
    return Publish();
}

void CHoistObjectivePublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CHoistObjectivePublisher::SetObjectiveId(CDdsUuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId.c_str());
    }
}

void CHoistObjectivePublisher::SetEstimatedDuration(const DataTypes::Time estimatedDuration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->estimatedDuration = estimatedDuration;
    }
}

void CHoistObjectivePublisher::SetTargetVelocity(const units::velocity::meters_per_second_t targetVelocity)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetVelocity = units::unit_cast<double>(targetVelocity);
    }
}

void CHoistObjectivePublisher::SetTargetPosition(const units::length::meter_t targetPosition)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetPosition = units::unit_cast<double>(targetPosition);
    }
}

