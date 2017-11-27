#ifndef __ROTATE_REQUEST_PUBLISHER_H__ 
#define __ROTATE_REQUEST_PUBLISHER_H__ 

#include "publisher.h"
#include "rotate.h"
#include "rotateSupport.h"

#ifdef _WIN32
#undef pascal
#endif
#include "units.h"

using namespace units;
using namespace units::angular_velocity;

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
    void SetTargetRate(radians_per_second_t targetRate);
};

#endif // __ROTATE_REQUEST_PUBLISHER_H__ 
