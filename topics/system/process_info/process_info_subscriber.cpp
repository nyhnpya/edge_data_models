#include "process_info_subscriber.h"


CProcessInfoSubscriber::CProcessInfoSubscriber() :
    m_pOnDataAvailable(nullptr)
{
}

CProcessInfoSubscriber::~CProcessInfoSubscriber()
{
}

bool CProcessInfoSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

const char* CProcessInfoSubscriber::GetProcessName()
{
    return m_data.processName;
}

uint32_t CProcessInfoSubscriber::GetPID()
{
    return m_data.pid;
}

double CProcessInfoSubscriber::GetUpTime()
{
    return m_data.upTime;
}

double CProcessInfoSubscriber::GetCPUPercent()
{
    return m_data.cpuPercent;
}

double CProcessInfoSubscriber::GetVMPeak()
{
    return m_data.vmPeak;
}

double CProcessInfoSubscriber::GetVMSize()
{
    return m_data.vmSize;
}

double CProcessInfoSubscriber::GetVMSwap()
{
    return m_data.vmSwap;
}

double CProcessInfoSubscriber::GetVMMaxSwap()
{
    return m_data.vmMaxSwap;
}

int32_t CProcessInfoSubscriber::GetThreads()
{
    return m_data.threads;
}

bool CProcessInfoSubscriber::Create(int32_t domain)
{
    return TSubscriber::Create(domain,
                               process::maintanence::PROCESS_INFO,
                               "EdgeBaseLibrary",
                               "EdgeBaseProfile");
}

void CProcessInfoSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}

void CProcessInfoSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}

void CProcessInfoSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}

void CProcessInfoSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}

void CProcessInfoSubscriber::DataAvailable(const process::maintanence::ProcessState &data,
                                              const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        m_data = data;

        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable();
        }
    }
}

void CProcessInfoSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CProcessInfoSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CProcessInfoSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
