#include "drill_request_topic_publisher.h"
#include "dds_uuid.h"

CDrillRequestTopicPublisher::CDrillRequestTopicPublisher()
{
}

CDrillRequestTopicPublisher::~CDrillRequestTopicPublisher()
{
}

bool CDrillRequestTopicPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       plc::process::DRILL_REQUEST_TOPIC,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CDrillRequestTopicPublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        retVal = true;
    }

    return retVal;
}

bool CDrillRequestTopicPublisher::PublishSample()
{
    return Publish();
}

void CDrillRequestTopicPublisher::SetRopLimit(double ropLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropLimit = ropLimit;
    }
}

void CDrillRequestTopicPublisher::SetWobLimit(double wobLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobLimit = wobLimit;
    }
}

void CDrillRequestTopicPublisher::SetDiffPressureLimit(double diffPressureLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPressureLimit = diffPressureLimit;
    }
}

void CDrillRequestTopicPublisher::SetTorqueLimit(double torqueLimit)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueLimit = torqueLimit;
    }
}

void CDrillRequestTopicPublisher::SetRopMode(bool ropMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->ropMode = ropMode;
    }
}

void CDrillRequestTopicPublisher::SetWobMode(bool wobMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->wobMode = wobMode;
    }
}

void CDrillRequestTopicPublisher::SetDiffPressureMode(bool diffPressureMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->diffPressureMode = diffPressureMode;
    }
}

void CDrillRequestTopicPublisher::SetTorqueMode(bool torqueMode)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->torqueMode = torqueMode;
    }
}

