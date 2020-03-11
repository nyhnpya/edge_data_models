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
#ifndef __PLC_PROCESS_HOIST_STATE_PUBLISHER_H__
#define __PLC_PROCESS_HOIST_STATE_PUBLISHER_H__

#include "publisher.h"
#include "plc_hoist.h"
#include "plc_hoistSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

/// @ingroup SafeHoistFunctions
/// @brief current state of the hoisting system.
///
///
class CHoistStatePublisher : public TPublisher< plc::process::HoistState >
{
    public:
        CHoistStatePublisher();
        ~CHoistStatePublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        /// @param int32_t status
        void SetStatus(const int32_t status);
        /// @param double actualHookload
        void SetActualHookload(const double actualHookload);
        /// @param double actualVelocity
        void SetActualVelocity(const double actualVelocity);
        /// @param double actualPosition
        void SetActualPosition(const double actualPosition);
        /// @param double maxHookload
        void SetMaxHookload(const double maxHookload);
        /// @param double maxHoistVelocity
        void SetMaxHoistVelocity(const double maxHoistVelocity);
        /// @param double maxLowerVelocity
        void SetMaxLowerVelocity(const double maxLowerVelocity);
        /// @param double maxHoistPosition
        void SetMaxHoistPosition(const double maxHoistPosition);
        /// @param double maxLowerPosition
        void SetMaxLowerPosition(const double maxLowerPosition);
        /// @param double targetVelocity
        void SetTargetVelocity(const double targetVelocity);
        /// @param double targetPosition
        void SetTargetPosition(const double targetPosition);
};

#endif // __PLC_PROCESS_HOIST_STATE_PUBLISHER_H__
