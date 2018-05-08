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

DataTypes::Uuid CHoistRequestSubscriber::GetId()
{
    return m_data.id;
}

DataTypes::Priority CHoistRequestSubscriber::GetPriority()
{
    return m_data.priority;
}

DataTypes::Time CHoistRequestSubscriber::GetTimeNeeded()
{
    return m_data.timeNeeded;
}

DataTypes::Time CHoistRequestSubscriber::GetDuration()
{
    return m_data.estimatedDuration;
}

meters_per_second_t CHoistRequestSubscriber::GetTargetVelocity()
{
    return (meters_per_second_t)m_data.targetVelocity;
}

meter_t CHoistRequestSubscriber::GetTargetPosition()
{
    return (meter_t)m_data.targetPosition;
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
            m_pOnDataAvailable();
        }
    }
}

void CHoistRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
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
