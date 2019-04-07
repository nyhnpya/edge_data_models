#include "dds_uuid.h"
#include "circulate_engineering_state_publisher.h"

CCirculateEngineeringStatePublisher::CCirculateEngineeringStatePublisher()
{
}

CCirculateEngineeringStatePublisher::~CCirculateEngineeringStatePublisher()
{
}

bool CCirculateEngineeringStatePublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
}

bool CCirculateEngineeringStatePublisher::PublishSample()
{
    bool bRetVal = false;
    DDS_Time_t currentTime;

    GetParticipant()->get_current_time(currentTime);
    m_pDataInstance->timestamp.sec = currentTime.sec;
    m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    bRetVal = Publish();

    return bRetVal;
}

bool CCirculateEngineeringStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              nec::control::CIRCULATE_ENGINEERING_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
