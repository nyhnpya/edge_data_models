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

#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::length;

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
        void SetPipeInnerDiameter(meter_t pipeInnerDiameter);
        void SetPipeOuterDiameter(meter_t pipeOuterDiameter);
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
        void SetWobInitK(double wobInitK);
        void SetWobInitTau(double wobInitTau);
        void SetWobInitPreFilter(double wobInitPreFilter);
        void SetWobR1(double wobR1);
        void SetWobR2(double wobR2);
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
        void SetDiffpInitK(double diffpInitK);
        void SetDiffpInitTau(double diffpInitTau);
        void SetDiffpInitPreFilter(double diffpInitPreFilter);
        void SetDiffpR1(double diffpR1);
        void SetDiffpR2(double diffpR2);
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
        void SetTorqueInitK(double torqueInitK);
        void SetTorqueInitTau(double torqueInitTau);
        void SetTorqueInitPreFilter(double torqueInitPreFilter);
        void SetTorqueR1(double torqueR1);
        void SetTorqueR2(double torqueR2);
    };
};

#endif // __AUTOTUNER_CONFIGURATION_STATE_PUBLISHER_H__
