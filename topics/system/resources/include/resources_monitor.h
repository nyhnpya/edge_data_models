#pragma once
#include <chrono>
#include <stdint.h>
#include "resources_publisher.h"

struct ProcessStats
{
    long pid;
    char processName[128];
    double upTime;
    double cpuUsagePercent;
    double vmPeak;
    double vmSize;
    double vmSwap;
    double vmMaxSwap;
    int threads;
    char uname[256];
};

class ProcessInfo
{
public:
    ProcessInfo(void);

    void Initialize(ProcessStats *pProcessStats);

    int GetInfo(ProcessStats *pProcessStats);

private:
    std::chrono::time_point<std::chrono::high_resolution_clock> lastRunTime;
    uint64_t lastRunUserTime;
    uint64_t lastRunKernelTime;
};


class ResourcesMonitor
{
public:
    ResourcesMonitor();
    ~ResourcesMonitor();
    void Initialize(const char* appVersion, int32_t domain);
    void PublishHeartbeat();

private:
    ProcessInfo           m_processInfo;
    ProcessStats          m_processStats;
    CResourcesPublisher   m_resourcesPublisher;
    double                m_minCpuPercent;
    double                m_maxCpuPercent;
    int32_t               m_minNumThreads;
    int32_t               m_maxNumThreads;
    char*                 m_appVersion;
};
