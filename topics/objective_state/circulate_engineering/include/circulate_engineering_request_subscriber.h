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
#ifndef __CIRCULATE_ENGINEERING_REQUEST_SUBSCRIBER_H__ 
#define __CIRCULATE_ENGINEERING_REQUEST_SUBSCRIBER_H__ 

#include "subscriber.h"
#include "circulate_engineering.h"
#include "circulate_engineeringSupport.h"
#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::pressure;

class CCirculateEngineeringRequestSubscriber : public TSubscriber< nec::control::CirculateEngineeringRequest >
{
 public:
    CCirculateEngineeringRequestSubscriber();
    ~CCirculateEngineeringRequestSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    bool ValidData();

    // getters

 protected:
    void DataAvailable(const nec::control::CirculateEngineeringRequest &data, 
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

private:
    nec::control::CirculateEngineeringRequest m_data;
    DDS::SampleInfo                m_sampleInfo;
    DDS::LivelinessChangedStatus   m_livelinessStatus;
    OnDataAvailableEvent           m_pOnDataAvailable;
    OnDataDisposedEvent            m_pOnDataDisposed;
    OnLivelinessChangedEvent       m_pOnLivelinessChanged;
};

#endif // __CIRCULATE_ENGINEERING_REQUEST_SUBSCRIBER_H__ 
