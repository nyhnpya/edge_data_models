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
#ifndef __NEC_PROCESS_AUTO_REAM_OBJECTIVE_PUBLISHER_H__
#define __NEC_PROCESS_AUTO_REAM_OBJECTIVE_PUBLISHER_H__

#include "publisher.h"
#include "auto_ream.h"
#include "auto_reamSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

class CAutoReamObjectivePublisher : public TPublisher< nec::process::AutoReamObjective >
{
    public:
        CAutoReamObjectivePublisher();
        ~CAutoReamObjectivePublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        /// @param CDdsUuid id
        void SetId(CDdsUuid id);
        /// @param CDdsUuid objectiveId
        void SetObjectiveId(CDdsUuid objectiveId);
        /// @param DataTypes::Time estimatedDuration
        void SetEstimatedDuration(const DataTypes::Time estimatedDuration);
        /// @param double QuillTipPosPV_m
        void SetQuillTipPosPV_m(const double QuillTipPosPV_m);
        /// @param double Hole_depth
        void SetHole_depth(const double Hole_depth);
        /// @param double Dp_PressurePV_kPa
        void SetDp_PressurePV_kPa(const double Dp_PressurePV_kPa);
        /// @param double WeightOnBitPV_daN
        void SetWeightOnBitPV_daN(const double WeightOnBitPV_daN);
        /// @param double StandpipePressUnfiltPV_kPa
        void SetStandpipePressUnfiltPV_kPa(const double StandpipePressUnfiltPV_kPa);
        /// @param double BlockSpeedPV_mps
        void SetBlockSpeedPV_mps(const double BlockSpeedPV_mps);
        /// @param double TD_Quill_SpeedPV_rpm
        void SetTD_Quill_SpeedPV_rpm(const double TD_Quill_SpeedPV_rpm);
};

#endif // __NEC_PROCESS_AUTO_REAM_OBJECTIVE_PUBLISHER_H__
