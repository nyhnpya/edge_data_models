/*
 *  Copyright (c) 2019 Ensign Energy Incorporated
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
#ifndef __SHELL_HMI_AUTOTUNERCONFIGURATION_DIFFP_TUNING_REQUEST_PUBLISHER_H__
#define __SHELL_HMI_AUTOTUNERCONFIGURATION_DIFFP_TUNING_REQUEST_PUBLISHER_H__

#include "publisher.h"
#include "autotuner_configuration.h"
#include "autotuner_configurationSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

/// @brief Requested state change in the rotation system.
///
///
class CDiffpTuningRequestPublisher : public TPublisher< Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest >
{
    public:
        CDiffpTuningRequestPublisher();
        ~CDiffpTuningRequestPublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        /// @param double diffPFilter
        void SetDiffPFilter(const double diffPFilter);
        /// @param double diffPD
        void SetDiffPD(const double diffPD);
        /// @param double diffPF
        void SetDiffPF(const double diffPF);
        /// @param double diffPEps
        void SetDiffPEps(const double diffPEps);
        /// @param bool diffPEpsManual
        void SetDiffPEpsManual(const bool diffPEpsManual);
        /// @param double diffPKcMin
        void SetDiffPKcMin(const double diffPKcMin);
        /// @param double diffPKcMax
        void SetDiffPKcMax(const double diffPKcMax);
        /// @param double diffPTiMin
        void SetDiffPTiMin(const double diffPTiMin);
        /// @param double diffPTiMax
        void SetDiffPTiMax(const double diffPTiMax);
};

#endif // __SHELL_HMI_AUTOTUNERCONFIGURATION_DIFFP_TUNING_REQUEST_PUBLISHER_H__
