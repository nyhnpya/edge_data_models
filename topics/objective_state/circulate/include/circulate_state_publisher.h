#ifndef __CIRCULATE_STATE_PUBLISHER_H__ 
#define __CIRCULATE_STATE_PUBLISHER_H__ 

#include "publisher.h"
#include "circulate.h"
#include "circulateSupport.h"
#undef pascal
#include "units.h"

using namespace units;
using namespace units::literals;
using namespace units::pressure;

class CCirculateStatePublisher : public TPublisher< nec::process::CirculateState >
{
 public:
    CCirculateStatePublisher();
    ~CCirculateStatePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    void SetActualFlowRate(double actualFlowRate);
    void SetActualStandpipePressure(pascal_t actualStandpipePressure);
    void SetMaxFlowRate(double maxRateFlowRate);
    void SetMaxStandpipePressure(pascal_t maxStandpipePressure);
    void SetMinFlowRate(double minRateFlowRate);
    void SetMinStandpipePressure(pascal_t minStandpipePressure);
    void SetObjectiveId(const DataTypes::Uuid objectiveId);
    void SetStatus(const DataTypes::Status status);
    void SetTargetFlowRate(double targetFlowRate);
};

#endif // __CIRCULATE_STATE_PUBLISHER_H__ 
