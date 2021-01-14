#include "auto_tuner_tuning_state_subscriber.h"

CAutoTunerTuningStateSubscriber::CAutoTunerTuningStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CAutoTunerTuningStateSubscriber::~CAutoTunerTuningStateSubscriber()
{
}

bool CAutoTunerTuningStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       Shell::Hmi::AutoTunerConfiguration::AUTOTUNER_TUNING_STATE,
                       "EdgeBaseLibrary",
                       "ConfigProfile");
}

bool CAutoTunerTuningStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

std::string CAutoTunerTuningStateSubscriber::GetId()
{
    return m_data.id;
}

double CAutoTunerTuningStateSubscriber::GetFilter()
{
    return m_data.filter;
}

double CAutoTunerTuningStateSubscriber::GetD()
{
    return m_data.d;
}

double CAutoTunerTuningStateSubscriber::GetF()
{
    return m_data.f;
}

double CAutoTunerTuningStateSubscriber::GetEpsilon()
{
    return m_data.epsilon;
}

bool CAutoTunerTuningStateSubscriber::GetEpsilonManual()
{
    return m_data.epsilonManual;
}

double CAutoTunerTuningStateSubscriber::GetKcMin()
{
    return m_data.kcMin;
}

double CAutoTunerTuningStateSubscriber::GetKcMax()
{
    return m_data.kcMax;
}

double CAutoTunerTuningStateSubscriber::GetTiMin()
{
    return m_data.tiMin;
}

double CAutoTunerTuningStateSubscriber::GetTiMax()
{
    return m_data.tiMax;
}

double CAutoTunerTuningStateSubscriber::GetInitK()
{
    return m_data.initK;
}

double CAutoTunerTuningStateSubscriber::GetInitTau()
{
    return m_data.initTau;
}

double CAutoTunerTuningStateSubscriber::GetInitPreFilter()
{
    return m_data.initPreFilter;
}

double CAutoTunerTuningStateSubscriber::GetR1()
{
    return m_data.r1;
}

double CAutoTunerTuningStateSubscriber::GetR2()
{
    return m_data.r2;
}


void CAutoTunerTuningStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CAutoTunerTuningStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CAutoTunerTuningStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CAutoTunerTuningStateSubscriber::DataAvailable(const Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningState &data,
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

void CAutoTunerTuningStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CAutoTunerTuningStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

