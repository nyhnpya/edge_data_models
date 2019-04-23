#include "resources_monitor.h"

CResourcesMonitor *CResourcesMonitor::m_pInstance = nullptr;
std::mutex CResourcesMonitor::m_instanceMutex;

CResourcesMonitor *CResourcesMonitor::Instance()
{
    m_instanceMutex.lock();
    {
        if (m_pInstance == nullptr)
        {
            m_pInstance = new CResourcesMonitor();
        }
    }
    m_instanceMutex.unlock();

    return m_pInstance;
}

void CResourcesMonitor::Destroy()
{
    m_instanceMutex.lock();
    {
        if (m_pInstance != nullptr)
        {
            m_pInstance->m_dataMutex.lock();
            {
                m_pInstance->m_resourcesPublisher.DeleteInstance();
                m_pInstance->m_resourcesPublisher.Destroy();
            }
            m_pInstance->m_dataMutex.unlock();

            delete m_pInstance;
            m_pInstance = nullptr;
        }
    }
    m_instanceMutex.unlock();
}

CResourcesMonitor::CResourcesMonitor() :
    m_minCpuPercent(0),
    m_maxCpuPercent(100),
    m_minNumThreads(0),
    m_maxNumThreads(0),
    m_appVersion(nullptr)
{
}

CResourcesMonitor::~CResourcesMonitor()
{
    free(m_appVersion);
}

void CResourcesMonitor::Initialize(const char* appVersion, int32_t domain)
{
    m_appVersion = strdup(appVersion);

    m_processInfo.GetInfo(&m_processStats);

    m_minNumThreads = m_processStats.threads;
    m_minCpuPercent = m_processStats.cpuUsagePercent;
    m_maxCpuPercent = m_processStats.cpuUsagePercent;
    m_maxNumThreads = 0;

    if (m_resourcesPublisher.Create(domain) == true)
    {
        m_resourcesPublisher.SetProcessName(m_processStats.processName);
        m_resourcesPublisher.CreateInstance();
    }
}

void CResourcesMonitor::PublishHeartbeat()
{
    m_dataMutex.lock();
    {
        m_processInfo.GetInfo(&m_processStats);

        if (m_minCpuPercent > m_processStats.cpuUsagePercent)
        {
            m_minCpuPercent = m_processStats.cpuUsagePercent;
        }

        if (m_maxCpuPercent < m_processStats.cpuUsagePercent)
        {
            m_maxCpuPercent = m_processStats.cpuUsagePercent;
        }

        if (m_minNumThreads > m_processStats.threads)
        {
            m_minNumThreads = m_processStats.threads;
        }

        if (m_maxNumThreads < m_processStats.threads)
        {
            m_maxNumThreads = m_processStats.threads;
        }

        m_resourcesPublisher.SetPID((uint32_t)m_processStats.pid);
        m_resourcesPublisher.SetUpTime(m_processStats.upTime);
        m_resourcesPublisher.SetCPUPercent(m_processStats.cpuUsagePercent);
        m_resourcesPublisher.SetMinCPUPercent(m_minCpuPercent);
        m_resourcesPublisher.SetMaxCPUPercent(m_maxCpuPercent);
        m_resourcesPublisher.SetVMPeak(m_processStats.vmPeak);
        m_resourcesPublisher.SetVMSize(m_processStats.vmSize);
        m_resourcesPublisher.SetVMSwap(m_processStats.vmSwap);
        m_resourcesPublisher.SetVMMaxSwap(m_processStats.vmMaxSwap);
        m_resourcesPublisher.SetNumThreads(m_processStats.threads);
        m_resourcesPublisher.SetMinNumThreads(m_minNumThreads);
        m_resourcesPublisher.SetMaxNumThreads(m_maxNumThreads);
        m_resourcesPublisher.SetOSName(m_processStats.uname);
        m_resourcesPublisher.SetAppVersion(m_appVersion);
        m_resourcesPublisher.PublishSample();
    }
    m_dataMutex.unlock();
}
