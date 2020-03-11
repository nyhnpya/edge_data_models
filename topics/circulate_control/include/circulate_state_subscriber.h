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
#ifndef __PLC_PROCESS_CIRCULATE_STATE_SUBSCRIBER_H__
#define __PLC_PROCESS_CIRCULATE_STATE_SUBSCRIBER_H__

#include "subscriber.h"
#include "plc_circulate.h"
#include "plc_circulateSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

/// @ingroup SafeCirculateFunctions
/// @brief current state of circulation system.
///
///
class CCirculateStateSubscriber : public TSubscriber< plc::process::CirculateState >
{
    public:
        CCirculateStateSubscriber();
        ~CCirculateStateSubscriber();
        
        bool Create(int32_t domain);
        bool ValidData();
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        
        /// @return DataTypes::Status status
        DataTypes::Status GetStatus();
        /// @return double actualFlowRate
        double GetActualFlowRate();
        /// @return double actualStandpipePressure
        double GetActualStandpipePressure();
        /// @return double minFlowRate
        double GetMinFlowRate();
        /// @return double maxFlowRate
        double GetMaxFlowRate();
        /// @return double minStandpipePressure
        double GetMinStandpipePressure();
        /// @return double maxStandpipePressure
        double GetMaxStandpipePressure();
        /// @return double targetFlowRate
        double GetTargetFlowRate();

    protected:
        void DataAvailable(const plc::process::CirculateState &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        plc::process::CirculateState                                          m_data;
        DDS::SampleInfo                                                       m_sampleInfo;
        DDS::LivelinessChangedStatus                                          m_livelinessStatus;
        OnDataAvailableEvent                                                  m_pOnDataAvailable;
        OnDataDisposedEvent                                                   m_pOnDataDisposed;
        OnLivelinessChangedEvent                                              m_pOnLivelinessChanged;
};

#endif // __PLC_PROCESS_CIRCULATE_STATE_SUBSCRIBER_H__
