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
#ifndef __NEC_PROCESS_AUTO_REAM_STATE_PUBLISHER_H__
#define __NEC_PROCESS_AUTO_REAM_STATE_PUBLISHER_H__

#include "publisher.h"
#include "auto_ream.h"
#include "auto_reamSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

/// @ingroup Downhole
/// @brief Wellbore state information.
///
///
class CAutoReamStatePublisher : public TPublisher< nec::process::AutoReamState >
{
    public:
        CAutoReamStatePublisher();
        ~CAutoReamStatePublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        /// @param CDdsUuid id
        void SetId(CDdsUuid id);
        /// @param CDdsUuid objectiveId
        void SetObjectiveId(CDdsUuid objectiveId);
        /// @param DataTypes::Time timestamp
        void SetTimestamp(const DataTypes::Time timestamp);
        /// @param DataTypes::Status status
        void SetStatus(const DataTypes::Status status);
        /// @param double hookloadActual
        void SetHookloadActual(const double hookloadActual);
        /// @param double holeDepthActual
        void SetHoleDepthActual(const double holeDepthActual);
        /// @param double differentialPressureActual
        void SetDifferentialPressureActual(const double differentialPressureActual);
        /// @param double weightOnBitActual
        void SetWeightOnBitActual(const double weightOnBitActual);
        /// @param double standpipePressureActual
        void SetStandpipePressureActual(const double standpipePressureActual);
        /// @param double blockSpeedActual
        void SetBlockSpeedActual(const double blockSpeedActual);
        /// @param double quillPositionActual
        void SetQuillPositionActual(const double quillPositionActual);
        /// @param double quillRateActual
        void SetQuillRateActual(const double quillRateActual);
};

#endif // __NEC_PROCESS_AUTO_REAM_STATE_PUBLISHER_H__
