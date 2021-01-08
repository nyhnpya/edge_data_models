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
#ifndef __PLC_PROCESS_PLC_ROTATE_REQUEST_PUBLISHER_H__
#define __PLC_PROCESS_PLC_ROTATE_REQUEST_PUBLISHER_H__

#include "data_writer.h"
#include "plc_rotate.h"
#include "plc_rotateSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

/// @ingroup SafeRotationFunctions
/// @brief requested state change in the rotation system.
///
///
class CPlcRotateRequestPublisher : public TDataWriter< plc::process::PlcRotateRequest >
{
    public:
        CPlcRotateRequestPublisher();
        ~CPlcRotateRequestPublisher();
        
        bool Create(const std::string &publisher);
        bool PublishSample();
        
        /// @param double targetRate
        void SetTargetRate(const double targetRate);
};

#endif // __PLC_PROCESS_PLC_ROTATE_REQUEST_PUBLISHER_H__
