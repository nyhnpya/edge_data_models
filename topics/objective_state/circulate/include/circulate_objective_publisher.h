#ifndef __CIRCULATE_OBJECTIVE_PUBLISHER_H__ 
#define __CIRCULATE_OBJECTIVE_PUBLISHER_H__ 

#include "publisher.h"
#include "circulate.h"
#include "circulateSupport.h"
#undef pascal
#include "units.h"

using namespace units;
using namespace units::literals;
using namespace units::pressure;

class CCirculateObjectivePublisher : public TPublisher< nec::process::CirculateObjective >
{
 public:
    CCirculateObjectivePublisher();
    ~CCirculateObjectivePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    void SetEstimatedDuration(DataTypes::Time estimatedDuration);
    void SetTargetFlowRate(DDS_Double targetFlowRate);
};

#endif // __CIRCULATE_OBJECTIVE_PUBLISHER_H__ 
