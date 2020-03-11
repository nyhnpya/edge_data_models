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
#ifndef __SHELL_HMI_AUTOTUNERCONFIGURATION_WOB_TUNING_STATE_PUBLISHER_H__
#define __SHELL_HMI_AUTOTUNERCONFIGURATION_WOB_TUNING_STATE_PUBLISHER_H__

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
class CWobTuningStatePublisher : public TPublisher< Shell::Hmi::AutoTunerConfiguration::WobTuningState >
{
    public:
        CWobTuningStatePublisher();
        ~CWobTuningStatePublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        /// @param double wobFilter
        void SetWobFilter(const double wobFilter);
        /// @param double wobD
        void SetWobD(const double wobD);
        /// @param double wobF
        void SetWobF(const double wobF);
        /// @param double wobEps
        void SetWobEps(const double wobEps);
        /// @param bool wobEpsManual
        void SetWobEpsManual(const bool wobEpsManual);
        /// @param double wobKcMin
        void SetWobKcMin(const double wobKcMin);
        /// @param double wobKcMax
        void SetWobKcMax(const double wobKcMax);
        /// @param double wobTiMin
        void SetWobTiMin(const double wobTiMin);
        /// @param double wobTiMax
        void SetWobTiMax(const double wobTiMax);
        /// @param double wobInitK
        void SetWobInitK(const double wobInitK);
        /// @param double wobInitTau
        void SetWobInitTau(const double wobInitTau);
        /// @param double wobInitPreFilter
        void SetWobInitPreFilter(const double wobInitPreFilter);
        /// @param double wobR1
        void SetWobR1(const double wobR1);
        /// @param double wobR2
        void SetWobR2(const double wobR2);
};

#endif // __SHELL_HMI_AUTOTUNERCONFIGURATION_WOB_TUNING_STATE_PUBLISHER_H__
