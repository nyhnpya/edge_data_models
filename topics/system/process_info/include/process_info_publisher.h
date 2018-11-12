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
#ifndef __PROCESS_INFO_PUBLISHER_H__ 
#define __PROCESS_INFO_PUBLISHER_H__ 

#include "publisher.h"
#include "process_info.h"
#include "process_infoSupport.h"

#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::pressure;

class CProcessInfoPublisher : public TPublisher< process::maintanence::ProcessState  >
{
 public:
    CProcessInfoPublisher();
    ~CProcessInfoPublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    void SetProcessName(const char* processName);
    void SetPID(uint32_t pid);
    void SetUpTime(double upTime);
    void SetCPUPercent(double cpuPercent);
    void SetVMPeak(double vmPeak);
    void SetVMSize(double vmSize);
    void SetVMSwap(double vmSwap);
    void SetVMMaxSwap(double vmMaxSwap);
    void SetThreads(int32_t threads);
};

#endif // __PROCESS_INFO_PUBLISHER_H__ 
