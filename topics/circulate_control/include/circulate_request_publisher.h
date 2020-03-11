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
#ifndef __PLC_PROCESS_CIRCULATE_REQUEST_PUBLISHER_H__
#define __PLC_PROCESS_CIRCULATE_REQUEST_PUBLISHER_H__

#include "publisher.h"
#include "plc_circulate.h"
#include "plc_circulateSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

/// @ingroup SafeCirculateFunctions
/// @brief requested state change in the circulation system.
///
///
class CCirculateRequestPublisher : public TPublisher< plc::process::CirculateRequest >
{
    public:
        CCirculateRequestPublisher();
        ~CCirculateRequestPublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        /// @param double targetFlowRate
        void SetTargetFlowRate(const double targetFlowRate);
};

#endif // __PLC_PROCESS_CIRCULATE_REQUEST_PUBLISHER_H__
