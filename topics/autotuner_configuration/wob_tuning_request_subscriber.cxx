#include "wob_tuning_request_subscriber.h"

CWobTuningRequestSubscriber::CWobTuningRequestSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CWobTuningRequestSubscriber::~CWobTuningRequestSubscriber()
{
}

bool CWobTuningRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       Shell::Hmi::AutoTunerConfiguration::WOB_TUNING_REQUEST,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CWobTuningRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

double CWobTuningRequestSubscriber::GetWobFilter()
{
    return m_data.wobFilter;
}

double CWobTuningRequestSubscriber::GetWobD()
{
    return m_data.wobD;
}

double CWobTuningRequestSubscriber::GetWobF()
{
    return m_data.wobF;
}

double CWobTuningRequestSubscriber::GetWobEps()
{
    return m_data.wobEps;
}

bool CWobTuningRequestSubscriber::GetWobEpsManual()
{
    return m_data.wobEpsManual;
}

double CWobTuningRequestSubscriber::GetWobKcMin()
{
    return m_data.wobKcMin;
}

double CWobTuningRequestSubscriber::GetWobKcMax()
{
    return m_data.wobKcMax;
}

double CWobTuningRequestSubscriber::GetWobTiMin()
{
    return m_data.wobTiMin;
}

double CWobTuningRequestSubscriber::GetWobTiMax()
{
    return m_data.wobTiMax;
}


void CWobTuningRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CWobTuningRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CWobTuningRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CWobTuningRequestSubscriber::DataAvailable(const Shell::Hmi::AutoTunerConfiguration::WobTuningRequest &data,
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

void CWobTuningRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CWobTuningRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

