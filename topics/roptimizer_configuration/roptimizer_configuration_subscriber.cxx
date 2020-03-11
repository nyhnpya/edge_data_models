#include "roptimizer_configuration_subscriber.h"

CRoptimizerConfigurationSubscriber::CRoptimizerConfigurationSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CRoptimizerConfigurationSubscriber::~CRoptimizerConfigurationSubscriber()
{
}

bool CRoptimizerConfigurationSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       Shell::Hmi::ROPTIMIZER_CONFIGURATION,
                       "EdgeBaseLibrary",
                       "ConfigProfile");
}

bool CRoptimizerConfigurationSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

int32_t CRoptimizerConfigurationSubscriber::GetSteadyStateWindow()
{
    return m_data.steadyStateWindow;
}

int32_t CRoptimizerConfigurationSubscriber::GetSteadyStateMin()
{
    return m_data.steadyStateMin;
}

int32_t CRoptimizerConfigurationSubscriber::GetRpmStepSize()
{
    return m_data.rpmStepSize;
}

int32_t CRoptimizerConfigurationSubscriber::GetRopStepSize()
{
    return m_data.ropStepSize;
}


void CRoptimizerConfigurationSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CRoptimizerConfigurationSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CRoptimizerConfigurationSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CRoptimizerConfigurationSubscriber::DataAvailable(const Shell::Hmi::RoptimizerConfiguration &data,
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

void CRoptimizerConfigurationSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CRoptimizerConfigurationSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

