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
                       "ConfigProfile");
}

bool CDiffpTuningStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

double CDiffpTuningStateSubscriber::GetFilter()
{
    return m_data.filter;
}

double CDiffpTuningStateSubscriber::GetD()
{
    return m_data.d;
}

double CDiffpTuningStateSubscriber::GetF()
{
    return m_data.f;
}

double CDiffpTuningStateSubscriber::GetEpsilon()
{
    return m_data.epsilon;
}

bool CDiffpTuningStateSubscriber::GetEpsilonManual()
{
    return m_data.epsilonManual;
}

double CDiffpTuningStateSubscriber::GetKcMin()
{
    return m_data.kcMin;
}

double CDiffpTuningStateSubscriber::GetKcMax()
{
    return m_data.kcMax;
}

double CDiffpTuningStateSubscriber::GetTiMin()
{
    return m_data.tiMin;
}

double CDiffpTuningStateSubscriber::GetTiMax()
{
    return m_data.tiMax;
}

double CDiffpTuningStateSubscriber::GetInitK()
{
    return m_data.initK;
}

double CDiffpTuningStateSubscriber::GetInitTau()
{
    return m_data.initTau;
}

double CDiffpTuningStateSubscriber::GetInitPreFilter()
{
    return m_data.initPreFilter;
}

double CDiffpTuningStateSubscriber::GetR1()
{
    return m_data.r1;
}

double CDiffpTuningStateSubscriber::GetR2()
{
    return m_data.r2;
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

