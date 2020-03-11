#include "rotate_state_subscriber.h"

CRotateStateSubscriber::CRotateStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CRotateStateSubscriber::~CRotateStateSubscriber()
{
}

bool CRotateStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       nec::process::ROTATE_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CRotateStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

CDdsUuid CRotateStateSubscriber::GetId()
{
    CDdsUuid uuid(m_data.id);
    return uuid;
}

CDdsUuid CRotateStateSubscriber::GetObjectiveId()
{
    CDdsUuid uuid(m_data.objectiveId);
    return uuid;
}

DataTypes::Time CRotateStateSubscriber::GetTimestamp()
{
    return m_data.timestamp;
}

DataTypes::Status CRotateStateSubscriber::GetStatus()
{
    return m_data.status;
}

units::angular_velocity::radians_per_second_t CRotateStateSubscriber::GetActualRate()
{
    return units::angular_velocity::radians_per_second_t(m_data.actualRate);
}

units::angular_velocity::radians_per_second_t CRotateStateSubscriber::GetMinRate()
{
    return units::angular_velocity::radians_per_second_t(m_data.minRate);
}

units::angular_velocity::radians_per_second_t CRotateStateSubscriber::GetMaxRate()
{
    return units::angular_velocity::radians_per_second_t(m_data.maxRate);
}

units::angular_velocity::radians_per_second_t CRotateStateSubscriber::GetTargetRate()
{
    return units::angular_velocity::radians_per_second_t(m_data.targetRate);
}


void CRotateStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CRotateStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CRotateStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CRotateStateSubscriber::DataAvailable(const nec::process::RotateState &data,
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

void CRotateStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CRotateStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

