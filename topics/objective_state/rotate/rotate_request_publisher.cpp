#include "dds_uuid.h"
#include "rotate_request_publisher.h"

CRotateRequestPublisher::CRotateRequestPublisher()
{
}

CRotateRequestPublisher::~CRotateRequestPublisher()
{
    DDS_String_free(m_pDataInstance->id);
}

bool CRotateRequestPublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
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

void CRotateRequestPublisher::SetTargetRate(double targetRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetRate = targetRate;
    }
}

bool CRotateRequestPublisher::PublishSample()
{
    return Publish();
}

bool CRotateRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              nec::process::ROTATE_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
