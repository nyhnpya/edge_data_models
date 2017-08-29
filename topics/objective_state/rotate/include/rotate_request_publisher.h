#ifndef __ROTATE_REQUEST_PUBLISHER_H__ 
#define __ROTATE_REQUEST_PUBLISHER_H__ 

#include "publisher.h"
#include "rotate.h"
#include "rotateSupport.h"

class CRotateRequestPublisher : public TPublisher< nec::process::RotateRequest >
{
 public:
    CRotateRequestPublisher();
    ~CRotateRequestPublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    void SetPriority(DataTypes::Priority priority);
    void SetTimeNeeded(DataTypes::Time timeNeeded);
    void SetDuration(DataTypes::Time duration);
    void SetTargetRate(double targetRate);
};

#endif // __ROTATE_REQUEST_PUBLISHER_H__ 
