#include "circulate_objective_subscriber.h"

CCirculateObjectiveSubscriber::CCirculateObjectiveSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CCirculateObjectiveSubscriber::~CCirculateObjectiveSubscriber()
{
}

bool CCirculateObjectiveSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       nec::process::CIRCULATE_OBJECTIVE,
                       "EdgeBaseLibrary",
                       "CirculateObjectiveProfile");
}

bool CCirculateObjectiveSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

CDdsUuid CCirculateObjectiveSubscriber::GetId()
{
    CDdsUuid uuid(m_data.id);
    return uuid;
}

CDdsUuid CCirculateObjectiveSubscriber::GetObjectiveId()
{
    CDdsUuid uuid(m_data.objectiveId);
    return uuid;
}

DataTypes::Time CCirculateObjectiveSubscriber::GetEstimatedDuration()
{
    return m_data.estimatedDuration;
}

units::volume_velocity::cubic_meters_per_second_t CCirculateObjectiveSubscriber::GetTargetFlowRate()
{
    return units::volume_velocity::cubic_meters_per_second_t(m_data.targetFlowRate);
}


void CCirculateObjectiveSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CCirculateObjectiveSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CCirculateObjectiveSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CCirculateObjectiveSubscriber::DataAvailable(const nec::process::CirculateObjective &data,
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

void CCirculateObjectiveSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CCirculateObjectiveSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

