#include "roptimizer_configuration_request_subscriber.h"

using namespace CRoptimizerConfigurationRequestSubscriber;

CConfigurationStateRequestSubscriber::CConfigurationStateRequestSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnSubscriptionMatched(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
}

CConfigurationStateRequestSubscriber::~CConfigurationStateRequestSubscriber()
{
}

bool CConfigurationStateRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

int32_t CConfigurationStateRequestSubscriber::GetSteadyStateWindow()
{
    return m_data.steadyStateWindow;
}

int32_t CConfigurationStateRequestSubscriber::GetSteadyStateMin()
{
    return m_data.steadyStateMin;
}

int32_t CConfigurationStateRequestSubscriber::GetRpmStepSize()
{
    return m_data.rpmStepSize;
}

int32_t CConfigurationStateRequestSubscriber::GetRopStepSize()
{
    return m_data.ropStepSize;
}

void CConfigurationStateRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CConfigurationStateRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CConfigurationStateRequestSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CConfigurationStateRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

bool CConfigurationStateRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               Shell::Hmi::RoptimizerConfiguration::ROPTIMIZER_CONFIGURATION_REQUEST,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CConfigurationStateRequestSubscriber::DataAvailable(const Shell::Hmi::RoptimizerConfiguration::RoptimizerConfigurationRequest &data,
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

void CConfigurationStateRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CConfigurationStateRequestSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}

void CConfigurationStateRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

