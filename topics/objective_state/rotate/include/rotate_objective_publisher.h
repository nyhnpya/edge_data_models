#ifndef __ROTATE_OBJECTIVE_PUBLISHER_H__ 
#define __ROTATE_OBJECTIVE_PUBLISHER_H__ 

#include "publisher.h"
#include "rotate.h"
#include "rotateSupport.h"

class CRotateObjectivePublisher : public TPublisher< ProcessRotation::RotateObjective >
{
 public:
    CRotateObjectivePublisher();
    ~CRotateObjectivePublisher();

    bool Create(int32_t domain);
    bool PublishSample();

    void SetId(const DataTypes::Uuid id);
    void SetEstimatedDuration(DataTypes::Time estimatedDuration);
    void SetTargetRate(double targetRate);
};

#endif // __ROTATE_OBJECTIVE_PUBLISHER_H__ 
