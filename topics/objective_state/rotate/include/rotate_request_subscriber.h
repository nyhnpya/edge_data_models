#ifndef __ROTATE_REQUEST_SUBSCRIBER_H__ 
#define __ROTATE_REQUEST_SUBSCRIBER_H__ 

#include "subscriber.h"
#include "rotate.h"
#include "rotateSupport.h"

class CRotateRequestSubscriber : public TSubscriber< SafeRotationFunctions::RotateRequest >
{
 public:
    typedef std::function<void(const SafeRotationFunctions::RotateRequest &data)> OnDataAvailableEvent;

    CRotateRequestSubscriber();
    ~CRotateRequestSubscriber();

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
    bool GetTargetRate(double &targetRate);

 protected:
    ///Derived Methods
    void DataAvailable(const SafeRotationFunctions::RotateRequest &data,
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

private:
    SafeRotationFunctions::RotateRequest m_data;
    DDS::SampleInfo                m_sampleInfo;
    DDS::LivelinessChangedStatus   m_livelinessStatus;
    OnDataAvailableEvent           m_pOnDataAvailable;
    OnDataDisposedEvent            m_pOnDataDisposed;
    OnLivelinessChangedEvent       m_pOnLivelinessChanged;
};

#endif // __ROTATE_REQUEST_SUBSCRIBER_H__ 
