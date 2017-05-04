#include "dds_uuid.h"
#include "circulate_request_publisher.h"

CCirculateRequestPublisher::CCirculateRequestPublisher()
{
}

CCirculateRequestPublisher::~CCirculateRequestPublisher()
{
}

bool CCirculateRequestPublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    uuid.ExportUuid(m_pDataInstance->id);

    return true;
}

void CCirculateRequestPublisher::SetId(const DataTypes::Uuid id)
{
    if (m_pDataInstance != nullptr)
    {
        memcpy(m_pDataInstance, id, sizeof(DataTypes::Uuid));
    }
}

void CCirculateRequestPublisher::SetPriority(DataTypes::Priority priority)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->priority = priority;
    }
}

void CCirculateRequestPublisher::SetTimeNeeded(DataTypes::Time timeNeeded)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timeNeeded = timeNeeded;
    }
}

void CCirculateRequestPublisher::SetDuration(DataTypes::Time duration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->estimatedDuration = duration;
    }
}

void CCirculateRequestPublisher::SetTargetFlowRate(double targetFlowRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetFlowRate = targetFlowRate;
    }
}

bool CCirculateRequestPublisher::PublishSample()
{
    return Publish();
}

bool CCirculateRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain, 
                              ProcessCirculation::CIRCULATE_REQUEST,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
