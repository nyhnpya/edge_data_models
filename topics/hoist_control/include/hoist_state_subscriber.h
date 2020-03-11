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
#ifndef __PLC_PROCESS_HOIST_STATE_SUBSCRIBER_H__
#define __PLC_PROCESS_HOIST_STATE_SUBSCRIBER_H__

#include "subscriber.h"
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
class CHoistStateSubscriber : public TSubscriber< plc::process::HoistState >
{
    public:
        CHoistStateSubscriber();
        ~CHoistStateSubscriber();
        
        bool Create(int32_t domain);
        bool ValidData();
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        
        /// @return int32_t status
        int32_t GetStatus();
        /// @return double actualHookload
        double GetActualHookload();
        /// @return double actualVelocity
        double GetActualVelocity();
        /// @return double actualPosition
        double GetActualPosition();
        /// @return double maxHookload
        double GetMaxHookload();
        /// @return double maxHoistVelocity
        double GetMaxHoistVelocity();
        /// @return double maxLowerVelocity
        double GetMaxLowerVelocity();
        /// @return double maxHoistPosition
        double GetMaxHoistPosition();
        /// @return double maxLowerPosition
        double GetMaxLowerPosition();
        /// @return double targetVelocity
        double GetTargetVelocity();
        /// @return double targetPosition
        double GetTargetPosition();

    protected:
        void DataAvailable(const plc::process::HoistState &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        plc::process::HoistState                                              m_data;
        DDS::SampleInfo                                                       m_sampleInfo;
        DDS::LivelinessChangedStatus                                          m_livelinessStatus;
        OnDataAvailableEvent                                                  m_pOnDataAvailable;
        OnDataDisposedEvent                                                   m_pOnDataDisposed;
        OnLivelinessChangedEvent                                              m_pOnLivelinessChanged;
};

#endif // __PLC_PROCESS_HOIST_STATE_SUBSCRIBER_H__
