#include "template_state_publisher.h"

CTemplateStatePublisher::CTemplateStatePublisher()
{
}

CTemplateStatePublisher::~CTemplateStatePublisher()
{
}

bool CTemplateStatePublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
}

bool CTemplateStatePublisher::PublishSample()
{
    bool bRetVal = false;
    DDS_Time_t currentTime;

    GetParticipant()->get_current_time(currentTime);
    m_pDataInstance->timestamp.sec = currentTime.sec;
    m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    bRetVal = Publish();

    return bRetVal;
}

bool CTemplateStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              nec::process::TEMPLATE_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
