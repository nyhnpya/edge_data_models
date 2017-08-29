#include "dds_uuid.h"
#include "process_info_publisher.h"

CProcessInfoPublisher::CProcessInfoPublisher()
{
}

CProcessInfoPublisher::~CProcessInfoPublisher()
{
}

bool CProcessInfoPublisher::Initialize()
{
    return true;
}

void CProcessInfoPublisher::SetProcessName(const char *processName)
{
    if (m_pDataInstance != nullptr)
    {
        strcpy(m_pDataInstance->processName, processName);
    }
    else
    {
        LOG_ERROR("Failed to set pid uninitialized sample");
    }
}

void CProcessInfoPublisher::SetPid(int32_t pid)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->pid = pid;
    }
    else
    {
        LOG_ERROR("Failed to set pid uninitialized sample");
    }
}

void CProcessInfoPublisher::SetTotalVirtualMemory(int64_t totalVirtualMemory)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->totalVirtualMemory = totalVirtualMemory;
    }
    else
    {
        LOG_ERROR("Failed to set total virtual memory on uninitialized sample");
    }
}

void CProcessInfoPublisher::SetUsedVirtualMemory(int64_t usedVirtualMemory)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->totalVirtualMemory = usedVirtualMemory;
    }
    else
    {
        LOG_ERROR("Failed to set used virtual memory on uninitialized sample");
    }
}

void CProcessInfoPublisher::SetTotalPhysicalMemory(int64_t totalPhysicalMemory)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->totalPhysicalMemory = totalPhysicalMemory;
    }
    else
    {
        LOG_ERROR("Failed to set total physical memory on uninitialized sample");
    }
}

void CProcessInfoPublisher::SetUsedPhysicalMemory(int64_t usedPhysicalMemory)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->totalPhysicalMemory = usedPhysicalMemory;
    }
    else
    {
        LOG_ERROR("Failed to set total physical memory on uninitialized sample");
    }
}

bool CProcessInfoPublisher::PublishSample()
{
    bool retVal = false;

    retVal = Publish();

    return retVal;
}

bool CProcessInfoPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              process::maintanence::PROCESS_INFO,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
