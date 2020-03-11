#include "diffp_tuning_request_subscriber.h"

CDiffpTuningRequestSubscriber::CDiffpTuningRequestSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CDiffpTuningRequestSubscriber::~CDiffpTuningRequestSubscriber()
{
}

bool CDiffpTuningRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       Shell::Hmi::AutoTunerConfiguration::DIFFP_TUNING_REQUEST,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CDiffpTuningRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

double CDiffpTuningRequestSubscriber::GetDiffPFilter()
{
    return m_data.diffPFilter;
}

double CDiffpTuningRequestSubscriber::GetDiffPD()
{
    return m_data.diffPD;
}

double CDiffpTuningRequestSubscriber::GetDiffPF()
{
    return m_data.diffPF;
}

double CDiffpTuningRequestSubscriber::GetDiffPEps()
{
    return m_data.diffPEps;
}

bool CDiffpTuningRequestSubscriber::GetDiffPEpsManual()
{
    return m_data.diffPEpsManual;
}

double CDiffpTuningRequestSubscriber::GetDiffPKcMin()
{
    return m_data.diffPKcMin;
}

double CDiffpTuningRequestSubscriber::GetDiffPKcMax()
{
    return m_data.diffPKcMax;
}

double CDiffpTuningRequestSubscriber::GetDiffPTiMin()
{
    return m_data.diffPTiMin;
}

double CDiffpTuningRequestSubscriber::GetDiffPTiMax()
{
    return m_data.diffPTiMax;
}


void CDiffpTuningRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CDiffpTuningRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CDiffpTuningRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CDiffpTuningRequestSubscriber::DataAvailable(const Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest &data,
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

void CDiffpTuningRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CDiffpTuningRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

