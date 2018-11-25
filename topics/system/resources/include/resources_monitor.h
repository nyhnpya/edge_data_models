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
#ifndef __RESOURCES_MONITOR_H__
#define __RESOURCES_MONITOR_H__

#include <chrono>
#include <stdint.h>
#include "resources_publisher.h"
#include "process_info.h"

class CResourcesMonitor
{
  public:
    CResourcesMonitor();
    ~CResourcesMonitor();

    void Initialize(const char* appVersion, int32_t domain);
    void PublishHeartbeat();

  private:
    CProcessInfo          m_processInfo;
    ProcessStats          m_processStats;
    CResourcesPublisher   m_resourcesPublisher;
    double                m_minCpuPercent;
    double                m_maxCpuPercent;
    int32_t               m_minNumThreads;
    int32_t               m_maxNumThreads;
    char*                 m_appVersion;
};


#endif // __RESOURCES_MONITOR_H__
