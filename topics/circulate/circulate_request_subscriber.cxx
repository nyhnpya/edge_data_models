#include "circulate_request_subscriber.h"

CCirculateRequestSubscriber::CCirculateRequestSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CCirculateRequestSubscriber::~CCirculateRequestSubscriber()
{
}

bool CCirculateRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       nec::process::CIRCULATE_REQUEST,
                       "EdgeBaseLibrary",
                       "CirculateRequestProfile");
}

bool CCirculateRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

CDdsUuid CCirculateRequestSubscriber::GetId()
{
    CDdsUuid uuid(m_data.id);
    return uuid;
}

CDdsUuid CCirculateRequestSubscriber::GetObjectiveId()
{
    CDdsUuid uuid(m_data.objectiveId);
    return uuid;
}

DataTypes::Priority CCirculateRequestSubscriber::GetPriority()
{
    return m_data.priority;
}

DataTypes::Time CCirculateRequestSubscriber::GetTimeNeeded()
{
    return m_data.timeNeeded;
}

DataTypes::Time CCirculateRequestSubscriber::GetEstimatedDuration()
{
    return m_data.estimatedDuration;
}

units::volume_velocity::cubic_meters_per_second_t CCirculateRequestSubscriber::GetTargetFlowRate()
{
    return units::volume_velocity::cubic_meters_per_second_t(m_data.targetFlowRate);
}


void CCirculateRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CCirculateRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CCirculateRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CCirculateRequestSubscriber::DataAvailable(const nec::process::CirculateRequest &data,
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

void CCirculateRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CCirculateRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

