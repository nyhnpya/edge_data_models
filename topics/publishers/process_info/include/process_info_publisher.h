#ifndef __PROCESS_INFO_PUBLISHER_H__
#define __PROCESS_INFO_PUBLISHER_H__

#include "publisher.h"
#include "process_info.h"
#include "process_infoSupport.h"

class CProcessInfoPublisher : public TPublisher<process::maintanence::ProcessInfo>
{
public:
    CProcessInfoPublisher();
    virtual ~CProcessInfoPublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    // Topic setter
    void SetProcessName(const char *processName);
    void SetPid(int32_t pid);
    void SetTotalVirtualMemory(int64_t totalVirtualMemory);
    void SetUsedVirtualMemory(int64_t usedVirtualMemory);
    void SetTotalPhysicalMemory(int64_t totalPhysicalMemory);
    void SetUsedPhysicalMemory(int64_t usedPhysicalMemory);
};

#endif // __PROCESS_INFO_PUBLISHER_H__
