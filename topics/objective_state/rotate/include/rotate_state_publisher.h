#ifndef __ROTATE_STATE_PUBLISHER_H__ 
#define __ROTATE_STATE_PUBLISHER_H__ 

#include "publisher.h"
#include "rotate.h"
#include "rotateSupport.h"

class CRotateStatePublisher : public TPublisher< nec::process::RotateState >
{
 public:
    CRotateStatePublisher();
    ~CRotateStatePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    void SetStatus(const DataTypes::Status status);
    void SetActualRate(double actualRate);
    void SetMinRate(double minRate);
    void SetMaxRate(double maxRate);
    void SetTargetRate(double targetRate);
};

#endif // __ROTATE_STATE_PUBLISHER_H__ 
