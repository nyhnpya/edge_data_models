#include <string.h>
#include "process_info_subscriber.h"

CProcessInfoSubscriber::CProcessInfoSubscriber()
{
}

CProcessInfoSubscriber::~CProcessInfoSubscriber()
{
}

bool CProcessInfoSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CProcessInfoSubscriber::GetProcessName(const char *processName)
{
    processName = m_data.processName;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CProcessInfoSubscriber::GetPid(int32_t &pid)
{
    pid = m_data.pid;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CProcessInfoSubscriber::GetTotalVirtualMemaory(int64_t &totalVirtualMemory)
{
    totalVirtualMemory = m_data.totalVirtualMemory;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CProcessInfoSubscriber::GetUsedVirtualMemory(int64_t &usedVirtualMemory)
{
    usedVirtualMemory = m_data.usedVirtualMemory;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CProcessInfoSubscriber::GetTotalPhysicalMemaory(int64_t &totalPhysicalMemory)
{
    totalPhysicalMemory = m_data.totalPhysicalMemory;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

bool CProcessInfoSubscriber::GetUsedPhysicalMemory(int64_t &usedPhysicalMemory)
{
    usedPhysicalMemory = m_data.usedPhysicalMemory;

    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
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
            m_pOnDataAvailable(data);
        }
    }
}

void CProcessInfoSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    LOG_INFO("Sample disposed");
    m_sampleInfo = sampleInfo;

    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CProcessInfoSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    LOG_INFO("Liveliness lost");
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CProcessInfoSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    LOG_INFO("Subscription matched");
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}
