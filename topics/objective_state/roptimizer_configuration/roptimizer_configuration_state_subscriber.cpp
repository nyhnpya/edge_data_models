#include "roptimizer_configuration_state_subscriber.h"

using namespace CRoptimizerConfigurationStateSubscriber;

CConfigurationStateStateSubscriber::CConfigurationStateStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnSubscriptionMatched(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
}

CConfigurationStateStateSubscriber::~CConfigurationStateStateSubscriber()
{
}

bool CConfigurationStateStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

double CConfigurationStateStateSubscriber::GetRpmState()
{
    return m_data.rpmState;
}

double CConfigurationStateStateSubscriber::GetRopState()
{
    return m_data.ropState;
}

double CConfigurationStateStateSubscriber::GetWobState()
{
    return m_data.wobState;
}

double CConfigurationStateStateSubscriber::GetTorqueState()
{
    return m_data.torqueState;
}

void CConfigurationStateStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CConfigurationStateStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CConfigurationStateStateSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CConfigurationStateStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

bool CConfigurationStateStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               Shell::Hmi::RoptimizerConfiguration::ROPTIMIZER_STEADY_STATE,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CConfigurationStateStateSubscriber::DataAvailable(const Shell::Hmi::RoptimizerConfiguration::RoptimizerSteadyState &data,
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

void CConfigurationStateStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CConfigurationStateStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}

void CConfigurationStateStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}


