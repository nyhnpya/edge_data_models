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
#ifndef __PLC_PROCESS_DRILL_REQUEST_TOPIC_SUBSCRIBER_H__
#define __PLC_PROCESS_DRILL_REQUEST_TOPIC_SUBSCRIBER_H__

#include "subscriber.h"
#include "plc_drill.h"
#include "plc_drillSupport.h"

#ifdef _WIN32
#undef pascal
#endif

class CDrillRequestTopicSubscriber : public TSubscriber< plc::process::DrillRequestTopic >
{
    public:
        CDrillRequestTopicSubscriber();
        ~CDrillRequestTopicSubscriber();
        
        bool Create(int32_t domain);
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);
        bool ValidData();
        
        double GetRopLimit();
        double GetWobLimit();
        double GetDiffPressureLimit();
        double GetTorqueLimit();
        bool GetRopMode();
        bool GetWobMode();
        bool GetDiffPressureMode();
        bool GetTorqueMode();

    protected:
        void DataAvailable(const plc::process::DrillRequestTopic &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);
        void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

    private:
        plc::process::DrillRequestTopic                   m_data;
        DDS::SampleInfo                                   m_sampleInfo;
        DDS::LivelinessChangedStatus                      m_livelinessStatus;
        OnDataAvailableEvent                              m_pOnDataAvailable;
        OnDataDisposedEvent                               m_pOnDataDisposed;
        OnLivelinessChangedEvent                          m_pOnLivelinessChanged;
        OnSubscriptionMatchedEvent                        m_pOnSubscriptionMatched;
};

#endif // __PLC_PROCESS_DRILL_REQUEST_TOPIC_SUBSCRIBER_H__