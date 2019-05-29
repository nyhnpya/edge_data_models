#include "rotate_request_subscriber.h"

CRotateRequestSubscriber::CRotateRequestSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr),
    m_pOnSubscriptionMatched(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CRotateRequestSubscriber::~CRotateRequestSubscriber()
{
}

bool CRotateRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       nec::process::ROTATE_REQUEST,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CRotateRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

CDdsUuid CRotateRequestSubscriber::GetId()
{
    CDdsUuid uuid(m_data.id);
    return uuid;
}

CDdsUuid CRotateRequestSubscriber::GetObjectiveId()
{
    CDdsUuid uuid(m_data.objectiveId);
    return uuid;
}

DataTypes::Priority CRotateRequestSubscriber::GetPriority()
{
    return m_data.priority;
}

DataTypes::Time CRotateRequestSubscriber::GetTimeNeeded()
{
    return m_data.timeNeeded;
}

DataTypes::Time CRotateRequestSubscriber::GetEstimatedDuration()
{
    return m_data.estimatedDuration;
}

units::angular_velocity::radians_per_second_t CRotateRequestSubscriber::GetTargetRate()
{
    return units::angular_velocity::radians_per_second_t(m_data.targetRate);
}


void CRotateRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CRotateRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CRotateRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}


void CRotateRequestSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}


void CRotateRequestSubscriber::DataAvailable(const nec::process::RotateRequest &data,
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

void CRotateRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CRotateRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CRotateRequestSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
