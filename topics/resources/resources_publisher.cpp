#include "dds_uuid.h"
#include "resources_publisher.h"

CResourcesPublisher::CResourcesPublisher() :
    m_pProcessName(nullptr)
{
}

CResourcesPublisher::~CResourcesPublisher()
{
    if (m_pProcessName != nullptr)
    {
        DDS_String_free((char *)m_pProcessName);
    }
}

bool CResourcesPublisher::Initialize()
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->processName = DDS_String_dup((const char *)m_pProcessName);
    }
    else
    {
        LOG_ERROR("Failed to set Process Name on uninitialized sample");
    }

    return true;
}

void CResourcesPublisher::SetProcessName(const char* processName)
{
    if (m_pProcessName == nullptr)
    {
        m_pProcessName = (uint8_t *)strdup(processName);
    }
}

void CResourcesPublisher::SetPID(uint32_t pid)
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

void CResourcesPublisher::SetUpTime(double upTime)
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

void CResourcesPublisher::SetCPUPercent(double cpuPercent)
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

void CResourcesPublisher::SetMinCPUPercent(double minCpuPercent)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minCpuPercent = minCpuPercent;
    }
    else
    {
        LOG_ERROR("Failed to set Min CPU Percent on uninitialized sample");
    }
}

void CResourcesPublisher::SetMaxCPUPercent(double maxCpuPercent)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxCpuPercent = maxCpuPercent;
    }
    else
    {
        LOG_ERROR("Failed to set Max CPU Percent on uninitialized sample");
    }
}

void CResourcesPublisher::SetVMPeak(double vmPeak)
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

void CResourcesPublisher::SetVMSize(double vmSize)
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

void CResourcesPublisher::SetVMSwap(double vmSwap)
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

void CResourcesPublisher::SetVMMaxSwap(double vmMaxSwap)
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

void CResourcesPublisher::SetNumThreads(int32_t numThreads)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->numThreads = numThreads;
    }
    else
    {
        LOG_ERROR("Failed to set Num Threads on uninitialized sample");
    }
}

void CResourcesPublisher::SetMinNumThreads(int32_t minNumThreads)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->minNumThreads = minNumThreads;
    }
    else
    {
        LOG_ERROR("Failed to set Min Num Threads on uninitialized sample");
    }
}

void CResourcesPublisher::SetMaxNumThreads(int32_t maxNumThreads)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->maxNumThreads = maxNumThreads;
    }
    else
    {
        LOG_ERROR("Failed to set Max Num Threads on uninitialized sample");
    }
}

void CResourcesPublisher::SetOSName(const char* osName)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->osName = DDS_String_dup(osName);
    }
    else
    {
        LOG_ERROR("Failed to set OS Name on uninitialized sample");
    }
}

void CResourcesPublisher::SetAppVersion(const char* appVersion)
{
    if (m_pDataInstance != nullptr)
    {
        m_pDataInstance->appVersion = DDS_String_dup(appVersion);
    }
    else
    {
        LOG_ERROR("Failed to set App Version on uninitialized sample");
    }
}

bool CResourcesPublisher::PublishSample()
{
    bool bRetVal = false;
    DDS_Time_t currentTime;

    GetParticipant()->get_current_time(currentTime);
    m_pDataInstance->timestamp.sec = currentTime.sec;
    m_pDataInstance->timestamp.nanosec = currentTime.nanosec;
    bRetVal = Publish();

    return bRetVal;
}

bool CResourcesPublisher::Create(int32_t domain)
{
    return TPublisher::Create(domain,
                              sys::process::RESOURCES,
                              "EdgeBaseLibrary",
                              "EdgeBaseProfile");
}
