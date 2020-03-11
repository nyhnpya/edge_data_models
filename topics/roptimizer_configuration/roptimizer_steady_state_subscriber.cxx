#include "roptimizer_steady_state_subscriber.h"

CRoptimizerSteadyStateSubscriber::CRoptimizerSteadyStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CRoptimizerSteadyStateSubscriber::~CRoptimizerSteadyStateSubscriber()
{
}

bool CRoptimizerSteadyStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       Shell::Hmi::ROPTIMIZER_STEADY_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CRoptimizerSteadyStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CRoptimizerSteadyStateSubscriber::GetRpmSteadyState()
{
    return m_data.rpmSteadyState;
}

bool CRoptimizerSteadyStateSubscriber::GetRopSteadyState()
{
    return m_data.ropSteadyState;
}

bool CRoptimizerSteadyStateSubscriber::GetWobSteadyState()
{
    return m_data.wobSteadyState;
}

bool CRoptimizerSteadyStateSubscriber::GetTorqueSteadyState()
{
    return m_data.torqueSteadyState;
}

double CRoptimizerSteadyStateSubscriber::GetBitWear()
{
    return m_data.bitWear;
}

double CRoptimizerSteadyStateSubscriber::GetMse()
{
    return m_data.mse;
}

double CRoptimizerSteadyStateSubscriber::GetPower()
{
    return m_data.power;
}


void CRoptimizerSteadyStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CRoptimizerSteadyStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CRoptimizerSteadyStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CRoptimizerSteadyStateSubscriber::DataAvailable(const Shell::Hmi::RoptimizerSteadyState &data,
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

void CRoptimizerSteadyStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CRoptimizerSteadyStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

