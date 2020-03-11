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
#ifndef __PLC_PROCESS_PLC_ROTATE_STATE_SUBSCRIBER_H__
#define __PLC_PROCESS_PLC_ROTATE_STATE_SUBSCRIBER_H__

#include "subscriber.h"
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
class CPlcRotateStateSubscriber : public TSubscriber< plc::process::PlcRotateState >
{
    public:
        CPlcRotateStateSubscriber();
        ~CPlcRotateStateSubscriber();
        
        bool Create(int32_t domain);
        bool ValidData();
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        
        /// @return int32_t status
        int32_t GetStatus();
        /// @return double actualRate
        double GetActualRate();
        /// @return double minRate
        double GetMinRate();
        /// @return double maxRate
        double GetMaxRate();
        /// @return double targetRate
        double GetTargetRate();

    protected:
        void DataAvailable(const plc::process::PlcRotateState &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        plc::process::PlcRotateState                                          m_data;
        DDS::SampleInfo                                                       m_sampleInfo;
        DDS::LivelinessChangedStatus                                          m_livelinessStatus;
        OnDataAvailableEvent                                                  m_pOnDataAvailable;
        OnDataDisposedEvent                                                   m_pOnDataDisposed;
        OnLivelinessChangedEvent                                              m_pOnLivelinessChanged;
};

#endif // __PLC_PROCESS_PLC_ROTATE_STATE_SUBSCRIBER_H__
