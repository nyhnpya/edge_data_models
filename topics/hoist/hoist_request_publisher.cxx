#include "hoist_request_publisher.h"

CHoistRequestPublisher::CHoistRequestPublisher()
{
}

CHoistRequestPublisher::~CHoistRequestPublisher()
{
}

bool CHoistRequestPublisher::Create(const std::string &publisher)
{
    return TKeyedDataWriter::Create(publisher,
                                    nec::process::HOIST_REQUEST,
                                    "EdgeBaseLibrary",
                                    "HoistRequestProfile");
}

bool CHoistRequestPublisher::PublishSample()
{
    return Publish();
}

void CHoistRequestPublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CHoistRequestPublisher::SetObjectiveId(CDdsUuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId.c_str());
    }
}

void CHoistRequestPublisher::SetPriority(const DataTypes::Priority priority)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->priority = priority;
    }
}

void CHoistRequestPublisher::SetTimeNeeded(const DataTypes::Time timeNeeded)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timeNeeded = timeNeeded;
    }
}

void CHoistRequestPublisher::SetEstimatedDuration(const DataTypes::Time estimatedDuration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->estimatedDuration = estimatedDuration;
    }
}

void CHoistRequestPublisher::SetTargetVelocity(const units::velocity::meters_per_second_t targetVelocity)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetVelocity = units::unit_cast<double>(targetVelocity);
    }
}

void CHoistRequestPublisher::SetTargetPosition(const units::length::meter_t targetPosition)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetPosition = units::unit_cast<double>(targetPosition);
    }
}

