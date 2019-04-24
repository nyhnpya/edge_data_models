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

#ifdef _WIN32
#undef pascal
#endif

class CHoistStatePublisher : public TPublisher< plc::process::HoistState >
{
    public:
        CHoistStatePublisher();
        ~CHoistStatePublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        void SetStatus(const int32_t status);
        void SetActualHookload(const double actualHookload);
        void SetActualVelocity(const double actualVelocity);
        void SetActualPosition(const double actualPosition);
        void SetMaxHookload(const double maxHookload);
        void SetMaxHoistVelocity(const double maxHoistVelocity);
        void SetMaxLowerVelocity(const double maxLowerVelocity);
        void SetMaxHoistPosition(const double maxHoistPosition);
        void SetMaxLowerPosition(const double maxLowerPosition);
        void SetTargetVelocity(const double targetVelocity);
        void SetTargetPosition(const double targetPosition);
};

#endif // __PLC_PROCESS_HOIST_STATE_PUBLISHER_H__
