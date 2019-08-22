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

def write_io_state_machine_h(outdir, struct):
    out = open(outdir + '/io_' + struct.name_underscore + '.h', 'w')
    out_copywrite(out)
    out.write('#ifndef __IO_' + util_gen.module_name.replace("::","_").upper()+ struct.name_underscore.upper() + '_H__\n')
    out.write('#define __IO_' + util_gen.module_name.replace("::","_").upper()+ struct.name_underscore.upper() + '_H__\n')
    out.write('\n')
    out.write('#include <vector>\n')
    out.write('#include "edge_data_store.h"\n')
    out.write('\n')
    out.write('struct Io' + struct.name_camel_case + '\n')
    out.write('{\n')
    out.write('    Io' + struct.name_camel_case + '();\n')
    out.write('    bool GetQuality();\n')
    out.write('    bool Initialize();\n')
    out.write('\n')
    for sfield in struct.fields:
        if sfield.datatype in util_gen.enums:
            out.write('    EdgeTypeInt32Ptr ' + sfield.name + ';\n') 
        elif sfield.datatype == 'float':
            out.write('    EdgeTypeFloatPtr ' + sfield.name + ';\n') 
        elif sfield.datatype == 'double':
            out.write('    EdgeTypeDoublePtr ' + sfield.name + ';\n') 
        elif sfield.datatype == 'int':
            out.write('    EdgeTypeInt32Ptr ' + sfield.name + ';\n') 
        elif sfield.datatype == 'DataTypes::Status':
            out.write('    EdgeTypeInt32Ptr ' + sfield.name + ';\n') 
#        else:
#            out.write('    XXX ' + sfield.datatype + ' Get' + str_cap(sfield.name) + '();\n') 
    out.write('};\n')
#    out.write('} Io' + struct.name_camel_case + ';\n')
    out.write('#endif // __IO_' + util_gen.module_name.replace("::","_").upper()+ struct.name_underscore.upper() + '_H__\n')
    out.close()

def write_io_state_machine_cxx(outdir, struct):
    out = open(outdir + '/io_' + struct.name_underscore + '.cxx', 'w')
    out_copywrite(out)
    out.write('#include "io_' + struct.name_underscore + '.h"\n')
    out.write('\n')
    out.write('Io' + struct.name_camel_case + '::Io' + struct.name_camel_case + '()\n')
    out.write('{\n')
    for sfield in struct.fields:
        if sfield.datatype in util_gen.enums:
            out.write('    ' + sfield.name + ' = nullptr;\n') 
        elif sfield.datatype == 'float':
            out.write('    ' + sfield.name + ' = nullptr;\n') 
        elif sfield.datatype == 'double':
            out.write('    ' + sfield.name + ' = nullptr;\n') 
        elif sfield.datatype == 'int':
            out.write('    ' + sfield.name + ' = nullptr;\n') 
        elif sfield.datatype == 'DataTypes::Status':
            out.write('    ' + sfield.name + ' = nullptr;\n') 
#        else:
#            out.write('    XXX ' + sfield.datatype + ' Get' + str_cap(sfield.name) + '();\n') 
    out.write('}\n')
    out.write('\n')
    out.write('bool Io' + struct.name_camel_case + '::GetQuality()\n')
    out.write('{\n')
    out.write('    bool quality = false;')
    out.write('\n')
    out.write('    quality = (')
    fcount = 0
    for sfield in struct.fields:
        preText = ''
        if fcount > 0:
            preText = ' &&\n               '
        if sfield.datatype in util_gen.enums:
            out.write(preText + '(' + sfield.name + '->GetQuality() == EdgeTypeBase::Good)') 
            fcount += 1
        elif sfield.datatype == 'float':
            out.write(preText + '(' + sfield.name + '->GetQuality() == EdgeTypeBase::Good)') 
            fcount += 1
        elif sfield.datatype == 'double':
            out.write(preText + '(' + sfield.name + '->GetQuality() == EdgeTypeBase::Good)') 
            fcount += 1
        elif sfield.datatype == 'int':
            out.write(preText + '(' + sfield.name + '->GetQuality() == EdgeTypeBase::Good)') 
            fcount += 1
        elif sfield.datatype == 'DataTypes::Status':
            out.write(preText + '(' + sfield.name + '->GetQuality() == EdgeTypeBase::Good)') 
            fcount += 1
    out.write(');\n')
    out.write('    return quality;\n')
    out.write('}\n')
    out.write('\n')
    out.write('bool Io' + struct.name_camel_case + '::Initialize()\n')
    out.write('{\n')
    out.write('    bool retVal = true;')
    fcount = 0
    for sfield in struct.fields:
        preText = '';
        if fcount == 0:
            preText = '\n    retVal =  ';
        else:
            preText = '\n    retVal += ';
        if sfield.datatype in util_gen.enums:
            out.write(preText + '((' + sfield.name + ' = CEdgeDataStore::Instance()->GetTypeInt32("' + struct.name_camel_case + '.' + sfield.name + '")) != nullptr);\n') 
        elif sfield.datatype == 'float':
            out.write(preText + '((' + sfield.name + ' = CEdgeDataStore::Instance()->GetTypeFloat("' + struct.name_camel_case + '.' + sfield.name + '")) != nullptr);\n') 
        elif sfield.datatype == 'double':
            out.write(preText + '((' + sfield.name + ' = CEdgeDataStore::Instance()->GetTypeDouble("' + struct.name_camel_case + '.' + sfield.name + '")) != nullptr);\n') 
        elif sfield.datatype == 'int':
            out.write(preText + '((' + sfield.name + ' = CEdgeDataStore::Instance()->GetTypeInt32("' + struct.name_camel_case + '.' + sfield.name + '")) != nullptr);\n') 
        elif sfield.datatype == 'DataTypes::Status':
            out.write(preText + '((' + sfield.name + ' = CEdgeDataStore::Instance()->GetTypeInt32("' + struct.name_camel_case + '.' + sfield.name + '")) != nullptr);\n') 
#        else:
#            out.write('    XXX ' + sfield.datatype + ' Get' + str_cap(sfield.name) + '();\n') 
    out.write('\n')
    out.write('    return retVal;\n')
    out.write('}\n')
    out.write('\n')
    out.close()


def write_publish_io_h(outdir, struct_objs):
    out = open(outdir + '/' + util_gen.idl_name + '_publish_io.h', 'w')
    out_copywrite(out)
    out.write('#ifndef __' + util_gen.idl_name.upper()+ '_PUBLISH_IO_H__\n')
    out.write('#define __' + util_gen.idl_name.upper()+ '_PUBLISH_IO_H__\n')
    out.write('\n')
    for struct in struct_objs:
        out.write('#include "' + struct.name_underscore + '_publisher.h"\n')
        out.write('#include "io_' + struct.name_underscore + '.h"\n')
    out.write('\n')
    out.write('class C' + util_gen.idl_name_camel_case + 'PublishIO \n')
    out.write('{\n')
    out.write('    public:\n')
    for struct in struct_objs:
        out.write('        static void Publish(C' + struct.name_camel_case + 'Publisher& publisher, Io' + struct.name_camel_case + '& io);\n')
    out.write('};\n')
    out.write('\n')
    out.write('#endif // __' + util_gen.idl_name.upper()+ '_PUBLISH_IO_H__\n')
    out.close()


def write_publish_io_cxx(outdir, struct_objs):
    out = open(outdir + '/' + util_gen.idl_name + '_publish_io.cxx', 'w')
    out_copywrite(out)
    out.write('#include "' + util_gen.idl_name + '_publish_io.h"\n')
    out.write('\n')
    out.write('\n')
    for struct in struct_objs:
        out.write('void C' + util_gen.idl_name_camel_case + 'PublishIO::Publish(C' + struct.name_camel_case + 'Publisher& publisher, Io' + struct.name_camel_case + '& io)\n')
        out.write('{\n')
        for sfield in struct.fields:
            if sfield.unit_name != '':
                out.write('    publisher.Set' + str_cap(sfield.name) + '(units::' + sfield.unit_namespace + '::' + sfield.unit_name + '_t' + '(io.' + sfield.name + '->GetValue()));\n') 
            elif sfield.datatype in util_gen.enums:
                out.write('    publisher.Set' + str_cap(sfield.name) + '(' + util_gen.module_name + sfield.datatype + '(io.' + sfield.name + '->GetValue()));\n') 
            elif sfield.datatype == 'float':
                out.write('    publisher.Set' + str_cap(sfield.name) + '(io.' + sfield.name + '->GetValue());\n') 
            elif sfield.datatype == 'double':
                out.write('    publisher.Set' + str_cap(sfield.name) + '(io.' + sfield.name + '->GetValue());\n') 
            elif sfield.datatype == 'int':
                out.write('    publisher.Set' + str_cap(sfield.name) + '(io.' + sfield.name + '->GetValue());\n') 
            elif sfield.datatype == 'DataTypes::Status':
                out.write('    publisher.Set' + str_cap(sfield.name) + '(DataTypes::Status(io.' + sfield.name + '->GetValue()));\n') 
#           else:
#               out.write('    XXX ' + sfield.datatype + ' Get' + str_cap(sfield.name) + '();\n') 
        out.write('    publisher.PublishSample();\n')
        out.write('}\n')
        out.write('\n')
    out.write('\n')
    out.close()













