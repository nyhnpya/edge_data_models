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

bool CDrillingRequestSubscriber::GetId(DataTypes::Uuid &id)
{
    //    memcpy(id, m_data.id, 16);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingRequestSubscriber::GetPriority(DataTypes::Priority &priority)
{
    priority = m_data.priority;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingRequestSubscriber::GetTimeNeeded(DataTypes::Time &timeNeeded)
{
    timeNeeded = m_data.timeNeeded;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingRequestSubscriber::GetDuration(DataTypes::Time &duration)
{
    duration = m_data.duration;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingRequestSubscriber::GetRopLimit(meters_per_second_t &ropLimit)
{
    ropLimit = (meters_per_second_t)m_data.ropLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingRequestSubscriber::GetWobLimit(newton_t &wobLimit)
{
    wobLimit = (newton_t)m_data.wobLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingRequestSubscriber::GetDifferentialPressureLimit(pascal_t &differentialPressureLimit)
{
    differentialPressureLimit = (pascal_t)m_data.differentialPressureLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingRequestSubscriber::GetTorqueLimit(newton_meter_t &torqueLimit)
{
    torqueLimit = (newton_meter_t)m_data.torqueLimit;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingRequestSubscriber::GetRopMode(bool &ropMode)
{
    ropMode = (m_data.ropMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingRequestSubscriber::GetWobMode(bool &wobMode)
{
    wobMode = (m_data.wobMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingRequestSubscriber::GetDifferentialPressureMode(bool &differentialPressureMode)
{
    differentialPressureMode = (m_data.differentialPressureMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CDrillingRequestSubscriber::GetTorqueMode(bool &torqueMode)
{
    torqueMode = (m_data.torqueMode == DDS_BOOLEAN_TRUE);

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
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
            m_pOnDataAvailable(data);
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