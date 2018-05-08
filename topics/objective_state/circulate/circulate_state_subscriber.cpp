#include "circulate_state_subscriber.h"

CCirculateStateSubscriber::CCirculateStateSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CCirculateStateSubscriber::~CCirculateStateSubscriber()
{
}

bool CCirculateStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

DataTypes::Uuid CCirculateStateSubscriber::GetId()
{
    return m_data.id;
}

DataTypes::Status CCirculateStateSubscriber::GetStatus()
{
    return m_data.status;
}

double CCirculateStateSubscriber::GetActualFlowRate()
{
    return m_data.actualFlowRate;
}

pascal_t CCirculateStateSubscriber::GetActualStandpipePressure()
{
    return ((pascal_t)m_data.actualStandpipePressure / 1000);
}

double CCirculateStateSubscriber::GetMinFlowRate()
{
    return m_data.minFlowRate;
}

double CCirculateStateSubscriber::GetMaxFlowRate()
{
    return m_data.maxFlowRate;
}

pascal_t CCirculateStateSubscriber::GetMinStandpipePressure()
{
    return ((pascal_t)m_data.minStandpipePressure / 1000);
}

pascal_t CCirculateStateSubscriber::GetMaxStandpipePressure()
{
    return ((pascal_t)m_data.maxStandpipePressure / 1000);
}

double CCirculateStateSubscriber::GetTargetFlowRate()
{
    return m_data.targetFlowRate;
}

bool CCirculateStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               nec::process::CIRCULATE_STATE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
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

void CCirculateStateSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
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
            m_pOnDataAvailable();
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

void CCirculateStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
