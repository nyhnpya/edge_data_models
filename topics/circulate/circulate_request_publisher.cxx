#include "circulate_request_publisher.h"

CCirculateRequestPublisher::CCirculateRequestPublisher()
{
}

CCirculateRequestPublisher::~CCirculateRequestPublisher()
{
}

bool CCirculateRequestPublisher::Create(const std::string &publisher)
{
    return TKeyedDataWriter::Create(publisher,
                                    nec::process::CIRCULATE_REQUEST,
                                    "EdgeBaseLibrary",
                                    "CirculateRequestProfile");
}

bool CCirculateRequestPublisher::PublishSample()
{
    return Publish();
}

void CCirculateRequestPublisher::SetId(CDdsUuid id)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->id = DDS_String_dup(id.c_str());
    }
}

void CCirculateRequestPublisher::SetObjectiveId(CDdsUuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId.c_str());
    }
}

void CCirculateRequestPublisher::SetPriority(const DataTypes::Priority priority)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->priority = priority;
    }
}

void CCirculateRequestPublisher::SetTimeNeeded(const DataTypes::Time timeNeeded)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timeNeeded = timeNeeded;
    }
}

void CCirculateRequestPublisher::SetEstimatedDuration(const DataTypes::Time estimatedDuration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->estimatedDuration = estimatedDuration;
    }
}

void CCirculateRequestPublisher::SetTargetFlowRate(const units::volume_velocity::cubic_meters_per_second_t targetFlowRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetFlowRate = units::unit_cast<double>(targetFlowRate);
    }
}

