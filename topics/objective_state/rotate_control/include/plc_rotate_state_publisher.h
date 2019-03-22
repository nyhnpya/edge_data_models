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
#ifndef __PLC_PROCESS_ROTATE_STATE_PUBLISHER_H__
#define __PLC_PROCESS_ROTATE_STATE_PUBLISHER_H__

#include "publisher.h"
#include "plc_rotate.h"
#include "plc_rotateSupport.h"

#ifdef _WIN32
#undef pascal
#endif

class CPlcRotateStatePublisher : public TPublisher< plc::process::RotateState >
{
    public:
        CPlcRotateStatePublisher();
        ~CPlcRotateStatePublisher();
        
        bool Create(int32_t domain);
        bool Initialize();
        bool PublishSample();
        
        void SetStatus(const int32_t status);
        void SetActualRate(const double actualRate);
        void SetMinRate(const double minRate);
        void SetMaxRate(const double maxRate);
        void SetTargetRate(const double targetRate);
};

#endif // __PLC_PROCESS_ROTATE_STATE_PUBLISHER_H__
