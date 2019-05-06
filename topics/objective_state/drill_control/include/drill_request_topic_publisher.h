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

class CDrillRequestTopicPublisher : public TPublisher< plc::process::DrillRequestTopic >
{
    public:
        CDrillRequestTopicPublisher();
        ~CDrillRequestTopicPublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        void SetRopLimit(const double ropLimit);
        void SetWobLimit(const double wobLimit);
        void SetDiffPressureLimit(const double diffPressureLimit);
        void SetTorqueLimit(const double torqueLimit);
        void SetRopMode(const bool ropMode);
        void SetWobMode(const bool wobMode);
        void SetDiffPressureMode(const bool diffPressureMode);
        void SetTorqueMode(const bool torqueMode);
};

#endif // __PLC_PROCESS_DRILL_REQUEST_TOPIC_PUBLISHER_H__
