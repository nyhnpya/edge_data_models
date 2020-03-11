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
#ifndef __SHELL_HMI_AUTOTUNERCONFIGURATION_WOB_TUNING_REQUEST_PUBLISHER_H__
#define __SHELL_HMI_AUTOTUNERCONFIGURATION_WOB_TUNING_REQUEST_PUBLISHER_H__

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
class CWobTuningRequestPublisher : public TPublisher< Shell::Hmi::AutoTunerConfiguration::WobTuningRequest >
{
    public:
        CWobTuningRequestPublisher();
        ~CWobTuningRequestPublisher();
        
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
};

#endif // __SHELL_HMI_AUTOTUNERCONFIGURATION_WOB_TUNING_REQUEST_PUBLISHER_H__
