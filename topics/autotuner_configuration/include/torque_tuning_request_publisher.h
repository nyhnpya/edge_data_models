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
#ifndef __SHELL_HMI_AUTOTUNERCONFIGURATION_TORQUE_TUNING_REQUEST_PUBLISHER_H__
#define __SHELL_HMI_AUTOTUNERCONFIGURATION_TORQUE_TUNING_REQUEST_PUBLISHER_H__

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
class CTorqueTuningRequestPublisher : public TPublisher< Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest >
{
    public:
        CTorqueTuningRequestPublisher();
        ~CTorqueTuningRequestPublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        /// @param double torqueFilter
        void SetTorqueFilter(const double torqueFilter);
        /// @param double torqueD
        void SetTorqueD(const double torqueD);
        /// @param double torqueF
        void SetTorqueF(const double torqueF);
        /// @param double torqueEps
        void SetTorqueEps(const double torqueEps);
        /// @param bool torqueEpsManual
        void SetTorqueEpsManual(const bool torqueEpsManual);
        /// @param double torqueKcMin
        void SetTorqueKcMin(const double torqueKcMin);
        /// @param double torqueKcMax
        void SetTorqueKcMax(const double torqueKcMax);
        /// @param double torqueTiMin
        void SetTorqueTiMin(const double torqueTiMin);
        /// @param double torqueTiMax
        void SetTorqueTiMax(const double torqueTiMax);
};

#endif // __SHELL_HMI_AUTOTUNERCONFIGURATION_TORQUE_TUNING_REQUEST_PUBLISHER_H__
