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
#ifndef __PLC_PROCESS_HOIST_REQUEST_PUBLISHER_H__
#define __PLC_PROCESS_HOIST_REQUEST_PUBLISHER_H__

#include "publisher.h"
#include "plc_hoist.h"
#include "plc_hoistSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

/// @ingroup SafeHoistFunctions
/// @brief requested state change in the hoisting system.
///
///
class CHoistRequestPublisher : public TPublisher< plc::process::HoistRequest >
{
    public:
        CHoistRequestPublisher();
        ~CHoistRequestPublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        /// @param double targetVelocity
        void SetTargetVelocity(const double targetVelocity);
        /// @param double targetPosition
        void SetTargetPosition(const double targetPosition);
};

#endif // __PLC_PROCESS_HOIST_REQUEST_PUBLISHER_H__
