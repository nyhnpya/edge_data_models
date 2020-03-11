#include "drilling_limits_subscriber.h"

CDrillingLimitsSubscriber::CDrillingLimitsSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CDrillingLimitsSubscriber::~CDrillingLimitsSubscriber()
{
}

bool CDrillingLimitsSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       process::plan::DRILLING_LIMITS,
                       "EdgeBaseLibrary",
                       "ConfigProfile");
}

bool CDrillingLimitsSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

CDdsUuid CDrillingLimitsSubscriber::GetId()
{
    CDdsUuid uuid(m_data.id);
    return uuid;
}

units::length::meter_t CDrillingLimitsSubscriber::GetStartDepth()
{
    return units::length::meter_t(m_data.startDepth);
}

units::length::meter_t CDrillingLimitsSubscriber::GetEndDepth()
{
    return units::length::meter_t(m_data.endDepth);
}

units::velocity::meters_per_second_t CDrillingLimitsSubscriber::GetRopMin()
{
    return units::velocity::meters_per_second_t(m_data.ropMin);
}

units::velocity::meters_per_second_t CDrillingLimitsSubscriber::GetRopMax()
{
    return units::velocity::meters_per_second_t(m_data.ropMax);
}

units::force::newton_t CDrillingLimitsSubscriber::GetWobMin()
{
    return units::force::newton_t(m_data.wobMin);
}

units::force::newton_t CDrillingLimitsSubscriber::GetWobMax()
{
    return units::force::newton_t(m_data.wobMax);
}

units::pressure::pascal_t CDrillingLimitsSubscriber::GetDiffPMin()
{
    return units::pressure::pascal_t(m_data.diffPMin);
}

units::pressure::pascal_t CDrillingLimitsSubscriber::GetDiffPMax()
{
    return units::pressure::pascal_t(m_data.diffPMax);
}

units::torque::newton_meter_t CDrillingLimitsSubscriber::GetTorqueMin()
{
    return units::torque::newton_meter_t(m_data.torqueMin);
}

units::torque::newton_meter_t CDrillingLimitsSubscriber::GetTorqueMax()
{
    return units::torque::newton_meter_t(m_data.torqueMax);
}

units::angular_velocity::radians_per_second_t CDrillingLimitsSubscriber::GetRotateMin()
{
    return units::angular_velocity::radians_per_second_t(m_data.rotateMin);
}

units::angular_velocity::radians_per_second_t CDrillingLimitsSubscriber::GetRotateMax()
{
    return units::angular_velocity::radians_per_second_t(m_data.rotateMax);
}


void CDrillingLimitsSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CDrillingLimitsSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CDrillingLimitsSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CDrillingLimitsSubscriber::DataAvailable(const process::plan::DrillingLimits &data,
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

void CDrillingLimitsSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CDrillingLimitsSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

