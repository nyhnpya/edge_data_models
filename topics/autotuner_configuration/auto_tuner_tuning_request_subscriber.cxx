#include "auto_tuner_tuning_request_subscriber.h"

CAutoTunerTuningRequestSubscriber::CAutoTunerTuningRequestSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CAutoTunerTuningRequestSubscriber::~CAutoTunerTuningRequestSubscriber()
{
}

bool CAutoTunerTuningRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       Shell::Hmi::AutoTunerConfiguration::AUTOTUNER_TUNING_REQUEST,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CAutoTunerTuningRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

std::string CAutoTunerTuningRequestSubscriber::GetId()
{
    return m_data.id;
}

double CAutoTunerTuningRequestSubscriber::GetFilter()
{
    return m_data.filter;
}

double CAutoTunerTuningRequestSubscriber::GetD()
{
    return m_data.d;
}

double CAutoTunerTuningRequestSubscriber::GetF()
{
    return m_data.f;
}

double CAutoTunerTuningRequestSubscriber::GetEpsilon()
{
    return m_data.epsilon;
}

bool CAutoTunerTuningRequestSubscriber::GetEpsilonManual()
{
    return m_data.epsilonManual;
}

double CAutoTunerTuningRequestSubscriber::GetKcMin()
{
    return m_data.kcMin;
}

double CAutoTunerTuningRequestSubscriber::GetKcMax()
{
    return m_data.kcMax;
}

double CAutoTunerTuningRequestSubscriber::GetTiMin()
{
    return m_data.tiMin;
}

double CAutoTunerTuningRequestSubscriber::GetTiMax()
{
    return m_data.tiMax;
}


void CAutoTunerTuningRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CAutoTunerTuningRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CAutoTunerTuningRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CAutoTunerTuningRequestSubscriber::DataAvailable(const Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequest &data,
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

void CAutoTunerTuningRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CAutoTunerTuningRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

