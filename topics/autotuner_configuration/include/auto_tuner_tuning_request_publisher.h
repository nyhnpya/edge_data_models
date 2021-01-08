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
#ifndef __SHELL_HMI_AUTOTUNERCONFIGURATION_AUTO_TUNER_TUNING_REQUEST_PUBLISHER_H__
#define __SHELL_HMI_AUTOTUNERCONFIGURATION_AUTO_TUNER_TUNING_REQUEST_PUBLISHER_H__

#include "keyed_data_writer.h"
#include "autotuner_configuration.h"
#include "autotuner_configurationSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

/// @brief Requested state change in the rotation system.
///
///
class CAutoTunerTuningRequestPublisher : public TKeyedDataWriter< Shell::Hmi::AutoTunerConfiguration::AutoTunerTuningRequest >
{
    public:
        CAutoTunerTuningRequestPublisher();
        ~CAutoTunerTuningRequestPublisher();
        
        bool Create(const std::string &publisher);
        bool PublishSample();
        
        /// @param std::stringid
        void SetId(const std::string&id);
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
};

#endif // __SHELL_HMI_AUTOTUNERCONFIGURATION_AUTO_TUNER_TUNING_REQUEST_PUBLISHER_H__
