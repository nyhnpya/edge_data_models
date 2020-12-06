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
#ifndef __SHELL_HMI_AUTOTUNERCONFIGURATION_MODEL_STATE_PUBLISHER_H__
#define __SHELL_HMI_AUTOTUNERCONFIGURATION_MODEL_STATE_PUBLISHER_H__

#include "publisher.h"
#include "autotuner_configuration.h"
#include "autotuner_configurationSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

/// @brief Requested state change in the rotation system.
///
///
class CModelStatePublisher : public TPublisher< Shell::Hmi::AutoTunerConfiguration::ModelState >
{
    public:
        CModelStatePublisher();
        ~CModelStatePublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        /// id of requestor
        /// @param units::length::meter_t pipeInnerDiameter
        void SetPipeInnerDiameter(const units::length::meter_t pipeInnerDiameter);
        /// id of current objective
        /// @param units::length::meter_t pipeOuterDiameter
        void SetPipeOuterDiameter(const units::length::meter_t pipeOuterDiameter);
        /// @param double slopeFilter
        void SetSlopeFilter(const double slopeFilter);
        /// @param double tauMax
        void SetTauMax(const double tauMax);
        /// @param double tauMin
        void SetTauMin(const double tauMin);
        /// @param double tauMultiplier
        void SetTauMultiplier(const double tauMultiplier);
        /// @param double maxDeviation
        void SetMaxDeviation(const double maxDeviation);
        /// @param double minInterval
        void SetMinInterval(const double minInterval);
        /// @param bool tunerEnabled
        void SetTunerEnabled(const bool tunerEnabled);
};

#endif // __SHELL_HMI_AUTOTUNERCONFIGURATION_MODEL_STATE_PUBLISHER_H__
