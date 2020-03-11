#include "wellbore_state_subscriber.h"

CWellboreStateSubscriber::CWellboreStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CWellboreStateSubscriber::~CWellboreStateSubscriber()
{
}

bool CWellboreStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       nec::process::WELLBORE_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CWellboreStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

CDdsUuid CWellboreStateSubscriber::GetId()
{
    CDdsUuid uuid(m_data.id);
    return uuid;
}

CDdsUuid CWellboreStateSubscriber::GetObjectiveId()
{
    CDdsUuid uuid(m_data.objectiveId);
    return uuid;
}

DataTypes::Time CWellboreStateSubscriber::GetTimestamp()
{
    return m_data.timestamp;
}

units::length::meter_t CWellboreStateSubscriber::GetHoleDepth()
{
    return units::length::meter_t(m_data.holeDepth);
}

units::length::meter_t CWellboreStateSubscriber::GetMeasuredDepth()
{
    return units::length::meter_t(m_data.measuredDepth);
}

units::length::meter_t CWellboreStateSubscriber::GetTrueVerticalDepth()
{
    return units::length::meter_t(m_data.trueVerticalDepth);
}

units::length::meter_t CWellboreStateSubscriber::GetBitDepth()
{
    return units::length::meter_t(m_data.bitDepth);
}


void CWellboreStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CWellboreStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CWellboreStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CWellboreStateSubscriber::DataAvailable(const nec::process::WellboreState &data,
                          const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        m_data = data;
    
        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(sampleInfo);
        }
    
    }
}

void CWellboreStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CWellboreStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

