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


def write_publisher_h(outdir, struct):
    out = open(outdir + '/' + struct.name_underscore + '_publisher.h', 'w')
    util_gen.out_copywrite(out)
    out.write('#ifndef __' + util_gen.module_name.replace("::","_").upper()+ struct.name_underscore.upper() + '_PUBLISHER_H__\n')
    out.write('#define __' + util_gen.module_name.replace("::","_").upper()+ struct.name_underscore.upper() + '_PUBLISHER_H__\n')
    out.write('\n')
    out.write('#include "publisher.h"\n')
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

    if len(struct.ingroup) > 0:
        for ib in range(len(struct.ingroup)):
            if ib == 0:
                out.write('/// @ingroup ' + struct.ingroup[ib] + '\n')
    if len(struct.brief_comments) > 0:
        for ib in range(len(struct.brief_comments)):
            if ib == 0:
                out.write('/// @brief ' + struct.brief_comments[ib] + '\n')
            else:
                out.write('///        ' + struct.brief_comments[ib] + '\n')
        out.write('///\n')
        for id in range(len(struct.comments)):
            if len(struct.comments[id]) > 1:
                out.write('/// ' + struct.comments[id] + '\n')
        out.write('///\n')
    out.write('class C' + struct.name_camel_case + 'Publisher : public TPublisher< ' + util_gen.module_name + struct.name_camel_case + ' >\n')
    out.write('{\n')
    out.write('    public:\n')
    out.write('        C' + struct.name_camel_case + 'Publisher();\n')
    out.write('        ~C' + struct.name_camel_case + 'Publisher();\n')
    out.write('        \n')
    out.write('        bool Create(int32_t domain);\n')
    out.write('        bool Initialize();\n')
    out.write('        bool PublishSample();\n')
    out.write('        \n')
    for sfield in struct.fields:
        if len(sfield.comment) > 1:
            out.write('        /// ' + sfield.comment + '\n')
        if sfield.datatype in util_gen.enums:
            out.write('        /// @param ' + util_gen.module_name + sfield.datatype + ' ' + sfield.name + ')\n')
            out.write('        void Set' + str_cap(sfield.name) + '(' + util_gen.module_name + sfield.datatype + ' ' + sfield.name + ');\n')
        elif 'DataTypes::Uuid' in sfield.datatype:
            out.write('        /// @param ' + 'CDdsUuid' + ' ' + sfield.name + '\n')
            out.write('        void Set' + str_cap(sfield.name) + '(CDdsUuid' + ' ' + sfield.name + ');\n')
        elif sfield.unit_name != '':
            out.write('        /// @param ' + 'units::' + sfield.unit_namespace + '::' + sfield.unit_name + '_t ' + sfield.name + '\n')
            out.write('        void Set' + str_cap(sfield.name) + '(const ' + 'units::' + sfield.unit_namespace + '::' + sfield.unit_name + '_t ' + sfield.name + ');\n')
        else: 
            out.write('        /// @param ' + sfield.datatype + ' ' + sfield.name + '\n')
            out.write('        void Set' + str_cap(sfield.name) + '(const ' + sfield.datatype + ' ' + sfield.name + ');\n')
    out.write('};\n')
    out.write('\n')
    out.write('#endif // __' + util_gen.module_name.replace("::","_").upper()+ struct.name_underscore.upper() + '_PUBLISHER_H__\n')
    out.close()


def write_publisher_cxx(outdir, struct, qoslib, qosprof):
    out = open(outdir + '/' + struct.name_underscore + '_publisher.cxx', 'w')
    out.write('#include "' + struct.name_underscore + '_publisher.h"\n')
    out.write('\n')
    out.write('C' + struct.name_camel_case + 'Publisher::C' + struct.name_camel_case + 'Publisher()\n')
    out.write('{\n')
    out.write('}\n')
    out.write('\n')
    out.write('C' + struct.name_camel_case + 'Publisher::~C' + struct.name_camel_case + 'Publisher()\n')
    out.write('{\n')
    out.write('}\n')
    out.write('\n')
    out.write('bool C' + struct.name_camel_case + 'Publisher::Create(int32_t domain)\n')
    out.write('{\n')
    out.write('    return TPublisher::Create(domain,\n')
    out.write('                       ' + util_gen.module_name + struct.copyc + ',\n')
    out.write('                       "' + qoslib + '",\n')
    out.write('                       "' + qosprof + '");\n')
    out.write('}\n')
    out.write('\n')
    out.write('bool C' + struct.name_camel_case + 'Publisher::Initialize()\n')
    out.write('{\n')
    out.write('    CDdsUuid uuid;\n')
    out.write('    bool retVal = false;\n')
    out.write('\n')
    out.write('    if (m_pDataInstance != nullptr)\n')
    out.write('    {\n')
    for sfield in struct.fields:
        if sfield.key == True:
            out.write('        uuid.GenerateUuid();\n')
            out.write('        m_pDataInstance->id = DDS_String_dup(uuid.c_str());\n')
            break;
    out.write('        retVal = true;\n')
    out.write('    }\n')
    out.write('\n')
    out.write('    return retVal;\n')
    out.write('}\n')
    out.write('\n')
    out.write('bool C' + struct.name_camel_case + 'Publisher::PublishSample()\n')
    out.write('{\n')
    if 'State' in struct.name_camel_case:
        out.write('    DDS_Time_t currentTime;\n')
        out.write('\n')
        out.write('    if (m_pDataInstance != nullptr)\n')
        out.write('    {\n')
        out.write('        GetParticipant()->get_current_time(currentTime);\n')
        hasTimestamp = False
        for sfield in struct.fields:
            if sfield.name == 'timestamp':
                hasTimestamp = True
                break
        if hasTimestamp == True:
            out.write('        m_pDataInstance->timestamp.sec = currentTime.sec;\n')
            out.write('        m_pDataInstance->timestamp.nanosec = currentTime.nanosec;\n')
        out.write('    }\n')
        out.write('\n')
    out.write('    return Publish();\n')
    out.write('}\n')
    out.write('\n')
    for sfield in struct.fields:
        if sfield.datatype in util_gen.enums:
            out.write('void C' + struct.name_camel_case + 'Publisher::Set' + str_cap(sfield.name) + '(' + util_gen.module_name + sfield.datatype + ' ' + sfield.name + ')\n')
        elif 'DataTypes::Uuid' in sfield.datatype:
            out.write('void C' + struct.name_camel_case + 'Publisher::Set' + str_cap(sfield.name) + '(CDdsUuid ' + sfield.name + ')\n')
        elif sfield.unit_name != '':
            out.write('void C' + struct.name_camel_case + 'Publisher::Set' + str_cap(sfield.name) + '(const ' + 'units::' + sfield.unit_namespace + '::' + sfield.unit_name + '_t ' + sfield.name + ')\n')
        else:
            out.write('void C' + struct.name_camel_case + 'Publisher::Set' + str_cap(sfield.name) + '(' + sfield.datatype + ' ' + sfield.name + ')\n')
        out.write('{\n')
        out.write('    if (m_pDataInstance != nullptr)\n')        
        out.write('    {\n')
        if sfield.unit_name != '':
            out.write('        m_pDataInstance->' + sfield.name + ' = units::unit_cast<double>(' + sfield.name + ');\n') 
        elif 'DataTypes::Uuid' in sfield.datatype:
            out.write('        m_pDataInstance->' + sfield.name + ' = DDS_String_dup(' + sfield.name + '.c_str());\n') 
        else:
            out.write('        m_pDataInstance->' + sfield.name + ' = ' + sfield.name + ';\n') 
        out.write('    }\n')
        out.write('}\n')
        out.write('\n')

    out.close()


