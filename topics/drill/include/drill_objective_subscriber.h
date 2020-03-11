/*
 *  Copyright (c) 2019 Ensign Energy Incorporated
 *  All Rights Reserved.
 *
 * NOTICE:  All information contained herein is, and remains
 * the property of Ensign Energy Incorporated and its suppliers,
 * if any.  The intellectual and technical concepts contained
 * herein are proprietary to Ensign Energy Incorporated
 * and its suppliers and may be covered by U.S. and Foreign Patents,
 * patents in process, and are protected by trade secret or copyright law.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from Ensign Energy Incorporated.
 */
#ifndef __NEC_PROCESS_DRILL_OBJECTIVE_SUBSCRIBER_H__
#define __NEC_PROCESS_DRILL_OBJECTIVE_SUBSCRIBER_H__

#include "subscriber.h"
#include "drill.h"
#include "drillSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

/// @ingroup Objective
/// @brief current requested state change in the drilling system.
///
/// | Variable           | Description                                      | Data Type       | Unit  |
/// | ------------------ | ------------------------------------------------ | ----------------| ------|
/// | id                 | id of requestor                                  | DataTypes::Uuid | N/A   |
/// | objectiveId        | id of current objective                          | DataTypes::Uuid | N/A   |
/// | estimatedDuration  | estimated duration requestor needs the resource  | DataTypes::Time | N/A   |
///
class CDrillObjectiveSubscriber : public TSubscriber< nec::process::DrillObjective >
{
    public:
        CDrillObjectiveSubscriber();
        ~CDrillObjectiveSubscriber();
        
        bool Create(int32_t domain);
        bool ValidData();
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        
        /// @return CDdsUuid id
        CDdsUuid GetId();
        /// @return CDdsUuid objectiveId
        CDdsUuid GetObjectiveId();
        /// @return DataTypes::Time estimatedDuration
        DataTypes::Time GetEstimatedDuration();
        /// target rate of penetration
        /// @return units::velocity::meters_per_second_t ropTarget
        units::velocity::meters_per_second_t GetRopTarget();
        /// target weight on bit
        /// @return units::force::newton_t wobTarget
        units::force::newton_t GetWobTarget();
        /// target differential pressure
        /// @return units::pressure::pascal_t diffPressureTarget
        units::pressure::pascal_t GetDiffPressureTarget();
        /// target differential torque
        /// @return units::torque::newton_meter_t torqueTarget
        units::torque::newton_meter_t GetTorqueTarget();
        /// @return bool ropMode
        bool GetRopMode();
        /// @return bool wobMode
        bool GetWobMode();
        /// @return bool diffPressureMode
        bool GetDiffPressureMode();
        /// @return bool torqueMode
        bool GetTorqueMode();

    protected:
        void DataAvailable(const nec::process::DrillObjective &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        nec::process::DrillObjective                                          m_data;
        DDS::SampleInfo                                                       m_sampleInfo;
        DDS::LivelinessChangedStatus                                          m_livelinessStatus;
        OnDataAvailableEvent                                                  m_pOnDataAvailable;
        OnDataDisposedEvent                                                   m_pOnDataDisposed;
        OnLivelinessChangedEvent                                              m_pOnLivelinessChanged;
};

#endif // __NEC_PROCESS_DRILL_OBJECTIVE_SUBSCRIBER_H__
