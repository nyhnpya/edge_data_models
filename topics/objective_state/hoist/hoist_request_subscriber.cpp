#include "hoist_request_subscriber.h"

CHoistRequestSubscriber::CHoistRequestSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CHoistRequestSubscriber::~CHoistRequestSubscriber()
{
}

bool CHoistRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistRequestSubscriber::GetId(DataTypes::Uuid &id)
{
    //    memcpy(id, m_data.id, sizeof(DataTypes::Uuid));

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistRequestSubscriber::GetPriority(DataTypes::Priority &priority)
{
    priority = m_data.priority;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistRequestSubscriber::GetTimeNeeded(DataTypes::Time &timeNeeded)
{
    timeNeeded = m_data.timeNeeded;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistRequestSubscriber::GetDuration(DataTypes::Time &duration)
{
    duration = m_data.estimatedDuration;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistRequestSubscriber::GetTargetVelocity(meters_per_second_t &targetVelocity)
{
    targetVelocity = (meters_per_second_t)m_data.targetVelocity;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistRequestSubscriber::GetTargetPosition(meter_t &targetPosition)
{
    targetPosition = (meter_t)m_data.targetPosition;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CHoistRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               nec::process::HOIST_REQUEST,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CHoistRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CHoistRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CHoistRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

void CHoistRequestSubscriber::DataAvailable(const nec::process::HoistRequest &data,
                                            const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        m_data = data;

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(data);
        }
    }
}

void CHoistRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CHoistRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}
