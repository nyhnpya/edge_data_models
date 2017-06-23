#ifndef __HOIST_STATE_PUBLISHER_H__ 
#define __HOIST_STATE_PUBLISHER_H__ 

#include "publisher.h"
#include "hoist.h"
#include "hoistSupport.h"

class CHoistStatePublisher : public TPublisher< ProcessHoist::HoistState >
{
 public:
    CHoistStatePublisher();
    ~CHoistStatePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    void SetStatus(const DataTypes::Status status);
    void SetActualVelocity(double actualVelocity);
    void SetActualPosition(double actualPosition);
    void SetMaxHoistVelocity(double maxHoistVelocity);
    void SetMaxLowerVelocity(double maxLowerVelocity);
    void SetMaxHoistPosition(double maxHoistPosition);
    void SetMaxLowerPosition(double maxLowerPosition);
    void SetTargetVelocity(double targetVelocity);
    void SetTargetPosition(double targetPosition);
};

#endif // __HOIST_STATE_PUBLISHER_H__ 
