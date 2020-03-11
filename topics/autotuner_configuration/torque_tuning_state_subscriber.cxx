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
                       "EdgeBaseProfile");
}

bool CTorqueTuningStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

double CTorqueTuningStateSubscriber::GetTorqueFilter()
{
    return m_data.torqueFilter;
}

double CTorqueTuningStateSubscriber::GetTorqueD()
{
    return m_data.torqueD;
}

double CTorqueTuningStateSubscriber::GetTorqueF()
{
    return m_data.torqueF;
}

double CTorqueTuningStateSubscriber::GetTorqueEps()
{
    return m_data.torqueEps;
}

bool CTorqueTuningStateSubscriber::GetTorqueEpsManual()
{
    return m_data.torqueEpsManual;
}

double CTorqueTuningStateSubscriber::GetTorqueKcMin()
{
    return m_data.torqueKcMin;
}

double CTorqueTuningStateSubscriber::GetTorqueKcMax()
{
    return m_data.torqueKcMax;
}

double CTorqueTuningStateSubscriber::GetTorqueTiMin()
{
    return m_data.torqueTiMin;
}

double CTorqueTuningStateSubscriber::GetTorqueTiMax()
{
    return m_data.torqueTiMax;
}

double CTorqueTuningStateSubscriber::GetTorqueInitK()
{
    return m_data.torqueInitK;
}

double CTorqueTuningStateSubscriber::GetTorqueInitTau()
{
    return m_data.torqueInitTau;
}

double CTorqueTuningStateSubscriber::GetTorqueInitPreFilter()
{
    return m_data.torqueInitPreFilter;
}

double CTorqueTuningStateSubscriber::GetTorqueR1()
{
    return m_data.torqueR1;
}

double CTorqueTuningStateSubscriber::GetTorqueR2()
{
    return m_data.torqueR2;
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

