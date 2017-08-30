#ifndef __AUTO_REAM_STATE_PUBLISHER_H__
#define __AUTO_REAM_STATE_PUBLISHER_H__

#include "publisher.h"
#include "base_data_types.h"
#include "auto_ream.h"
#include "auto_reamSupport.h"

class CAutoReamStatePublisher : public TPublisher< nec::process::AutoReamState >
{
 public:
    CAutoReamStatePublisher();
    ~CAutoReamStatePublisher();

    bool Create(int32_t domain);
    bool Initialize();
    bool PublishSample();

    // Topic setters
    void SetObjectiveId(DataTypes::Uuid pObjectiveId);
    void SetTimestamp(const DataTypes::Time timestamp);
    void SetHookloadActual(double hookloadActual);
    void SetHoleDepthActual(double holeDepthActual);
    void SetDeltaPressureActual(double deltaPressureActual);
    void SetWeightOnBitActual(double weightOnBitActual);
    void SetStandpipePressureActual(double standpipePressureActual);
    void SetBlockSpeedActual(double blockSpeedActual);
    void SetQuillPositionActual(double quillPositionActual);
    void SetQuillRateActual(double quillRateActual);
};

#endif // __AUTO_REAM_STATE_PUBLISHER_H__
