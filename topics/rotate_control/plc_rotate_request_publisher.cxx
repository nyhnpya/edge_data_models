#include "plc_rotate_request_publisher.h"

CPlcRotateRequestPublisher::CPlcRotateRequestPublisher()
{
}

CPlcRotateRequestPublisher::~CPlcRotateRequestPublisher()
{
}

bool CPlcRotateRequestPublisher::Create(const std::string &publisher)
{
    return TDataWriter::Create(publisher,
                                    plc::process::PLC_ROTATE_REQUEST_TOPIC,
                                    "EdgeBaseLibrary",
                                    "PlcProfile");
}

bool CPlcRotateRequestPublisher::PublishSample()
{
    return Publish();
}

void CPlcRotateRequestPublisher::SetTargetRate(const double targetRate)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->targetRate = targetRate;
    }
}

