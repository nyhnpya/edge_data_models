#include "model_state_subscriber.h"

CModelStateSubscriber::CModelStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CModelStateSubscriber::~CModelStateSubscriber()
{
}

bool CModelStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       Shell::Hmi::AutoTunerConfiguration::MODEL_STATE_STATE,
                       "EdgeBaseLibrary",
                       "ConfigProfile");
}

bool CModelStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

units::length::meter_t CModelStateSubscriber::GetPipeInnerDiameter()
{
    return units::length::meter_t(m_data.pipeInnerDiameter);
}

units::length::meter_t CModelStateSubscriber::GetPipeOuterDiameter()
{
    return units::length::meter_t(m_data.pipeOuterDiameter);
}

double CModelStateSubscriber::GetSlopeFilter()
{
    return m_data.slopeFilter;
}

double CModelStateSubscriber::GetTauMax()
{
    return m_data.tauMax;
}

double CModelStateSubscriber::GetTauMin()
{
    return m_data.tauMin;
}

double CModelStateSubscriber::GetTauMultiplier()
{
    return m_data.tauMultiplier;
}

double CModelStateSubscriber::GetMaxDeviation()
{
    return m_data.maxDeviation;
}

double CModelStateSubscriber::GetMinInterval()
{
    return m_data.minInterval;
}

bool CModelStateSubscriber::GetTunerEnabled()
{
    return m_data.tunerEnabled;
}


void CModelStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CModelStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CModelStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CModelStateSubscriber::DataAvailable(const Shell::Hmi::AutoTunerConfiguration::ModelState &data,
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

void CModelStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CModelStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

