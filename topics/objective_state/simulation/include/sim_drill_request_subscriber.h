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
#ifndef __SIM_AUTODRILLER_REQUEST_SUBSCRIBER_H__
#define __SIM_AUTODRILLER_REQUEST_SUBSCRIBER_H__

#include "subscriber.h"
#include "base_data_types.h"
#include "drill_simulation.h"
#include "drill_simulationSupport.h"

class CSimDrillRequestSubscriber : public TSubscriber< Simulation::AutoDrillerRequest >
{
 public:
    CSimDrillRequestSubscriber();
    ~CSimDrillRequestSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    bool ValidData();

    // getters
    bool GetId(DataTypes::Uuid &id);
    bool GetRopLimit(double &ropLimit);
    bool GetWobLimit(double &wobLimit);
    bool GetDifferentialPressureLimit(double &differentialPressureLimit);
    bool GetTorqueLimit(double &torqueLimit);
    bool GetRopMode(bool &ropMode);
    bool GetWobMode(bool &wobMode);
    bool GetDifferentialPressureMode(bool &differentialPressureMode);
    bool GetTorqueMode(bool &torqueMode);

 protected:
    void DataAvailable(const Simulation::AutoDrillerRequest &data,
               const DDS::SampleInfo &sampleInfo);

    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

 private:
    Simulation::AutoDrillerRequest m_data;
    DDS::SampleInfo           m_sampleInfo;
    DDS::LivelinessChangedStatus m_livelinessStatus;
    OnDataAvailableEvent      m_pOnDataAvailable;
    OnDataDisposedEvent       m_pOnDataDisposed;
    OnLivelinessChangedEvent     m_pOnLivelinessChanged;
};

#endif // __SIM_AUTODRILLER_REQUEST_SUBSCRIBER_H__
