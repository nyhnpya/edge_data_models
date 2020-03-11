#include "circulate_request_publisher.h"

CCirculateRequestPublisher::CCirculateRequestPublisher()
{
}

CCirculateRequestPublisher::~CCirculateRequestPublisher()
{
}

bool CCirculateRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       nec::process::CIRCULATE_REQUEST,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CCirculateRequestPublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        uuid.GenerateUuid();
        m_pDataInstance->id = DDS_String_dup(uuid.c_str());
        retVal = true;
    }

    return retVal;
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

void CCirculateRequestPublisher::SetEstimatedDuration(DataTypes::Time estimatedDuration)
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

