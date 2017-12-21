#ifndef __DRILLING_OBJECTIVE_SUBSCRIBER_H__
#define __DRILLING_OBJECTIVE_SUBSCRIBER_H__

#include "subscriber.h"
#include "base_data_types.h"
#include "drill.h"
#include "drillSupport.h"

class CDrillingObjectiveSubscriber : public TSubscriber< nec::process::DrillingObjective >
{
 public:
    typedef std::function<void(const nec::process::DrillingObjective &data)> OnDataAvailableEvent;

    CDrillingObjectiveSubscriber();
    ~CDrillingObjectiveSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    bool ValidData();

    // getters
    bool GetId(DataTypes::Uuid &id);
    bool GetEstimatedDuration(DataTypes::Time &estimatedDuration);
    bool GetRopLimit(double &ropLimit);
    bool GetWobLimit(double &wobLimit);
    bool GetDifferentialPressureLimit(double &differentialPressureLimit);
    bool GetTorqueLimit(double &torqueLimit);
    bool GetRopMode(bool &ropMode);
    bool GetWobMode(bool &wobMode);
    bool GetDifferentialPressureMode(bool &differentialPressureMode);
    bool GetTorqueMode(bool &torqueMode);

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