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
#ifndef __NEC_PROCESS_AUTO_REAM_STATE_SUBSCRIBER_H__
#define __NEC_PROCESS_AUTO_REAM_STATE_SUBSCRIBER_H__

#include "subscriber.h"
#include "auto_ream.h"
#include "auto_reamSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

/// @ingroup Downhole
/// @brief Wellbore state information.
///
///
class CAutoReamStateSubscriber : public TSubscriber< nec::process::AutoReamState >
{
    public:
        CAutoReamStateSubscriber();
        ~CAutoReamStateSubscriber();
        
        bool Create(int32_t domain);
        bool ValidData();
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        
        /// @return CDdsUuid id
        CDdsUuid GetId();
        /// @return CDdsUuid objectiveId
        CDdsUuid GetObjectiveId();
        /// @return DataTypes::Time timestamp
        DataTypes::Time GetTimestamp();
        /// @return DataTypes::Status status
        DataTypes::Status GetStatus();
        /// @return double hookloadActual
        double GetHookloadActual();
        /// @return double holeDepthActual
        double GetHoleDepthActual();
        /// @return double differentialPressureActual
        double GetDifferentialPressureActual();
        /// @return double weightOnBitActual
        double GetWeightOnBitActual();
        /// @return double standpipePressureActual
        double GetStandpipePressureActual();
        /// @return double blockSpeedActual
        double GetBlockSpeedActual();
        /// @return double quillPositionActual
        double GetQuillPositionActual();
        /// @return double quillRateActual
        double GetQuillRateActual();

    protected:
        void DataAvailable(const nec::process::AutoReamState &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        nec::process::AutoReamState                                           m_data;
        DDS::SampleInfo                                                       m_sampleInfo;
        DDS::LivelinessChangedStatus                                          m_livelinessStatus;
        OnDataAvailableEvent                                                  m_pOnDataAvailable;
        OnDataDisposedEvent                                                   m_pOnDataDisposed;
        OnLivelinessChangedEvent                                              m_pOnLivelinessChanged;
};

#endif // __NEC_PROCESS_AUTO_REAM_STATE_SUBSCRIBER_H__
