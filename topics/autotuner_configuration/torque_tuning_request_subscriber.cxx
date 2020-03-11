#include "torque_tuning_request_subscriber.h"

CTorqueTuningRequestSubscriber::CTorqueTuningRequestSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CTorqueTuningRequestSubscriber::~CTorqueTuningRequestSubscriber()
{
}

bool CTorqueTuningRequestSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                       Shell::Hmi::AutoTunerConfiguration::TORQUE_TUNING_REQUEST,
                       "EdgeBaseLibrary",
                       "EdgeBaseProfile");
}

bool CTorqueTuningRequestSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

double CTorqueTuningRequestSubscriber::GetTorqueFilter()
{
    return m_data.torqueFilter;
}

double CTorqueTuningRequestSubscriber::GetTorqueD()
{
    return m_data.torqueD;
}

double CTorqueTuningRequestSubscriber::GetTorqueF()
{
    return m_data.torqueF;
}

double CTorqueTuningRequestSubscriber::GetTorqueEps()
{
    return m_data.torqueEps;
}

bool CTorqueTuningRequestSubscriber::GetTorqueEpsManual()
{
    return m_data.torqueEpsManual;
}

double CTorqueTuningRequestSubscriber::GetTorqueKcMin()
{
    return m_data.torqueKcMin;
}

double CTorqueTuningRequestSubscriber::GetTorqueKcMax()
{
    return m_data.torqueKcMax;
}

double CTorqueTuningRequestSubscriber::GetTorqueTiMin()
{
    return m_data.torqueTiMin;
}

double CTorqueTuningRequestSubscriber::GetTorqueTiMax()
{
    return m_data.torqueTiMax;
}


void CTorqueTuningRequestSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CTorqueTuningRequestSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CTorqueTuningRequestSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}



void CTorqueTuningRequestSubscriber::DataAvailable(const Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest &data,
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

void CTorqueTuningRequestSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CTorqueTuningRequestSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

