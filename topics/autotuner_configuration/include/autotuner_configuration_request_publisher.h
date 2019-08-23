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
#ifndef __AUTOTUNER_CONFIGURATION_REQUEST_PUBLISHER_H__
#define __AUTOTUNER_CONFIGURATION_REQUEST_PUBLISHER_H__

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

namespace CAutoTunerConfigurationRequestPublisher 
{
    class CModelStateRequestPublisher : public TPublisher< Shell::Hmi::AutoTunerConfiguration::ModelStateRequest >
    {
    public:
        CModelStateRequestPublisher();
        ~CModelStateRequestPublisher();

        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();

        // Topic getters
        void SetPipeInnerDiameter(meter_t pipeInnerDiameter);
        void SetPipeOuterDiameter(meter_t pipeOuterDiameter);
        void SetSlopeFilter(double slopeFilter);
        void SetTauMax(double tauMax);
        void SetTauMin(double tauMin);
        void SetTauMultiplier(double tauMultiplier);
        void SetMaxDeviation(double maxDeviation);
        void SetMinInterval(double minInterval);
    };

    class CWobTuningRequestPublisher : public TPublisher< Shell::Hmi::AutoTunerConfiguration::WobTuningRequest >
    {
    public:
        CWobTuningRequestPublisher();
        ~CWobTuningRequestPublisher();

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

    class CDiffpTuningRequestPublisher : public TPublisher< Shell::Hmi::AutoTunerConfiguration::DiffpTuningRequest >
    {
    public:
        CDiffpTuningRequestPublisher();
        ~CDiffpTuningRequestPublisher();

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

    class CTorqueTuningRequestPublisher : public TPublisher< Shell::Hmi::AutoTunerConfiguration::TorqueTuningRequest >
    {
    public:
        CTorqueTuningRequestPublisher();
        ~CTorqueTuningRequestPublisher();

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

#endif // __AUTOTUNER_CONFIGURATION_REQUEST_PUBLISHER_H__
