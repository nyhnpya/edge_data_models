#include "dds_uuid.h"
#include "auto_ream_request_publisher.h"

CAutoReamRequestPublisher::CAutoReamRequestPublisher()
{
}

CAutoReamRequestPublisher::~CAutoReamRequestPublisher()
{
    DDS_String_free(m_pDataInstance->id);
}

bool CAutoReamRequestPublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
}

void CAutoReamRequestPublisher::SetPriority(DataTypes::Priority priority)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->priority = priority;
    }
}

void CAutoReamRequestPublisher::SetTimeNeeded(DataTypes::Time timeNeeded)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->timeNeeded = timeNeeded;
    }
}

void CAutoReamRequestPublisher::SetDuration(DataTypes::Time duration)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->duration = duration;
    }
}

bool CAutoReamRequestPublisher::PublishSample()
{
    return Publish();
}

bool CAutoReamRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              nec::process::AUTO_REAM_REQUEST,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
