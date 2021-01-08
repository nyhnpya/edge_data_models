#include "rotate_request_publisher.h"

CRotateRequestPublisher::CRotateRequestPublisher()
{
}

CRotateRequestPublisher::~CRotateRequestPublisher()
{
}

bool CRotateRequestPublisher::Create(const std::string &publisher)
{
    return TKeyedDataWriter::Create(publisher,
                                    nec::process::ROTATE_REQUEST,
                                    "EdgeBaseLibrary",
                                    "RotateRequestProfile");
}

bool CRotateRequestPublisher::PublishSample()
{
    return Publish();
}

void CRotateRequestPublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CRotateRequestPublisher::SetObjectiveId(CDdsUuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId.c_str());
    }
}

void CRotateRequestPublisher::SetPriority(const DataTypes::Priority priority)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->priority = priority;
    }
}

void CRotateRequestPublisher::SetTimeNeeded(const DataTypes::Time timeNeeded)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timeNeeded = timeNeeded;
    }
}

void CRotateRequestPublisher::SetEstimatedDuration(const DataTypes::Time estimatedDuration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->estimatedDuration = estimatedDuration;
    }
}

void CRotateRequestPublisher::SetTargetRate(const units::angular_velocity::radians_per_second_t targetRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetRate = units::unit_cast<double>(targetRate);
    }
}

