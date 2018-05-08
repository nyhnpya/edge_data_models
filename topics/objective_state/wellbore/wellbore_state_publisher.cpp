#include "dds_uuid.h"
#include "wellbore_state_publisher.h"

CWellboreStatePublisher::CWellboreStatePublisher()
{
}

CWellboreStatePublisher::~CWellboreStatePublisher()
{
}

bool CWellboreStatePublisher::Initialize()
{
    CDdsUuid uuid;

    uuid.GenerateUuid();
    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
}

void CWellboreStatePublisher::SetBitDepth(meter_t bitDepth)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->bitDepth = units::unit_cast<double>(bitDepth);
    }
    else
    {
        LOG_ERROR("Failed to set bit depth on uninitialized sample");
    }
}

void CWellboreStatePublisher::SetHoleDepth(meter_t holeDepth)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->holeDepth = units::unit_cast<double>(holeDepth);
    }
    else
    {
        LOG_ERROR("Failed to set hole depth on uninitialized sample");
    }
}

bool CWellboreStatePublisher::PublishSample()
{
    DDS_Time_t currentTime;
    bool       retVal = false;

    GetParticipant()->get_current_time(currentTime);
    m_pDataInstance->timestamp.sec = currentTime.sec;
    m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    retVal = Publish();

    return retVal;
}

bool CWellboreStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              nec::process::WELLBORE_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
