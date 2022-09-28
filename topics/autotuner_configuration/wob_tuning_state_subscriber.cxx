#include "wob_tuning_state_subscriber.h"

CWobTuningStateSubscriber::CWobTuningStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CWobTuningStateSubscriber::~CWobTuningStateSubscriber()
{
}

bool CWobTuningStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       Shell::Hmi::AutoTunerConfiguration::WOB_TUNING_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CWobTuningStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

double CWobTuningStateSubscriber::GetFilter()
{
    return m_data.filter;
}

double CWobTuningStateSubscriber::GetD()
{
    return m_data.d;
}

double CWobTuningStateSubscriber::GetF()
{
    return m_data.f;
}

double CWobTuningStateSubscriber::GetEpsilon()
{
    return m_data.epsilon;
}

bool CWobTuningStateSubscriber::GetEpsilonManual()
{
    return m_data.epsilonManual;
}

double CWobTuningStateSubscriber::GetKcMin()
{
    return m_data.kcMin;
}

double CWobTuningStateSubscriber::GetKcMax()
{
    return m_data.kcMax;
}

double CWobTuningStateSubscriber::GetTiMin()
{
    return m_data.tiMin;
}

double CWobTuningStateSubscriber::GetTiMax()
{
    return m_data.tiMax;
}

double CWobTuningStateSubscriber::GetInitK()
{
    return m_data.initK;
}

double CWobTuningStateSubscriber::GetInitTau()
{
    return m_data.initTau;
}

double CWobTuningStateSubscriber::GetInitPreFilter()
{
    return m_data.initPreFilter;
}

double CWobTuningStateSubscriber::GetR1()
{
    return m_data.r1;
}

double CWobTuningStateSubscriber::GetR2()
{
    return m_data.r2;
}


void CWobTuningStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CWobTuningStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CWobTuningStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CWobTuningStateSubscriber::DataAvailable(const Shell::Hmi::AutoTunerConfiguration::WobTuningState &data,
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

void CWobTuningStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CWobTuningStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

