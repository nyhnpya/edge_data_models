#ifndef __PROCESS_INFO_SUBSCRIBER_H__
#define __PROCESS_INFO_SUBSCRIBER_H__

#include "subscriber.h"
#include "process_info.h"
#include "process_infoSupport.h"

class CProcessInfoSubscriber : public TSubscriber< process::maintanence::ProcessState>
{
public:
    typedef std::function<void(const process::maintanence::ProcessState &data)> OnDataAvailableEvent;

    CProcessInfoSubscriber();
    virtual ~CProcessInfoSubscriber();

    bool Create(int32_t domain);
    void OnDataAvailable(OnDataAvailableEvent event);
    void OnDataDisposed(OnDataDisposedEvent event);
    void OnLivelinessChanged(OnLivelinessChangedEvent event);
    void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);
    bool ValidData();

    // Topic getters
    bool GetProcessName(const char *processName);
    bool GetPid(int32_t &pid);
    bool GetTotalVirtualMemaory(int64_t &totalVirtualMemory);
    bool GetUsedVirtualMemory(int64_t &usedVirtualMemory);
    bool GetTotalPhysicalMemaory(int64_t &totalPhysicalMemory);
    bool GetUsedPhysicalMemory(int64_t &usedPhysicalMemory);

protected:
    ///Derived Methods
    void DataAvailable(const process::maintanence::ProcessState &data,
                       const DDS::SampleInfo &sampleInfo);
    void DataDisposed(const DDS::SampleInfo &sampleInfo);
    void LivelinessChanged(const DDS::LivelinessChangedStatus &status);
    void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);

private:
    process::maintanence::ProcessState  m_data;
    DDS::SampleInfo              m_sampleInfo;
    DDS::LivelinessChangedStatus m_livelinessStatus;
    OnDataAvailableEvent         m_pOnDataAvailable;
    OnDataDisposedEvent          m_pOnDataDisposed;
    OnLivelinessChangedEvent     m_pOnLivelinessChanged;
    OnSubscriptionMatchedEvent   m_pOnSubscriptionMatched;
};

#endif // __PROCESS_INFO_SUBSCRIBER_H__
