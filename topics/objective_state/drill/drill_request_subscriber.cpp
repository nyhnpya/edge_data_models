#include "drill_request_subscriber.h"

CDrillingRequestSubscriber::CDrillingRequestSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CDrillingRequestSubscriber::~CDrillingRequestSubscriber()
{
}

bool CDrillingRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

DataTypes::Uuid CDrillingRequestSubscriber::GetId()
{
    return m_data.id;
}

DataTypes::Priority CDrillingRequestSubscriber::GetPriority()
{
    return m_data.priority;
}

DataTypes::Time CDrillingRequestSubscriber::GetTimeNeeded()
{
    return m_data.timeNeeded;
}

DataTypes::Time CDrillingRequestSubscriber::GetDuration()
{
    return m_data.duration;
}

meters_per_second_t CDrillingRequestSubscriber::GetRopLimit()
{
    return (meters_per_second_t)m_data.ropLimit;
}

newton_t CDrillingRequestSubscriber::GetWobLimit()
{
    return (newton_t)m_data.wobLimit;
}

pascal_t CDrillingRequestSubscriber::GetDifferentialPressureLimit()
{
    return (pascal_t)m_data.differentialPressureLimit;
}

newton_meter_t CDrillingRequestSubscriber::GetTorqueLimit()
{
    return (newton_meter_t)m_data.torqueLimit;
}

bool CDrillingRequestSubscriber::GetRopMode()
{
    return (m_data.ropMode == DDS_BOOLEAN_TRUE);
}

bool CDrillingRequestSubscriber::GetWobMode()
{
    return (m_data.wobMode == DDS_BOOLEAN_TRUE);
}

bool CDrillingRequestSubscriber::GetDifferentialPressureMode()
{
    return (m_data.differentialPressureMode == DDS_BOOLEAN_TRUE);
}

bool CDrillingRequestSubscriber::GetTorqueMode()
{
    return (m_data.torqueMode == DDS_BOOLEAN_TRUE);
}

void CDrillingRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CDrillingRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CDrillingRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

bool CDrillingRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               nec::process::DRILLING_REQUEST,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CDrillingRequestSubscriber::DataAvailable(const nec::process::DrillingRequest &data,
                                               const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        m_data.id = DDS_String_dup(data.id);
        m_data.ropLimit = data.ropLimit;
        m_data.wobLimit = data.wobLimit;
        m_data.differentialPressureLimit = data.differentialPressureLimit;
        m_data.torqueLimit = data.torqueLimit;
        m_data.ropMode = data.ropMode;
        m_data.wobMode = data.wobMode;
        m_data.differentialPressureMode = data.differentialPressureMode;
        m_data.torqueMode = data.torqueMode;

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable();
        }
    }
}

void CDrillingRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CDrillingRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}
