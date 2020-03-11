#include "diffp_tuning_state_subscriber.h"

CDiffpTuningStateSubscriber::CDiffpTuningStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CDiffpTuningStateSubscriber::~CDiffpTuningStateSubscriber()
{
}

bool CDiffpTuningStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       Shell::Hmi::AutoTunerConfiguration::DIFFP_TUNING_STATE,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CDiffpTuningStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

double CDiffpTuningStateSubscriber::GetDiffPFilter()
{
    return m_data.diffPFilter;
}

double CDiffpTuningStateSubscriber::GetDiffPD()
{
    return m_data.diffPD;
}

double CDiffpTuningStateSubscriber::GetDiffPF()
{
    return m_data.diffPF;
}

double CDiffpTuningStateSubscriber::GetDiffPEps()
{
    return m_data.diffPEps;
}

bool CDiffpTuningStateSubscriber::GetDiffPEpsManual()
{
    return m_data.diffPEpsManual;
}

double CDiffpTuningStateSubscriber::GetDiffPKcMin()
{
    return m_data.diffPKcMin;
}

double CDiffpTuningStateSubscriber::GetDiffPKcMax()
{
    return m_data.diffPKcMax;
}

double CDiffpTuningStateSubscriber::GetDiffPTiMin()
{
    return m_data.diffPTiMin;
}

double CDiffpTuningStateSubscriber::GetDiffPTiMax()
{
    return m_data.diffPTiMax;
}

double CDiffpTuningStateSubscriber::GetDiffPInitK()
{
    return m_data.diffPInitK;
}

double CDiffpTuningStateSubscriber::GetDiffPInitTau()
{
    return m_data.diffPInitTau;
}

double CDiffpTuningStateSubscriber::GetDiffPInitPreFilter()
{
    return m_data.diffPInitPreFilter;
}

double CDiffpTuningStateSubscriber::GetDiffPR1()
{
    return m_data.diffPR1;
}

double CDiffpTuningStateSubscriber::GetDiffPR2()
{
    return m_data.diffPR2;
}


void CDiffpTuningStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CDiffpTuningStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CDiffpTuningStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CDiffpTuningStateSubscriber::DataAvailable(const Shell::Hmi::AutoTunerConfiguration::DiffpTuningState &data,
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

void CDiffpTuningStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CDiffpTuningStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

