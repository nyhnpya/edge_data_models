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
#ifndef __PLC_PROCESS_DRILL_REQUEST_TOPIC_PUBLISHER_H__
#define __PLC_PROCESS_DRILL_REQUEST_TOPIC_PUBLISHER_H__

#include "publisher.h"
#include "plc_drill.h"
#include "plc_drillSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

/// @ingroup SafeDrillFunctions
/// @brief requested state change in the drilling system.
///
///
class CDrillRequestTopicPublisher : public TPublisher< plc::process::DrillRequestTopic >
{
    public:
        CDrillRequestTopicPublisher();
        ~CDrillRequestTopicPublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        /// @param double ropLimit
        void SetRopLimit(const double ropLimit);
        /// @param double wobLimit
        void SetWobLimit(const double wobLimit);
        /// @param double diffPressureLimit
        void SetDiffPressureLimit(const double diffPressureLimit);
        /// @param double torqueLimit
        void SetTorqueLimit(const double torqueLimit);
        /// @param bool ropMode
        void SetRopMode(const bool ropMode);
        /// @param bool wobMode
        void SetWobMode(const bool wobMode);
        /// @param bool diffPressureMode
        void SetDiffPressureMode(const bool diffPressureMode);
        /// @param bool torqueMode
        void SetTorqueMode(const bool torqueMode);
};

#endif // __PLC_PROCESS_DRILL_REQUEST_TOPIC_PUBLISHER_H__
