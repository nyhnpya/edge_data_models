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
#ifndef __NEC_PROCESS_AUTO_REAM_REQUEST_SUBSCRIBER_H__
#define __NEC_PROCESS_AUTO_REAM_REQUEST_SUBSCRIBER_H__

#include "subscriber.h"
#include "auto_ream.h"
#include "auto_reamSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

class CAutoReamRequestSubscriber : public TSubscriber< nec::process::AutoReamRequest >
{
    public:
        CAutoReamRequestSubscriber();
        ~CAutoReamRequestSubscriber();
        
        bool Create(int32_t domain);
        bool ValidData();
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        
        /// @return CDdsUuid id
        CDdsUuid GetId();
        /// @return CDdsUuid objectiveId
        CDdsUuid GetObjectiveId();
        /// @return DataTypes::Priority priority
        DataTypes::Priority GetPriority();
        /// @return DataTypes::Time timeNeeded
        DataTypes::Time GetTimeNeeded();
        /// @return DataTypes::Time duration
        DataTypes::Time GetDuration();
        /// @return double QuillTipPosPV_m
        double GetQuillTipPosPV_m();
        /// @return double Hole_depth
        double GetHole_depth();
        /// @return double Dp_PressurePV_kPa
        double GetDp_PressurePV_kPa();
        /// @return double WeightOnBitPV_daN
        double GetWeightOnBitPV_daN();
        /// @return double StandpipePressUnfiltPV_kPa
        double GetStandpipePressUnfiltPV_kPa();
        /// @return double BlockSpeedPV_mps
        double GetBlockSpeedPV_mps();
        /// @return double TD_Quill_SpeedPV_rpm
        double GetTD_Quill_SpeedPV_rpm();

    protected:
        void DataAvailable(const nec::process::AutoReamRequest &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        nec::process::AutoReamRequest                     m_data;
        DDS::SampleInfo                                   m_sampleInfo;
        DDS::LivelinessChangedStatus                      m_livelinessStatus;
        OnDataAvailableEvent                              m_pOnDataAvailable;
        OnDataDisposedEvent                               m_pOnDataDisposed;
        OnLivelinessChangedEvent                          m_pOnLivelinessChanged;
};

#endif // __NEC_PROCESS_AUTO_REAM_REQUEST_SUBSCRIBER_H__
