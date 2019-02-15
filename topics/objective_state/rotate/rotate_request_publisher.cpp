#include "dds_uuid.h"
#include "rotate_request_publisher.h"

CRotateRequestPublisher::CRotateRequestPublisher()
{
}

CRotateRequestPublisher::~CRotateRequestPublisher()
{
}

bool CRotateRequestPublisher::Initialize()
{
    CDdsUuid uuid;
    bool     retVal = false;

    if (m_pDataInstance != nullptr)
    {
        uuid.GenerateUuid();
        m_pDataInstance->id = DDS_String_dup(uuid.c_str());
        retVal = true;
    }

    return retVal;
}

void CRotateRequestPublisher::SetObjectiveId(CDdsUuid objectiveId)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->objectiveId = DDS_String_dup(objectiveId.c_str());
    }
}

void CRotateRequestPublisher::SetPriority(DataTypes::Priority priority)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->priority = priority;
    }
}

void CRotateRequestPublisher::SetTimeNeeded(DataTypes::Time timeNeeded)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timeNeeded = timeNeeded;
    }
}

void CRotateRequestPublisher::SetDuration(DataTypes::Time duration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->estimatedDuration = duration;
    }
}

void CRotateRequestPublisher::SetTargetRate(radians_per_second_t targetRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetRate = units::unit_cast<double>(targetRate);
    }
}

bool CRotateRequestPublisher::PublishSample()
{
    return Publish();
}

bool CRotateRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              nec::process::ROTATE_REQUEST,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
