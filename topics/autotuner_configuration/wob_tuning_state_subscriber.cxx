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

double CWobTuningStateSubscriber::GetWobFilter()
{
    return m_data.wobFilter;
}

double CWobTuningStateSubscriber::GetWobD()
{
    return m_data.wobD;
}

double CWobTuningStateSubscriber::GetWobF()
{
    return m_data.wobF;
}

double CWobTuningStateSubscriber::GetWobEps()
{
    return m_data.wobEps;
}

bool CWobTuningStateSubscriber::GetWobEpsManual()
{
    return m_data.wobEpsManual;
}

double CWobTuningStateSubscriber::GetWobKcMin()
{
    return m_data.wobKcMin;
}

double CWobTuningStateSubscriber::GetWobKcMax()
{
    return m_data.wobKcMax;
}

double CWobTuningStateSubscriber::GetWobTiMin()
{
    return m_data.wobTiMin;
}

double CWobTuningStateSubscriber::GetWobTiMax()
{
    return m_data.wobTiMax;
}

double CWobTuningStateSubscriber::GetWobInitK()
{
    return m_data.wobInitK;
}

double CWobTuningStateSubscriber::GetWobInitTau()
{
    return m_data.wobInitTau;
}

double CWobTuningStateSubscriber::GetWobInitPreFilter()
{
    return m_data.wobInitPreFilter;
}

double CWobTuningStateSubscriber::GetWobR1()
{
    return m_data.wobR1;
}

double CWobTuningStateSubscriber::GetWobR2()
{
    return m_data.wobR2;
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

