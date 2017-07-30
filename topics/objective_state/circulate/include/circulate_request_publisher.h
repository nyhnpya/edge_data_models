#ifndef __CIRCULATE_REQUEST_PUBLISHER_H__ 
#define __CIRCULATE_REQUEST_PUBLISHER_H__ 

#include "publisher.h"
#include "circulate.h"
#include "circulateSupport.h"

class CCirculateRequestPublisher : public TPublisher< SafeCirculateFunctions::CirculateRequest >
{
 public:
    CCirculateRequestPublisher();
    ~CCirculateRequestPublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    void SetPriority(DataTypes::Priority priority);
    void SetTimeNeeded(DataTypes::Time timeNeeded);
    void SetDuration(DataTypes::Time duration);
    void SetTargetFlowRate(DDS_Double targetFlowRate);
};

#endif // __CIRCULATE_REQUEST_PUBLISHER_H__ 
