#include "torque_tuning_state_subscriber.h"

CTorqueTuningStateSubscriber::CTorqueTuningStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CTorqueTuningStateSubscriber::~CTorqueTuningStateSubscriber()
{
}

bool CTorqueTuningStateSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       Shell::Hmi::AutoTunerConfiguration::TORQUE_TUNING_STATE,
                       "EdgeBaseLibrary",
                       "ConfigProfile");
}

bool CTorqueTuningStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

double CTorqueTuningStateSubscriber::GetFilter()
{
    return m_data.filter;
}

double CTorqueTuningStateSubscriber::GetD()
{
    return m_data.d;
}

double CTorqueTuningStateSubscriber::GetF()
{
    return m_data.f;
}

double CTorqueTuningStateSubscriber::GetEpsilon()
{
    return m_data.epsilon;
}

bool CTorqueTuningStateSubscriber::GetEpsilonManual()
{
    return m_data.epsilonManual;
}

double CTorqueTuningStateSubscriber::GetKcMin()
{
    return m_data.kcMin;
}

double CTorqueTuningStateSubscriber::GetKcMax()
{
    return m_data.kcMax;
}

double CTorqueTuningStateSubscriber::GetTiMin()
{
    return m_data.tiMin;
}

double CTorqueTuningStateSubscriber::GetTiMax()
{
    return m_data.tiMax;
}

double CTorqueTuningStateSubscriber::GetInitK()
{
    return m_data.initK;
}

double CTorqueTuningStateSubscriber::GetInitTau()
{
    return m_data.initTau;
}

double CTorqueTuningStateSubscriber::GetInitPreFilter()
{
    return m_data.initPreFilter;
}

double CTorqueTuningStateSubscriber::GetR1()
{
    return m_data.r1;
}

double CTorqueTuningStateSubscriber::GetR2()
{
    return m_data.r2;
}


void CTorqueTuningStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CTorqueTuningStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CTorqueTuningStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CTorqueTuningStateSubscriber::DataAvailable(const Shell::Hmi::AutoTunerConfiguration::TorqueTuningState &data,
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

void CTorqueTuningStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CTorqueTuningStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

