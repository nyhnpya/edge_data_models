#include "model_state_request_subscriber.h"

CModelStateRequestSubscriber::CModelStateRequestSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CModelStateRequestSubscriber::~CModelStateRequestSubscriber()
{
}

bool CModelStateRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       Shell::Hmi::AutoTunerConfiguration::MODEL_STATE_REQUEST,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CModelStateRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CModelStateRequestSubscriber::GetModelReset()
{
    return m_data.modelReset;
}

units::length::meter_t CModelStateRequestSubscriber::GetPipeInnerDiameter()
{
    return units::length::meter_t(m_data.pipeInnerDiameter);
}

units::length::meter_t CModelStateRequestSubscriber::GetPipeOuterDiameter()
{
    return units::length::meter_t(m_data.pipeOuterDiameter);
}

double CModelStateRequestSubscriber::GetSlopeFilter()
{
    return m_data.slopeFilter;
}

double CModelStateRequestSubscriber::GetTauMax()
{
    return m_data.tauMax;
}

double CModelStateRequestSubscriber::GetTauMin()
{
    return m_data.tauMin;
}

double CModelStateRequestSubscriber::GetTauMultiplier()
{
    return m_data.tauMultiplier;
}

double CModelStateRequestSubscriber::GetMaxDeviation()
{
    return m_data.maxDeviation;
}

double CModelStateRequestSubscriber::GetMinInterval()
{
    return m_data.minInterval;
}


void CModelStateRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CModelStateRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CModelStateRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CModelStateRequestSubscriber::DataAvailable(const Shell::Hmi::AutoTunerConfiguration::ModelStateRequest &data,
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

void CModelStateRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CModelStateRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

