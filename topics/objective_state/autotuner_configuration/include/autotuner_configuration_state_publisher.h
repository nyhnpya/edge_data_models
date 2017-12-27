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
#ifndef __AUTOTUNER_CONFIGURATION_STATE_PUBLISHER_H__
#define __AUTOTUNER_CONFIGURATION_STATE_PUBLISHER_H__

#include "publisher.h"
#include "base_data_types.h"
#include "autotuner_configuration.h"
#include "autotuner_configurationSupport.h"

namespace CAutoTunerConfigurationStatePublisher
{
    class CModelStateStatePublisher : public TPublisher< AutoTunerConfiguration::ModelStateState >
    {
    public:
        CModelStateStatePublisher();
        ~CModelStateStatePublisher();

        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();

        // Topic getters
        void SetPipeInnerDiameter(double pipeInnerDiameter);
        void SetPipeOuterDiameter(double pipeOuterDiameter);
        void SetSlopeFilter(double slopeFilter);
        void SetTauMin(double tauMin);
        void SetTauMax(double tauMax);
        void SetTauMultiplier(double tauMultiplier);
        void SetMaxDeviation(double maxDeviation);
        void SetMinInterval(double minInterval);
        void SetTunerEnabled(bool tunerEnabled);
    };

    class CWobTuningStatePublisher : public TPublisher< AutoTunerConfiguration::WobTuningState >
    {
    public:
        CWobTuningStatePublisher();
        ~CWobTuningStatePublisher();

        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();

        // Topic getters
        void SetWobFilter(double wobFilter);
        void SetWobD(double wobD);
        void SetWobF(double wobF);
        void SetWobEps(double wobEps);
        void SetWobEpsManual(bool wobEpsManual);
        void SetWobKcMin(double wobKcMin);
        void SetWobKcMax(double wobKcMax);
        void SetWobTiMin(double wobTiMin);
        void SetWobTiMax(double wobTiMax);
    };

    class CDiffpTuningStatePublisher : public TPublisher< AutoTunerConfiguration::DiffpTuningState >
    {
    public:
        CDiffpTuningStatePublisher();
        ~CDiffpTuningStatePublisher();

        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();

        // Topic getters
        void SetDiffpFilter(double diffPFilter);
        void SetDiffpD(double diffPD);
        void SetDiffpF(double diffPF);
        void SetDiffpEps(double diffPEps);
        void SetDiffpEpsManual(bool diffPEpsManual);
        void SetDiffpKcMin(double diffPKcMin);
        void SetDiffpKcMax(double diffPKcMax);
        void SetDiffpTiMin(double diffPTiMin);
        void SetDiffpTiMax(double diffPTiMax);
    };

    class CTorqueTuningStatePublisher : public TPublisher< AutoTunerConfiguration::TorqueTuningState >
    {
    public:
        CTorqueTuningStatePublisher();
        ~CTorqueTuningStatePublisher();

        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();

        // Topic getters
        void SetTorqueFilter(double torqueFilter);
        void SetTorqueD(double torqueD);
        void SetTorqueF(double torqueF);
        void SetTorqueEps(double torqueEps);
        void SetTorqueEpsManual(bool torqueEpsManual);
        void SetTorqueKcMin(double torqueKcMin);
        void SetTorqueKcMax(double torqueKcMax);
        void SetTorqueTiMin(double torqueTiMin);
        void SetTorqueTiMax(double torqueTiMax);
    };
};

#endif // __AUTOTUNER_CONFIGURATION_STATE_PUBLISHER_H__
