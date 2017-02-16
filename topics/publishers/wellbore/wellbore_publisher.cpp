#include "wellbore_publisher.h"

CWellboreStatePublisher::CWellboreStatePublisher()
{
}

CWellboreStatePublisher::~CWellboreStatePublisher()
{
}

void CWellboreStatePublisher::SetBitDepth(double bitDepth)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->bitDepth = bitDepth;
    }
    else
    {
        LOG_ERROR("Failed to set bit depth on uninitialized sample");
    }
}

void CWellboreStatePublisher::SetHoleDepth(double holeDepth)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->holeDepth = holeDepth;
    }
    else
    {
        LOG_ERROR("Failed to set hole depth on uninitialized sample");
    }
}

bool CWellboreStatePublisher::PublishSample()
{
    bool bRetVal = false;

    DDS_Time_t currentTime;

    GetParticipant()->get_current_time(currentTime);
    m_pDataInstance->timestamp.sec = currentTime.sec;
    m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    bRetVal = Publish();

    return bRetVal;
}

bool CWellboreStatePublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              Downhole::WELLBORE_STATE,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
