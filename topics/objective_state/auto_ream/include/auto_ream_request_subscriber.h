/*
 *  Copyright (c) 2017 Ensign Energy Incorporated
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
#ifndef __AUTO_REAM_REQUEST_SUBSCRIBER_H__
#define __AUTO_REAM_REQUEST_SUBSCRIBER_H__

#include "subscriber.h"
#include "base_data_types.h"
#include "auto_ream.h"
#include "auto_reamSupport.h"

class CAutoReamRequestSubscriber : public TSubscriber< nec::process::AutoReamRequest >
{
 public:
    typedef std::function<void(const nec::process::AutoReamRequest &data)> OnDataAvailableEvent;

    CAutoReamRequestSubscriber();
    ~CAutoReamRequestSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    bool ValidData();

    // getters
    bool GetId(DataTypes::Uuid &id);
    bool GetPriority(DataTypes::Priority &priority);
    bool GetTimeNeeded(DataTypes::Time &timeNeeded);
    bool GetDuration(DataTypes::Time &duration);

 protected:
    void DataAvailable(const nec::process::AutoReamRequest &data,
               const DDS::SampleInfo &sampleInfo);

    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

 private:
    nec::process::AutoReamRequest m_data;
    DDS::SampleInfo               m_sampleInfo;
    DDS::LivelinessChangedStatus  m_livelinessStatus;
    OnDataAvailableEvent          m_pOnDataAvailable;
    OnDataDisposedEvent           m_pOnDataDisposed;
    OnLivelinessChangedEvent      m_pOnLivelinessChanged;
};

#endif // __AUTO_REAM_REQUEST_SUBSCRIBER_H__
