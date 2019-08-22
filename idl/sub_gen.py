#!/usr/bin/python3
#/*
# *  Copyright (c) 2019 Ensign Energy Incorporated
# *  All Rights Reserved.
# *
# * NOTICE:  All information contained herein is, and remains
# * the property of Ensign Energy Incorporated and its suppliers,
# * if any.  The intellectual and technical concepts contained
# * herein are proprietary to Ensign Energy Incorporated
# * and its suppliers and may be covered by U.S. and Foreign Patents,
# * patents in process, and are protected by trade secret or copyright law.
# * Dissemination of this information or reproduction of this material
# * is strictly forbidden unless prior written permission is obtained
# * from Ensign Energy Incorporated.
# */

import sys
import re

from types_gen import StructField, Struct
from util_gen import str_cap, out_copywrite, write_makefile
import util_gen


def write_subscriber_h(outdir, struct):
    out = open(outdir + '/' + struct.name_underscore + '_subscriber.h', 'w')
    out_copywrite(out)
    out.write('#ifndef __' + util_gen.module_name.replace("::","_").upper()+ struct.name_underscore.upper() + '_SUBSCRIBER_H__\n')
    out.write('#define __' + util_gen.module_name.replace("::","_").upper()+ struct.name_underscore.upper() + '_SUBSCRIBER_H__\n')
    out.write('\n')
    out.write('#include "subscriber.h"\n')
    out.write('#include "' + util_gen.idl_name + '.h"\n')
    out.write('#include "' + util_gen.idl_name + 'Support.h"\n')
    out.write('#include "dds_uuid.h"\n')
    out.write('\n')
    out.write('#ifdef _WIN32\n')
    out.write('#undef pascal\n')
    out.write('#endif\n')
    out.write('\n')
    units_list = []
    if struct.fields_with_units > 0:
        out.write('#include "units.h"\n')
        out.write('\n')
#        out.write('using namespace units;\n') 
#        for sfield in struct.fields:
#            if sfield.unit_namespace not in units_list and sfield.unit_namespace != '':
#                out.write('using namespace units::' + sfield.unit_namespace + ';\n') 
#                units_list.append(sfield.unit_namespace)
#        out.write('\n')
    if len(struct.brief_comments) > 0:
        for ib in range(len(struct.brief_comments)):
            if ib == 0:
                out.write('/*! \\brief ' + struct.brief_comments[ib] + '\n')
            else:
                out.write(' *         ' + struct.brief_comments[ib] + '\n')
        out.write(' * \n')
        for id in range(len(struct.comments)):
            if len(struct.comments[id]) > 1:
                out.write(' * ' + struct.comments[id] + '\n')
        out.write('*/ \n')
    out.write('class C' + struct.name_camel_case + 'Subscriber : public TSubscriber< ' + util_gen.module_name + struct.name_camel_case + ' >\n')
    out.write('{\n')
    out.write('    public:\n')
    out.write('        C' + struct.name_camel_case + 'Subscriber();\n')
    out.write('        ~C' + struct.name_camel_case + 'Subscriber();\n')
    out.write('        \n')
    out.write('        bool Create(int32_t domain);\n')
    out.write('        bool ValidData();\n')
    out.write('        void OnDataAvailable(OnDataAvailableEvent event);\n')
    out.write('        void OnDataDisposed(OnDataDisposedEvent event);\n')
    out.write('        void OnLivelinessChanged(OnLivelinessChangedEvent event);\n')
    out.write('        void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);\n')
    out.write('        \n')
    for sfield in struct.fields:
        if len(sfield.comment) > 1:
            out.write('        //! ' + sfield.comment + '\n')
        if sfield.datatype in util_gen.enums:
            out.write('        ' + util_gen.module_name + sfield.datatype + ' Get' + str_cap(sfield.name) + '();\n') 
        elif 'DataTypes::Uuid' in sfield.datatype:
            out.write('        CDdsUuid Get' + str_cap(sfield.name) + '();\n') 
        elif sfield.unit_name != '':
            out.write('        ' + 'units::' + sfield.unit_namespace + '::' + sfield.unit_name + '_t Get' + str_cap(sfield.name) + '();\n') 
        else:
            out.write('        ' + sfield.datatype + ' Get' + str_cap(sfield.name) + '();\n') 
    out.write('\n')
    out.write('    protected:\n')
    out.write('        void DataAvailable(const ' + util_gen.module_name + struct.name_camel_case + ' &data,\n') 
    out.write('                           const DDS::SampleInfo &sampleInfo);\n')
    out.write('        void DataDisposed(const DDS::SampleInfo &sampleInfo);\n')
    out.write('        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);\n')
    out.write('        void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);\n')
    out.write('\n')        
    out.write('    private:\n')        
    out.write('        {0: <50}'.format(util_gen.module_name + struct.name_camel_case) + 'm_data;\n')        
    out.write('        {0: <50}'.format('DDS::SampleInfo') + 'm_sampleInfo;\n')        
    out.write('        {0: <50}'.format('DDS::LivelinessChangedStatus') + 'm_livelinessStatus;\n')        
    out.write('        {0: <50}'.format('OnDataAvailableEvent') + 'm_pOnDataAvailable;\n')        
    out.write('        {0: <50}'.format('OnDataDisposedEvent') + 'm_pOnDataDisposed;\n')        
    out.write('        {0: <50}'.format('OnLivelinessChangedEvent') + 'm_pOnLivelinessChanged;\n')        
    out.write('        {0: <50}'.format('OnSubscriptionMatchedEvent') + 'm_pOnSubscriptionMatched;\n')        
    out.write('};\n')
    out.write('\n')
    out.write('#endif // __' + util_gen.module_name.replace("::","_").upper()+ struct.name_underscore.upper() + '_SUBSCRIBER_H__\n')
    out.close()


def write_subscriber_cxx(outdir, struct, qoslib, qosprof):
    out = open(outdir + '/' + struct.name_underscore + '_subscriber.cxx', 'w')
    out.write('#include "' + struct.name_underscore + '_subscriber.h"\n')
    out.write('\n')
    out.write('C' + struct.name_camel_case + 'Subscriber::C' + struct.name_camel_case + 'Subscriber() :\n')
    out.write('    m_pOnDataAvailable(nullptr),\n')
    out.write('    m_pOnDataDisposed(nullptr),\n')
    out.write('    m_pOnLivelinessChanged(nullptr),\n')
    out.write('    m_pOnSubscriptionMatched(nullptr)\n')
    out.write('{\n')
    out.write('    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));\n')
    out.write('}\n')
    out.write('\n')
    out.write('C' + struct.name_camel_case + 'Subscriber::~C' + struct.name_camel_case + 'Subscriber()\n')
    out.write('{\n')
    out.write('}\n')
    out.write('\n')
    out.write('bool C' + struct.name_camel_case + 'Subscriber::Create(int32_t domain)\n')
    out.write('{\n')
    out.write('    return TSubscriber::Create(domain,\n')
    out.write('                       ' + util_gen.module_name + struct.copyc + ',\n')
    out.write('                       "' + qoslib + '",\n')
    out.write('                       "' + qosprof + '");\n')
    out.write('}\n')
    out.write('\n')
    out.write('bool C' + struct.name_camel_case + 'Subscriber::ValidData()\n')
    out.write('{\n')
    out.write('    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);\n')
    out.write('}\n')
    out.write('\n')
    for sfield in struct.fields:
        if sfield.datatype in util_gen.enums:
            out.write(util_gen.module_name + sfield.datatype + ' C' + struct.name_camel_case + 'Subscriber::Get' + str_cap(sfield.name) + '()\n')
        elif 'DataTypes::Uuid' in sfield.datatype:
            out.write('CDdsUuid C' + struct.name_camel_case + 'Subscriber::Get' + str_cap(sfield.name) + '()\n')
        elif sfield.unit_name != '':
            out.write('units::' + sfield.unit_namespace + '::' + sfield.unit_name + '_t C' + struct.name_camel_case + 'Subscriber::Get' + str_cap(sfield.name) + '()\n')
        else:
            out.write(sfield.datatype + ' C' + struct.name_camel_case + 'Subscriber::Get' + str_cap(sfield.name) + '()\n')
        out.write('{\n')
        if 'DataTypes::Uuid' in sfield.datatype:
            out.write('    CDdsUuid uuid(m_data.' + sfield.name + ');\n')
            out.write('    return uuid;\n')
        elif sfield.unit_name != '':
            out.write('    return ' + 'units::' + sfield.unit_namespace + '::' + sfield.unit_name + '_t(m_data.' + sfield.name + ');\n')
        else:
            out.write('    return m_data.' + sfield.name + ';\n')
        out.write('}\n')
        out.write('\n')

    out.write('\n')
    out.write('void C' + struct.name_camel_case + 'Subscriber::OnDataAvailable(OnDataAvailableEvent event)\n')
    out.write('{\n')
    out.write('    m_pOnDataAvailable = event;\n')
    out.write('}\n')
    out.write('\n')
    out.write('\n')
    out.write('void C' + struct.name_camel_case + 'Subscriber::OnDataDisposed(OnDataDisposedEvent event)\n')
    out.write('{\n')
    out.write('    m_pOnDataDisposed = event;\n')
    out.write('}\n')
    out.write('\n')
    out.write('\n')
    out.write('void C' + struct.name_camel_case + 'Subscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)\n')
    out.write('{\n')
    out.write('    m_pOnLivelinessChanged = event;\n')
    out.write('}\n')
    out.write('\n')
    out.write('\n')
    out.write('void C' + struct.name_camel_case + 'Subscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)\n')
    out.write('{\n')
    out.write('    m_pOnSubscriptionMatched = event;\n')
    out.write('}\n')
    out.write('\n')

    out.write('\n')
    out.write('void C' + struct.name_camel_case + 'Subscriber::DataAvailable(const ' + util_gen.module_name + struct.name_camel_case + ' &data,\n')
    out.write('                          const DDS::SampleInfo &sampleInfo)\n')
    out.write('{\n')
    out.write('    m_sampleInfo = sampleInfo;\n')
    out.write('    \n')
    out.write('    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)\n')
    out.write('    {\n')
    out.write('        m_data = data;\n')
    out.write('    \n')
    out.write('        if (m_pOnDataAvailable != nullptr)\n')
    out.write('        {\n')
    out.write('            m_pOnDataAvailable(sampleInfo);\n')
    out.write('        }\n')
    out.write('    \n')
    out.write('    }\n')
    out.write('}\n')
    out.write('\n')
    out.write('void C' + struct.name_camel_case + 'Subscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)\n')
    out.write('{\n')
    out.write('    m_sampleInfo = sampleInfo;\n')
    out.write('    \n')
    out.write('    if (m_pOnDataDisposed != nullptr)\n')
    out.write('    {\n')
    out.write('        m_pOnDataDisposed(sampleInfo);\n')
    out.write('    }\n')
    out.write('}\n')
    out.write('\n')
    out.write('void C' + struct.name_camel_case + 'Subscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)\n')
    out.write('{\n')
    out.write('    if (m_pOnLivelinessChanged != nullptr)\n')
    out.write('    {\n')
    out.write('        m_pOnLivelinessChanged(status);\n')
    out.write('    }\n')
    out.write('}\n')
    out.write('\n')
    out.write('void C' + struct.name_camel_case + 'Subscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)\n')
    out.write('{\n')
    out.write('    \n')
    out.write('    if (m_pOnSubscriptionMatched != nullptr)\n')
    out.write('    {\n')
    out.write('        m_pOnSubscriptionMatched(status);\n')
    out.write('    }\n')
    out.write('}\n')
    out.close()


