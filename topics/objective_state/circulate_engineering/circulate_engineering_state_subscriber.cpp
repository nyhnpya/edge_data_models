#include "circulate_engineering_state_subscriber.h"

CCirculateEngineeringStateSubscriber::CCirculateEngineeringStateSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CCirculateEngineeringStateSubscriber::~CCirculateEngineeringStateSubscriber()
{
}

bool CCirculateEngineeringStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

DataTypes::Uuid CCirculateEngineeringStateSubscriber::GetId()
{
    return m_data.id;
}

bool CCirculateEngineeringStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               nec::control::CIRCULATE_ENGINEERING_STATE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CCirculateEngineeringStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CCirculateEngineeringStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CCirculateEngineeringStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

void CCirculateEngineeringStateSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CCirculateEngineeringStateSubscriber::DataAvailable(const nec::control::CirculateEngineeringState &data,
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

void CCirculateEngineeringStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CCirculateEngineeringStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CCirculateEngineeringStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
