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
    void Initialize(int32_t domain);
    void PublishHeartbeat();

private:
    ProcessInfo           m_processInfo;
    ProcessStats          m_processStats;
    CResourcesPublisher   m_resourcesPublisher;
};
