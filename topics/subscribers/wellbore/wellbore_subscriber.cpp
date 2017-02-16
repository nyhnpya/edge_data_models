#include <string.h>
#include "wellbore_subscriber.h"

CWellboreStateSubscriber::CWellboreStateSubscriber()
{
}

CWellboreStateSubscriber::~CWellboreStateSubscriber()
{
}

bool CWellboreStateSubscriber::GetBitDepth(double &bitDepth)
{
    bitDepth = m_data.bitDepth;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}


bool CWellboreStateSubscriber::GetHoleDepth(double &holeDepth)
{
    holeDepth = m_data.holeDepth;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CWellboreStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               Downhole::WELLBORE_STATE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CWellboreStateSubscriber::OnDataAvailable(OnDtaAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CWellboreStateSubscriber::DataAvailable(const Downhole::Wellbore &data,
                                             const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == true)
    {
        memcpy(m_data.id, data.id, 16);
        m_data.timestamp.sec = data.timestamp.sec;
        m_data.timestamp.nanosec = data.timestamp.nanosec;
        m_data.bitDepth = data.bitDepth;
        m_data.holeDepth = data.holeDepth;

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(data);
        }
    }
}

void CWellboreStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;
}
