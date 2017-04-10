#ifndef __WELLBORE_STATE_SUBSCRIBER_H__
#define __WELLBORE_STATE_SUBSCRIBER_H__

#include <mutex>
#include "subscriber.h"
#include "base_data_types.h"
#include "wellbore.h"
#include "wellboreSupport.h"

class CWellboreStateSubscriber : public TSubscriber< Downhole::Wellbore>
{
public:
    typedef std::function<void(const Downhole::Wellbore &data)> OnDataAvailableEvent;

    CWellboreStateSubscriber();
    virtual ~CWellboreStateSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    bool ValidData();

    // Topic getters
    bool GetBitDepth(double &bitDept);
    bool GetHoleDepth(double &holeDepth);

protected:
    ///Derived Methods
    void DataAvailable(const Downhole::Wellbore &data,
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

private:
    Downhole::Wellbore           m_data;
    DDS::SampleInfo              m_sampleInfo;
    DDS::LivelinessChangedStatus m_livelinessStatus;
    OnDataAvailableEvent         m_pOnDataAvailable;
    OnDataDisposedEvent          m_pOnDataDisposed;
    OnLivelinessChangedEvent     m_pOnLivelinessChanged;
};

#endif // __WELLBORE_STATE_SUBSCRIBER_H__
