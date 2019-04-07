#include "dds_uuid.h"
#include "circulate_engineering_request_publisher.h"

CCirculateEngineeringRequestPublisher::CCirculateEngineeringRequestPublisher()
{
}

CCirculateEngineeringRequestPublisher::~CCirculateEngineeringRequestPublisher()
{
}

bool CCirculateEngineeringRequestPublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
}

void CCirculateEngineeringRequestPublisher::SetTargetFlowRate(double targetFlowRate)
{
    if (m_pDataInstance != nullptr)
    {
    }
}

bool CCirculateEngineeringRequestPublisher::PublishSample()
{
    return Publish();
}

bool CCirculateEngineeringRequestPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain, 
                              nec::control::CIRCULATE_ENGINEERING_REQUEST,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
