#include "model_state_state_subscriber.h"

CModelStateStateSubscriber::CModelStateStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CModelStateStateSubscriber::~CModelStateStateSubscriber()
{
}

bool CModelStateStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       Shell::Hmi::AutoTunerConfiguration::MODEL_STATE_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CModelStateStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

units::length::meter_t CModelStateStateSubscriber::GetPipeInnerDiameter()
{
    return units::length::meter_t(m_data.pipeInnerDiameter);
}

units::length::meter_t CModelStateStateSubscriber::GetPipeOuterDiameter()
{
    return units::length::meter_t(m_data.pipeOuterDiameter);
}

double CModelStateStateSubscriber::GetSlopeFilter()
{
    return m_data.slopeFilter;
}

double CModelStateStateSubscriber::GetTauMax()
{
    return m_data.tauMax;
}

double CModelStateStateSubscriber::GetTauMin()
{
    return m_data.tauMin;
}

double CModelStateStateSubscriber::GetTauMultiplier()
{
    return m_data.tauMultiplier;
}

double CModelStateStateSubscriber::GetMaxDeviation()
{
    return m_data.maxDeviation;
}

double CModelStateStateSubscriber::GetMinInterval()
{
    return m_data.minInterval;
}

bool CModelStateStateSubscriber::GetTunerEnabled()
{
    return m_data.tunerEnabled;
}


void CModelStateStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CModelStateStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CModelStateStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CModelStateStateSubscriber::DataAvailable(const Shell::Hmi::AutoTunerConfiguration::ModelStateState &data,
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

void CModelStateStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CModelStateStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

