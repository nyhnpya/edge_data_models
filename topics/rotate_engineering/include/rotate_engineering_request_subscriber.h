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
#ifndef __NEC_ENGINEERING_ROTATE_ENGINEERING_REQUEST_SUBSCRIBER_H__
#define __NEC_ENGINEERING_ROTATE_ENGINEERING_REQUEST_SUBSCRIBER_H__

#include "subscriber.h"
#include "rotate_engineering.h"
#include "rotate_engineeringSupport.h"
#include "dds_uuid.h"

#ifdef _WIN32
#undef pascal
#endif

#include "units.h"

/// @ingroup NonSafeRotationFunctions
/// @brief requested state change in the rotation system.
///
///
class CRotateEngineeringRequestSubscriber : public TSubscriber< nec::engineering::RotateEngineeringRequest >
{
    public:
        CRotateEngineeringRequestSubscriber();
        ~CRotateEngineeringRequestSubscriber();
        
        bool Create(int32_t domain);
        bool ValidData();
        void OnDataAvailable(OnDataAvailableEvent event);
        void OnDataDisposed(OnDataDisposedEvent event);
        void OnLivelinessChanged(OnLivelinessChangedEvent event);
        
        /// @return CDdsUuid id
        CDdsUuid GetId();
        /// @return DataTypes::Priority priority
        DataTypes::Priority GetPriority();
        /// @return DataTypes::Time timeNeeded
        DataTypes::Time GetTimeNeeded();
        /// @return DataTypes::Time duration
        DataTypes::Time GetDuration();
        /// @return units::angular_velocity::radians_per_second_t targetRate
        units::angular_velocity::radians_per_second_t GetTargetRate();
        /// @return units::torque::newton_meter_t torque
        units::torque::newton_meter_t GetTorque();

    protected:
        void DataAvailable(const nec::engineering::RotateEngineeringRequest &data,
                           const DDS::SampleInfo &sampleInfo);
        void DataDisposed(const DDS::SampleInfo &sampleInfo);
        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);

    private:
        nec::engineering::RotateEngineeringRequest                            m_data;
        DDS::SampleInfo                                                       m_sampleInfo;
        DDS::LivelinessChangedStatus                                          m_livelinessStatus;
        OnDataAvailableEvent                                                  m_pOnDataAvailable;
        OnDataDisposedEvent                                                   m_pOnDataDisposed;
        OnLivelinessChangedEvent                                              m_pOnLivelinessChanged;
};

#endif // __NEC_ENGINEERING_ROTATE_ENGINEERING_REQUEST_SUBSCRIBER_H__
