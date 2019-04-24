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
#include "rotate_engineering_state_subscriber.h"

CRotateEngineeringStateSubscriber::CRotateEngineeringStateSubscriber() :
    m_pOnDataAvailable(nullptr),
    m_pOnDataDisposed(nullptr),
    m_pOnLivelinessChanged(nullptr),
    m_pOnSubscriptionMatched(nullptr)
{
    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));
}

CRotateEngineeringStateSubscriber::~CRotateEngineeringStateSubscriber()
{
}

bool CRotateEngineeringStateSubscriber::ValidData()
{
    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);
}

DataTypes::Uuid CRotateEngineeringStateSubscriber::GetId()
{
    return m_data.id;
}

DataTypes::Status CRotateEngineeringStateSubscriber::GetStatus()
{
    return m_data.status;
}

DataTypes::Time CRotateEngineeringStateSubscriber::GetTimestamp()
{
    return m_data.timestamp;
}

nec::engineering::State CRotateEngineeringStateSubscriber::GetState()
{
    return m_data.state;
}

nec::engineering::Mode CRotateEngineeringStateSubscriber::GetMode()
{
    return m_data.mode;
}

units::angular_velocity::radians_per_second_t CRotateEngineeringStateSubscriber::GetActualVelocity()
{
    return units::angular_velocity::radians_per_second_t(m_data.actualVelocity);
}

units::torque::newton_meter_t CRotateEngineeringStateSubscriber::GetActualTorque()
{
    return units::torque::newton_meter_t(m_data.actualTorque);
}

double CRotateEngineeringStateSubscriber::GetActualPosition()
{
    return m_data.actualPosition;
}

double CRotateEngineeringStateSubscriber::GetActualPower()
{
    return m_data.actualPower;
}

units::angular_velocity::radians_per_second_t CRotateEngineeringStateSubscriber::GetMinVelocity()
{
    return units::angular_velocity::radians_per_second_t(m_data.minVelocity);
}

units::angular_velocity::radians_per_second_t CRotateEngineeringStateSubscriber::GetMaxVelocity()
{
    return units::angular_velocity::radians_per_second_t(m_data.maxVelocity);
}

units::torque::newton_meter_t CRotateEngineeringStateSubscriber::GetMinTorque()
{
    return units::torque::newton_meter_t(m_data.minTorque);
}

units::torque::newton_meter_t CRotateEngineeringStateSubscriber::GetMaxTorque()
{
    return units::torque::newton_meter_t(m_data.maxTorque);
}

double CRotateEngineeringStateSubscriber::GetMinPosition()
{
    return m_data.minPosition;
}

double CRotateEngineeringStateSubscriber::GetMaxPosition()
{
    return m_data.maxPosition;
}

units::angular_velocity::radians_per_second_t CRotateEngineeringStateSubscriber::GetTargetVelocity()
{
    return units::angular_velocity::radians_per_second_t(m_data.targetVelocity);
}

units::torque::newton_meter_t CRotateEngineeringStateSubscriber::GetTargetTorque()
{
    return units::torque::newton_meter_t(m_data.targetTorque);
}

double CRotateEngineeringStateSubscriber::GetTargetPosition()
{
    return m_data.targetPosition;
}


void CRotateEngineeringStateSubscriber::OnDataAvailable(OnDataAvailableEvent event)
{
    m_pOnDataAvailable = event;
}


void CRotateEngineeringStateSubscriber::OnDataDisposed(OnDataDisposedEvent event)
{
    m_pOnDataDisposed = event;
}


void CRotateEngineeringStateSubscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)
{
    m_pOnLivelinessChanged = event;
}


void CRotateEngineeringStateSubscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)
{
    m_pOnSubscriptionMatched = event;
}


void CRotateEngineeringStateSubscriber::DataAvailable(const nec::engineering::RotateEngineeringState &data,
                          const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)
    {
        m_data = data;
    
        if (m_pOnDataAvailable != nullptr)
        {
            m_pOnDataAvailable(sampleInfo);
        }
    
    }
}

void CRotateEngineeringStateSubscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)
{
    m_sampleInfo = sampleInfo;
    
    if (m_pOnDataDisposed != nullptr)
    {
        m_pOnDataDisposed(sampleInfo);
    }
}

void CRotateEngineeringStateSubscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)
{
    if (m_pOnLivelinessChanged != nullptr)
    {
        m_pOnLivelinessChanged(status);
    }
}

void CRotateEngineeringStateSubscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)
{
    
    if (m_pOnSubscriptionMatched != nullptr)
    {
        m_pOnSubscriptionMatched(status);
    }
}