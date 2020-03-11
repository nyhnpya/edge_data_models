#include "rotate_engineering_objective_subscriber.h"

CRotateEngineeringObjectiveSubscriber::CRotateEngineeringObjectiveSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CRotateEngineeringObjectiveSubscriber::~CRotateEngineeringObjectiveSubscriber()
{
}

bool CRotateEngineeringObjectiveSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       nec::engineering::ROTATE_ENGINEERING_OBJECTIVE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CRotateEngineeringObjectiveSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

CDdsUuid CRotateEngineeringObjectiveSubscriber::GetId()
{
    CDdsUuid uuid(m_data.id);
    return uuid;
}

DataTypes::Time CRotateEngineeringObjectiveSubscriber::GetEstimatedDuration()
{
    return m_data.estimatedDuration;
}

units::angular_velocity::radians_per_second_t CRotateEngineeringObjectiveSubscriber::GetTargetRate()
{
    return units::angular_velocity::radians_per_second_t(m_data.targetRate);
}

units::torque::newton_meter_t CRotateEngineeringObjectiveSubscriber::GetTargetTorque()
{
    return units::torque::newton_meter_t(m_data.targetTorque);
}


void CRotateEngineeringObjectiveSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CRotateEngineeringObjectiveSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CRotateEngineeringObjectiveSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CRotateEngineeringObjectiveSubscriber::DataAvailable(const nec::engineering::RotateEngineeringObjective &data,
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

void CRotateEngineeringObjectiveSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CRotateEngineeringObjectiveSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

