/*
 *  Copyright (c) 2018 Ensign Energy Incorporated
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
#ifndef __PROCESS_INFO_H__
#define __PROCESS_INFO_H__

struct ProcessStats
{
    long    pid;
    char    processName[128];
    double  upTime;
    double  cpuUsagePercent;
    double  vmPeak;
    double  vmSize;
    double  vmSwap;
    double  vmMaxSwap;
    int32_t threads;
    char    uname[256];
};

class CProcessInfo
{
  public:
    CProcessInfo(void);
    ~CProcessInfo(void);

    void GetInfo(ProcessStats *pProcessStats);

  private:
    std::chrono::time_point<std::chrono::high_resolution_clock> m_lastRunTime;
    uint64_t m_lastRunUserTime;
    uint64_t m_lastRunKernelTime;
};

#endif // __PROCESS_INFO_H__
