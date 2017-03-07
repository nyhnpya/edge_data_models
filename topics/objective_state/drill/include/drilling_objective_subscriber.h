#ifndef __DRILLING_OBJECTIVE_SUBSCRIBER_H__
#define __DRILLING_OBJECTIVE_SUBSCRIBER_H__

#include "subscriber.h"
#include "base_data_types.h"
#include "drilling.h"
#include "drillingSupport.h"

class CDrillingObjectiveSubscriber : public TSubscriber< Hoisting::DrillingObjective >
{
 public:
    typedef std::function<void(const Hoisting::DrillingObjective &data)> OnDataAvailableEvent;

    CDrillingObjectiveSubscriber();
    ~CDrillingObjectiveSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);

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
    void DataAvailable(const Hoisting::DrillingObjective &data,
               const DDS::SampleInfo &sampleInfo);

    void DataDisposed(const DDS::SampleInfo &sampleInfo);

 private:
    Hoisting::DrillingObjective m_data;
    DDS::SampleInfo             m_sampleInfo;
    OnDataAvailableEvent        m_pOnDataAvailable;
    OnDataDisposedEvent         m_pOnDataDisposed;
};

#endif // __DRILLING_OBJECTIVE_SUBSCRIBER_H__
