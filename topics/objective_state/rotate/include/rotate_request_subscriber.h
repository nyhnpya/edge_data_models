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
#ifndef __ROTATE_REQUEST_SUBSCRIBER_H__ 
#define __ROTATE_REQUEST_SUBSCRIBER_H__ 

#include "subscriber.h"
#include "rotate.h"
#include "rotateSupport.h"
#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::angular_velocity;

class CRotateRequestSubscriber : public TSubscriber< nec::process::RotateRequest >
{
 public:
    CRotateRequestSubscriber();
    ~CRotateRequestSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    bool ValidData();

    // getters
    DataTypes::Uuid GetId();
    DataTypes::Priority GetPriority();
    DataTypes::Time GetTimeNeeded();
    DataTypes::Time GetDuration();
    radians_per_second_t GetTargetRate();

 protected:
    ///Derived Methods
    void DataAvailable(const nec::process::RotateRequest &data,
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

private:
    nec::process::RotateRequest   m_data;
    DDS::SampleInfo               m_sampleInfo;
    DDS::LivelinessChangedStatus  m_livelinessStatus;
    OnDataAvailableEvent          m_pOnDataAvailable;
    OnDataDisposedEvent           m_pOnDataDisposed;
    OnLivelinessChangedEvent      m_pOnLivelinessChanged;
};

#endif // __ROTATE_REQUEST_SUBSCRIBER_H__ 
