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
#ifndef __NEC_PROCESS_DRILL_REQUEST_SUBSCRIBER_H__
#define __NEC_PROCESS_DRILL_REQUEST_SUBSCRIBER_H__

#include "subscriber.h"
#include "drill.h"
#include "drillSupport.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

class CDrillRequestSubscriber : public TSubscriber< nec::process::DrillRequest >
{
    public:
        CDrillRequestSubscriber();
        ~CDrillRequestSubscriber();
        
        bool Create(int32_t domain);
        bool ValidData();
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);
        
        DataTypes::Uuid GetId();
        DataTypes::Uuid GetObjectiveId();
        DataTypes::Priority GetPriority();
        DataTypes::Time GetTimeNeeded();
        DataTypes::Time GetEstimatedDuration();
        units::velocity::meters_per_second_t GetRopTarget();
        units::force::newton_t GetWobTarget();
        units::pressure::pascal_t GetDiffPressureTarget();
        units::torque::newton_meter_t GetTorqueTarget();
        bool GetRopMode();
        bool GetWobMode();
        bool GetDiffPressureMode();
        bool GetTorqueMode();

    protected:
        void DataAvailable(const nec::process::DrillRequest &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);
        void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

    private:
        nec::process::DrillRequest                        m_data;
        DDS::SampleInfo                                   m_sampleInfo;
        DDS::LivelinessChangedStatus                      m_livelinessStatus;
        OnDataAvailableEvent                              m_pOnDataAvailable;
        OnDataDisposedEvent                               m_pOnDataDisposed;
        OnLivelinessChangedEvent                          m_pOnLivelinessChanged;
        OnSubscriptionMatchedEvent                        m_pOnSubscriptionMatched;
};

#endif // __NEC_PROCESS_DRILL_REQUEST_SUBSCRIBER_H__
