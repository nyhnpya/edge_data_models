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
    typedef std::function<void(const Downhole::Wellbore &data)> OnDtaAvailableEvent;

    CWellboreStateSubscriber();
    virtual ~CWellboreStateSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDtaAvailableEvent event);

    // Topic getters
    bool GetBitDepth(double &bitDept);
    bool GetHoleDepth(double &holeDepth);

protected:
    ///Derived Methods
    void DataAvailable(const Downhole::Wellbore &data,
                       const DDS::SampleInfo &sampleInfo);

    void DataDisposed(const DDS::SampleInfo &sampleInfo);

private:
    Downhole::Wellbore   m_data;
    DDS::SampleInfo      m_sampleInfo;
    OnDtaAvailableEvent m_pOnDataAvailable;
};

#endif // __WELLBORE_STATE_SUBSCRIBER_H__
