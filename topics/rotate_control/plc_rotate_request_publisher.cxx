#include "plc_rotate_request_publisher.h"

CPlcRotateRequestPublisher::CPlcRotateRequestPublisher()
{
}

CPlcRotateRequestPublisher::~CPlcRotateRequestPublisher()
{
}

bool CPlcRotateRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                       plc::process::ROTATE_REQUEST_TOPIC,
                       "EdgeBaseLibrary",
                       "PlcProfile");
}

bool CPlcRotateRequestPublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        retVal = true;
    }

    return retVal;
}

bool CPlcRotateRequestPublisher::PublishSample()
{
    return Publish();
}

void CPlcRotateRequestPublisher::SetTargetRate(double targetRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetRate = targetRate;
    }
}

