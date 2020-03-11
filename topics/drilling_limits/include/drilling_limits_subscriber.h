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
#ifndef __PROCESS_PLAN_DRILLING_LIMITS_SUBSCRIBER_H__
#define __PROCESS_PLAN_DRILLING_LIMITS_SUBSCRIBER_H__

#include "subscriber.h"
#include "drilling_limits.h"
#include "drilling_limitsSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

/// @ingroup actual
/// @brief set of process limits for a given section specified by depth.
///
///
class CDrillingLimitsSubscriber : public TSubscriber< process::plan::DrillingLimits >
{
    public:
        CDrillingLimitsSubscriber();
        ~CDrillingLimitsSubscriber();
        
        bool Create(int32_t domain);
        bool ValidData();
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        
        /// id of requestor
        /// @return CDdsUuid id
        CDdsUuid GetId();
        /// start depth for constraints.
        /// @return units::length::meter_t startDepth
        units::length::meter_t GetStartDepth();
        /// end depth for contraints
        /// @return units::length::meter_t endDepth
        units::length::meter_t GetEndDepth();
        /// miniumu process rate of penetration limit
        /// @return units::velocity::meters_per_second_t ropMin
        units::velocity::meters_per_second_t GetRopMin();
        /// maximun process rate of penetration limit
        /// @return units::velocity::meters_per_second_t ropMax
        units::velocity::meters_per_second_t GetRopMax();
        /// minimum process weight on bit limit
        /// @return units::force::newton_t wobMin
        units::force::newton_t GetWobMin();
        /// maximum process weight on bit limit
        /// @return units::force::newton_t wobMax
        units::force::newton_t GetWobMax();
        /// minimum process differential pressure limit
        /// @return units::pressure::pascal_t diffPMin
        units::pressure::pascal_t GetDiffPMin();
        /// @return units::pressure::pascal_t diffPMax
        units::pressure::pascal_t GetDiffPMax();
        /// minimum process differential torque limit
        /// @return units::torque::newton_meter_t torqueMin
        units::torque::newton_meter_t GetTorqueMin();
        /// maximum process differential torque limit
        /// @return units::torque::newton_meter_t torqueMax
        units::torque::newton_meter_t GetTorqueMax();
        /// minimum process rate in rad/s
        /// @return units::angular_velocity::radians_per_second_t rotateMin
        units::angular_velocity::radians_per_second_t GetRotateMin();
        /// maximum process rate in rad/s
        /// @return units::angular_velocity::radians_per_second_t rotateMax
        units::angular_velocity::radians_per_second_t GetRotateMax();

    protected:
        void DataAvailable(const process::plan::DrillingLimits &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        process::plan::DrillingLimits                                         m_data;
        DDS::SampleInfo                                                       m_sampleInfo;
        DDS::LivelinessChangedStatus                                          m_livelinessStatus;
        OnDataAvailableEvent                                                  m_pOnDataAvailable;
        OnDataDisposedEvent                                                   m_pOnDataDisposed;
        OnLivelinessChangedEvent                                              m_pOnLivelinessChanged;
};

#endif // __PROCESS_PLAN_DRILLING_LIMITS_SUBSCRIBER_H__
