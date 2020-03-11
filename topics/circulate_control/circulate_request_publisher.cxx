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
                       plc::process::CIRCULATE_REQUEST_TOPIC,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CCirculateRequestPublisher::Initialize()
{
    CDdsUuid uuid;
    bool retVal = false;

    if (m_pDataInstance != nullptr)
    {
        retVal = true;
    }

    return retVal;
}

bool CCirculateRequestPublisher::PublishSample()
{
    return Publish();
}

void CCirculateRequestPublisher::SetTargetFlowRate(double targetFlowRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetFlowRate = targetFlowRate;
    }
}

