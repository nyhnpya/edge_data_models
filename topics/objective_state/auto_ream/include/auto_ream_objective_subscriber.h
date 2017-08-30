#ifndef __AUTO_REAM_OBJECTIVE_SUBSCRIBER_H__
#define __AUTO_REAM_OBJECTIVE_SUBSCRIBER_H__

#include "subscriber.h"
#include "base_data_types.h"
#include "auto_ream.h"
#include "auto_reamSupport.h"

class CAutoReamObjectiveSubscriber : public TSubscriber< nec::process::AutoReamObjective >
{
 public:
    typedef std::function<void(const nec::process::AutoReamObjective &data)> OnDataAvailableEvent;

    CAutoReamObjectiveSubscriber();
    ~CAutoReamObjectiveSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    bool ValidData();

    // getters
    bool GetId(DataTypes::Uuid &id);
    bool GetEstimatedDuration(DataTypes::Time &estimatedDuration);

 protected:
    void DataAvailable(const nec::process::AutoReamObjective &data,
               const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

 private:
    nec::process::AutoReamObjective m_data;
    DDS::SampleInfo             m_sampleInfo;
    DDS::LivelinessChangedStatus m_livelinessStatus;
    OnDataAvailableEvent        m_pOnDataAvailable;
    OnDataDisposedEvent         m_pOnDataDisposed;
    OnLivelinessChangedEvent     m_pOnLivelinessChanged;
};

#endif // __AUTO_REAM_OBJECTIVE_SUBSCRIBER_H__
