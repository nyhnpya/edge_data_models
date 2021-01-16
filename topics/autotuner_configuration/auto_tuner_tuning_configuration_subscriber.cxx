#include "auto_tuner_tuning_configuration_subscriber.h"

CAutoTunerTuningConfigurationSubscriber::CAutoTunerTuningConfigurationSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CAutoTunerTuningConfigurationSubscriber::~CAutoTunerTuningConfigurationSubscriber()
{
}

bool CAutoTunerTuningConfigurationSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       Shell::Hmi::AutoTunerConfiguration::AUTOTUNER_TUNING_CONFIGURATION,
                       "EdgeBaseLibrary",
                       "ConfigProfile");
}

bool CAutoTunerTuningConfigurationSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

std::string CAutoTunerTuningConfigurationSubscriber::GetId()
{
    return m_data.id;
}

double CAutoTunerTuningConfigurationSubscriber::GetFilter()
{
    return m_data.filter;
}

double CAutoTunerTuningConfigurationSubscriber::GetD()
{
    return m_data.d;
}

double CAutoTunerTuningConfigurationSubscriber::GetF()
{
    return m_data.f;
}

double CAutoTunerTuningConfigurationSubscriber::GetEpsilon()
{
    return m_data.epsilon;
}

bool CAutoTunerTuningConfigurationSubscriber::GetEpsilonManual()
{
    return m_data.epsilonManual;
}

double CAutoTunerTuningConfigurationSubscriber::GetKcMin()
{
    return m_data.kcMin;
}

double CAutoTunerTuningConfigurationSubscriber::GetKcMax()
{
    return m_data.kcMax;
}

double CAutoTunerTuningConfigurationSubscriber::GetTiMin()
{
    return m_data.tiMin;
}

double CAutoTunerTuningConfigurationSubscriber::GetTiMax()
{
    return m_data.tiMax;
}

double CAutoTunerTuningConfigurationSubscriber::GetInitK()
{
    return m_data.initK;
}

double CAutoTunerTuningConfigurationSubscriber::GetInitTau()
{
    return m_data.initTau;
}

double CAutoTunerTuningConfigurationSubscriber::GetInitPreFilter()
{
    return m_data.initPreFilter;
}

double CAutoTunerTuningConfigurationSubscriber::GetR1()
{
    return m_data.r1;
}

double CAutoTunerTuningConfigurationSubscriber::GetR2()
{
    return m_data.r2;
}


void CAutoTunerTuningConfigurationSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CAutoTunerTuningConfigurationSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CAutoTunerTuningConfigurationSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CAutoTunerTuningConfigurationSubscriber::DataAvailable(const Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningConfiguration &data,
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

void CAutoTunerTuningConfigurationSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CAutoTunerTuningConfigurationSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

