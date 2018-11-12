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
//    CDdsUuid uuid;

//    uuid.GenerateUuid();
//    m_pDataInstance->id = DDS_String_dup(uuid.c_str());

    return true;
}

void CProcessInfoPublisher::SetProcessName(const char* processName)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->processName = DDS_String_dup(processName);
    }
    else
    {
        LOG_ERROR("Failed to set Process Name on uninitialized sample");
    }
}

void CProcessInfoPublisher::SetPID(uint32_t pid)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->pid = pid;
    }
    else
    {
        LOG_ERROR("Failed to set PID on uninitialized sample");
    }
}

void CProcessInfoPublisher::SetUpTime(double upTime)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->upTime = upTime;
    }
    else
    {
        LOG_ERROR("Failed to set Up Time on uninitialized sample");
    }
}

void CProcessInfoPublisher::SetCPUPercent(double cpuPercent)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->cpuPercent = cpuPercent;
    }
    else
    {
        LOG_ERROR("Failed to set CPU Percent on uninitialized sample");
    }
}

void CProcessInfoPublisher::SetVMPeak(double vmPeak)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->vmPeak = vmPeak;
    }
    else
    {
        LOG_ERROR("Failed to set VM Peak on uninitialized sample");
    }
}

void CProcessInfoPublisher::SetVMSize(double vmSize)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->vmSize = vmSize;
    }
    else
    {
        LOG_ERROR("Failed to set VM Size on uninitialized sample");
    }
}

void CProcessInfoPublisher::SetVMSwap(double vmSwap)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->vmSwap = vmSwap;
    }
    else
    {
        LOG_ERROR("Failed to set VM Swap on uninitialized sample");
    }
}

void CProcessInfoPublisher::SetVMMaxSwap(double vmMaxSwap)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->vmMaxSwap = vmMaxSwap;
    }
    else
    {
        LOG_ERROR("Failed to set VM Max Swap on uninitialized sample");
    }
}

void CProcessInfoPublisher::SetThreads(int32_t threads)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->threads = threads;
    }
    else
    {
        LOG_ERROR("Failed to set Threads on uninitialized sample");
    }
}

bool CProcessInfoPublisher::PublishSample()
{
    bool bRetVal = false;
    DDS_Time_t currentTime;

    GetParticipant()->get_current_time(currentTime);
    m_pDataInstance->timestamp.sec = currentTime.sec;
    m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    bRetVal = Publish();

    return bRetVal;
}

bool CProcessInfoPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              process::maintanence::PROCESS_INFO,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
