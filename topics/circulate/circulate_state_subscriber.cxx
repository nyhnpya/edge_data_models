#include "circulate_state_subscriber.h"

CCirculateStateSubscriber::CCirculateStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CCirculateStateSubscriber::~CCirculateStateSubscriber()
{
}

bool CCirculateStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       nec::process::CIRCULATE_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CCirculateStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

CDdsUuid CCirculateStateSubscriber::GetId()
{
    CDdsUuid uuid(m_data.id);
    return uuid;
}

CDdsUuid CCirculateStateSubscriber::GetObjectiveId()
{
    CDdsUuid uuid(m_data.objectiveId);
    return uuid;
}

DataTypes::Time CCirculateStateSubscriber::GetTimestamp()
{
    return m_data.timestamp;
}

DataTypes::Status CCirculateStateSubscriber::GetStatus()
{
    return m_data.status;
}

units::volume_velocity::cubic_meters_per_second_t CCirculateStateSubscriber::GetActualFlowRate()
{
    return units::volume_velocity::cubic_meters_per_second_t(m_data.actualFlowRate);
}

units::pressure::pascal_t CCirculateStateSubscriber::GetActualStandpipePressure()
{
    return units::pressure::pascal_t(m_data.actualStandpipePressure);
}

units::volume_velocity::cubic_meters_per_second_t CCirculateStateSubscriber::GetMinFlowRate()
{
    return units::volume_velocity::cubic_meters_per_second_t(m_data.minFlowRate);
}

units::volume_velocity::cubic_meters_per_second_t CCirculateStateSubscriber::GetMaxFlowRate()
{
    return units::volume_velocity::cubic_meters_per_second_t(m_data.maxFlowRate);
}

units::pressure::pascal_t CCirculateStateSubscriber::GetMinStandpipePressure()
{
    return units::pressure::pascal_t(m_data.minStandpipePressure);
}

units::pressure::pascal_t CCirculateStateSubscriber::GetMaxStandpipePressure()
{
    return units::pressure::pascal_t(m_data.maxStandpipePressure);
}

units::volume_velocity::cubic_meters_per_second_t CCirculateStateSubscriber::GetTargetFlowRate()
{
    return units::volume_velocity::cubic_meters_per_second_t(m_data.targetFlowRate);
}


void CCirculateStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CCirculateStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CCirculateStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CCirculateStateSubscriber::DataAvailable(const nec::process::CirculateState &data,
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

void CCirculateStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CCirculateStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

