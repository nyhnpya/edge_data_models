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
#ifndef __PLC_PROCESS_CIRCULATE_STATE_PUBLISHER_H__
#define __PLC_PROCESS_CIRCULATE_STATE_PUBLISHER_H__

#include "publisher.h"
#include "plc_circulate.h"
#include "plc_circulateSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

/// @ingroup SafeCirculateFunctions
/// @brief current state of circulation system.
///
///
class CCirculateStatePublisher : public TPublisher< plc::process::CirculateState >
{
    public:
        CCirculateStatePublisher();
        ~CCirculateStatePublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        /// @param DataTypes::Status status
        void SetStatus(const DataTypes::Status status);
        /// @param double actualFlowRate
        void SetActualFlowRate(const double actualFlowRate);
        /// @param double actualStandpipePressure
        void SetActualStandpipePressure(const double actualStandpipePressure);
        /// @param double minFlowRate
        void SetMinFlowRate(const double minFlowRate);
        /// @param double maxFlowRate
        void SetMaxFlowRate(const double maxFlowRate);
        /// @param double minStandpipePressure
        void SetMinStandpipePressure(const double minStandpipePressure);
        /// @param double maxStandpipePressure
        void SetMaxStandpipePressure(const double maxStandpipePressure);
        /// @param double targetFlowRate
        void SetTargetFlowRate(const double targetFlowRate);
};

#endif // __PLC_PROCESS_CIRCULATE_STATE_PUBLISHER_H__
