#include "resources_subscriber.h"


CResourcesSubscriber::CResourcesSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CResourcesSubscriber::~CResourcesSubscriber()
{
}

bool CResourcesSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

const char* CResourcesSubscriber::GetProcessName()
{
    return m_data.processName;
}

uint32_t CResourcesSubscriber::GetPID()
{
    return m_data.pid;
}

double CResourcesSubscriber::GetUpTime()
{
    return m_data.upTime;
}

double CResourcesSubscriber::GetCPUPercent()
{
    return m_data.cpuPercent;
}

double CResourcesSubscriber::GetMinCPUPercent()
{
    return m_data.minCpuPercent;
}

double CResourcesSubscriber::GetMaxCPUPercent()
{
    return m_data.maxCpuPercent;
}

double CResourcesSubscriber::GetVMPeak()
{
    return m_data.vmPeak;
}

double CResourcesSubscriber::GetVMSize()
{
    return m_data.vmSize;
}

double CResourcesSubscriber::GetVMSwap()
{
    return m_data.vmSwap;
}

double CResourcesSubscriber::GetVMMaxSwap()
{
    return m_data.vmMaxSwap;
}

int32_t CResourcesSubscriber::GetNumThreads()
{
    return m_data.numThreads;
}

int32_t CResourcesSubscriber::GetMinNumThreads()
{
    return m_data.minNumThreads;
}

int32_t CResourcesSubscriber::GetMaxNumThreads()
{
    return m_data.maxNumThreads;
}

const char* CResourcesSubscriber::GetOSName()
{
    return m_data.osName;
}

const char* CResourcesSubscriber::GetAppVersion()
{
    return m_data.appVersion;
}

bool CResourcesSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               sys::process::RESOURCES,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CResourcesSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CResourcesSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CResourcesSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

void CResourcesSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CResourcesSubscriber::DataAvailable(const sys::process::Resources &data,
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

void CResourcesSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CResourcesSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CResourcesSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
