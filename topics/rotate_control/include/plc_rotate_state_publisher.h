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
#ifndef __PLC_PROCESS_PLC_ROTATE_STATE_PUBLISHER_H__
#define __PLC_PROCESS_PLC_ROTATE_STATE_PUBLISHER_H__

#include "publisher.h"
#include "plc_rotate.h"
#include "plc_rotateSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

/// @ingroup SafeRotationFunctions
/// @brief current state of rotation system.
///
///
class CPlcRotateStatePublisher : public TPublisher< plc::process::PlcRotateState >
{
    public:
        CPlcRotateStatePublisher();
        ~CPlcRotateStatePublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        /// @param int32_t status
        void SetStatus(const int32_t status);
        /// @param double actualRate
        void SetActualRate(const double actualRate);
        /// @param double minRate
        void SetMinRate(const double minRate);
        /// @param double maxRate
        void SetMaxRate(const double maxRate);
        /// @param double targetRate
        void SetTargetRate(const double targetRate);
};

#endif // __PLC_PROCESS_PLC_ROTATE_STATE_PUBLISHER_H__
