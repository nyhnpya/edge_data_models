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
#ifndef __DRILLING_OBJECTIVE_SUBSCRIBER_H__
#define __DRILLING_OBJECTIVE_SUBSCRIBER_H__

#include "subscriber.h"
#include "base_data_types.h"
#include "drill.h"
#include "drillSupport.h"

class CDrillingObjectiveSubscriber : public TSubscriber< nec::process::DrillingObjective >
{
 public:
    CDrillingObjectiveSubscriber();
    ~CDrillingObjectiveSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    bool ValidData();

    // getters
    DataTypes::Uuid GetId();
    DataTypes::Time GetEstimatedDuration();
    double GetRopLimit();
    double GetWobLimit();
    double GetDifferentialPressureLimit();
    double GetTorqueLimit();
    bool GetRopMode();
    bool GetWobMode();
    bool GetDifferentialPressureMode();
    bool GetTorqueMode();

 protected:
    void DataAvailable(const nec::process::DrillingObjective &data,
               const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

 private:
    nec::process::DrillingObjective m_data;
    DDS::SampleInfo             m_sampleInfo;
    DDS::LivelinessChangedStatus m_livelinessStatus;
    OnDataAvailableEvent        m_pOnDataAvailable;
    OnDataDisposedEvent         m_pOnDataDisposed;
    OnLivelinessChangedEvent     m_pOnLivelinessChanged;
};

#endif // __DRILLING_OBJECTIVE_SUBSCRIBER_H__
