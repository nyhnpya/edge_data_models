#include "circulate_engineering_request_subscriber.h"

CCirculateEngineeringRequestSubscriber::CCirculateEngineeringRequestSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CCirculateEngineeringRequestSubscriber::~CCirculateEngineeringRequestSubscriber()
{
}

bool CCirculateEngineeringRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CCirculateEngineeringRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               nec::control::CIRCULATE_ENGINEERING_REQUEST,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CCirculateEngineeringRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CCirculateEngineeringRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CCirculateEngineeringRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

void CCirculateEngineeringRequestSubscriber::DataAvailable(const nec::control::CirculateEngineeringRequest &data,
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

void CCirculateEngineeringRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
}

void CCirculateEngineeringRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}
