#include "rotate_engineering_state_subscriber.h"

CRotateEngineeringStateSubscriber::CRotateEngineeringStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr),
    m_pOnSubscriptionMatched(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CRotateEngineeringStateSubscriber::~CRotateEngineeringStateSubscriber()
{
}

bool CRotateEngineeringStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       nec::engineering::ROTATE_ENGINEERING_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CRotateEngineeringStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

CDdsUuid CRotateEngineeringStateSubscriber::GetId()
{
    CDdsUuid uuid(m_data.id);
    return uuid;
}

DataTypes::Status CRotateEngineeringStateSubscriber::GetStatus()
{
    return m_data.status;
}

DataTypes::Time CRotateEngineeringStateSubscriber::GetTimestamp()
{
    return m_data.timestamp;
}

nec::engineering::State CRotateEngineeringStateSubscriber::GetState()
{
    return m_data.state;
}

nec::engineering::Mode CRotateEngineeringStateSubscriber::GetMode()
{
    return m_data.mode;
}

units::angular_velocity::radians_per_second_t CRotateEngineeringStateSubscriber::GetActualVelocity()
{
    return units::angular_velocity::radians_per_second_t(m_data.actualVelocity);
}

units::torque::newton_meter_t CRotateEngineeringStateSubscriber::GetActualTorque()
{
    return units::torque::newton_meter_t(m_data.actualTorque);
}

units::angle::radian_t CRotateEngineeringStateSubscriber::GetActualPosition()
{
    return units::angle::radian_t(m_data.actualPosition);
}

double CRotateEngineeringStateSubscriber::GetActualPower()
{
    return m_data.actualPower;
}

units::angular_velocity::radians_per_second_t CRotateEngineeringStateSubscriber::GetMinVelocity()
{
    return units::angular_velocity::radians_per_second_t(m_data.minVelocity);
}

units::angular_velocity::radians_per_second_t CRotateEngineeringStateSubscriber::GetMaxVelocity()
{
    return units::angular_velocity::radians_per_second_t(m_data.maxVelocity);
}

units::torque::newton_meter_t CRotateEngineeringStateSubscriber::GetMinTorque()
{
    return units::torque::newton_meter_t(m_data.minTorque);
}

units::torque::newton_meter_t CRotateEngineeringStateSubscriber::GetMaxTorque()
{
    return units::torque::newton_meter_t(m_data.maxTorque);
}

units::angle::radian_t CRotateEngineeringStateSubscriber::GetMinPosition()
{
    return units::angle::radian_t(m_data.minPosition);
}

units::angle::radian_t CRotateEngineeringStateSubscriber::GetMaxPosition()
{
    return units::angle::radian_t(m_data.maxPosition);
}

units::angular_velocity::radians_per_second_t CRotateEngineeringStateSubscriber::GetTargetVelocity()
{
    return units::angular_velocity::radians_per_second_t(m_data.targetVelocity);
}

units::torque::newton_meter_t CRotateEngineeringStateSubscriber::GetTargetTorque()
{
    return units::torque::newton_meter_t(m_data.targetTorque);
}

units::angle::radian_t CRotateEngineeringStateSubscriber::GetTargetPosition()
{
    return units::angle::radian_t(m_data.targetPosition);
}


void CRotateEngineeringStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CRotateEngineeringStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CRotateEngineeringStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}


void CRotateEngineeringStateSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}


void CRotateEngineeringStateSubscriber::DataAvailable(const nec::engineering::RotateEngineeringState &data,
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

void CRotateEngineeringStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CRotateEngineeringStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CRotateEngineeringStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
