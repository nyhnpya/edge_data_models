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
#ifndef __SHELL_HMI_AUTOTUNERCONFIGURATION_TORQUE_TUNING_STATE_PUBLISHER_H__
#define __SHELL_HMI_AUTOTUNERCONFIGURATION_TORQUE_TUNING_STATE_PUBLISHER_H__

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
class CTorqueTuningStatePublisher : public TPublisher< Shell::Hmi::AutoTunerConfiguration::TorqueTuningState >
{
    public:
        CTorqueTuningStatePublisher();
        ~CTorqueTuningStatePublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        /// @param double filter
        void SetFilter(const double filter);
        /// @param double d
        void SetD(const double d);
        /// @param double f
        void SetF(const double f);
        /// @param double epsilon
        void SetEpsilon(const double epsilon);
        /// @param bool epsilonManual
        void SetEpsilonManual(const bool epsilonManual);
        /// @param double kcMin
        void SetKcMin(const double kcMin);
        /// @param double kcMax
        void SetKcMax(const double kcMax);
        /// @param double tiMin
        void SetTiMin(const double tiMin);
        /// @param double tiMax
        void SetTiMax(const double tiMax);
        /// @param double initK
        void SetInitK(const double initK);
        /// @param double initTau
        void SetInitTau(const double initTau);
        /// @param double initPreFilter
        void SetInitPreFilter(const double initPreFilter);
        /// @param double r1
        void SetR1(const double r1);
        /// @param double r2
        void SetR2(const double r2);
};

#endif // __SHELL_HMI_AUTOTUNERCONFIGURATION_TORQUE_TUNING_STATE_PUBLISHER_H__
