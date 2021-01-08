/*
 *  Copyright (c) 2017 Ensign Energy Incorporated
 *  All Rights Reserved.
 *
 * NOTICE:  All information contained herein is, and remains
 * the property of Ensign Energy Incorporated and its suppliers,
 * if any.  The intellectual and technical concepts contained
 * herein are proprietary to Ensign Energy Incorporated
 * and its suppliers and may be covered by U.S. and Foreign Patents,
 * patents in process, and are protected by trade secret or copyright law.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from Ensign Energy Incorporated.
 */
#ifndef __RESOURCES_PUBLISHER_H__ 
#define __RESOURCES_PUBLISHER_H__ 

#include "keyed_data_writer.h"
#include "resources.h"
#include "resourcesSupport.h"

#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::pressure;

class CResourcesPublisher : public TKeyedDataWriter< sys::process::Resources  >
{
 public:
    CResourcesPublisher();
    ~CResourcesPublisher();

    bool Create(const std::string &publisher);
    bool Initialize();
    bool PublishSample();

    void SetProcessName(const char* processName);
    void SetPID(uint32_t pid);
    void SetUpTime(double upTime);
    void SetCPUPercent(double cpuPercent);
    void SetMinCPUPercent(double minCpuPercent);
    void SetMaxCPUPercent(double maxCpuPercent);
    void SetVMPeak(double vmPeak);
    void SetVMSize(double vmSize);
    void SetVMSwap(double vmSwap);
    void SetVMMaxSwap(double vmMaxSwap);
    void SetNumThreads(int32_t numThreads);
    void SetMinNumThreads(int32_t minNumThreads);
    void SetMaxNumThreads(int32_t maxNumThreads);
    void SetOSName(const char* osName);
    void SetAppVersion(const char* appVersion);

 private:
    uint8_t *m_pProcessName;
};

#endif // __RESOURCES_PUBLISHER_H__ 
