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

from pub_gen import write_publisher_h, write_publisher_cxx
from sub_gen import write_subscriber_h, write_subscriber_cxx

util_gen.init()

# read in idl file
util_gen.output_dir = sys.argv[2]
util_gen.idl_file_name = sys.argv[1]
if '.cpy' in util_gen.idl_file_name:
    util_gen.idl_file_name = util_gen.idl_file_name.replace('.cpy', '.idl')

print ('Processing file: ' + util_gen.idl_file_name + ' into directory: ' + util_gen.output_dir + '\n')

util_gen.idl_name = ''
for ifn in util_gen.idl_file_name.replace('.idl','').split('/'):
    util_gen.idl_name = ifn

util_gen.idl_name_camel_case = util_gen.idl_name.replace('_',' ').title().replace(' ','')

util_gen.QoSLibrary = 'EdgeBaseLibrary'
util_gen.QoSProfile = 'EdgeBaseProfile'

util_gen.ingroup = list()
util_gen.briefs = list()
util_gen.descs = list()
util_gen.vartable1 = list()
util_gen.vartable2 = list()
util_gen.vartable3 = list()

with open(util_gen.idl_file_name) as idl_file:
    for line in idl_file:
        if util_gen.in_comment == 1:
            res = line.partition('*')[2] 
            res2 = res.strip()
            if util_gen.in_ingroup == 1:
                if len(res2) <= 1:
                    util_gen.in_ingroup = 0
            if '\\ingroup' in line:
                util_gen.in_ingroup = 1
                res = line.partition('ingroup')[2].strip() 
                util_gen.ingroup.append(res)
                util_gen.in_brief = 3

            if util_gen.in_brief in [2, 3] and util_gen.in_ingroup == 0:
                varcols = line.split('|')
                #print 'len: ' + str(len(varcols))
                if len(varcols) == 5:
                    util_gen.in_brief = 3
                    util_gen.vartable1.append(varcols[1].strip())
                    util_gen.vartable2.append(varcols[2].strip())
                    util_gen.vartable3.append(varcols[3].strip())

            if util_gen.in_brief == 2:
                util_gen.descs.append(res2)
            if util_gen.in_brief == 1:
                if len(res2) > 1:
                    util_gen.briefs.append(res2)
                else:
                    util_gen.in_brief = 2
            if '\\brief' in line:
                util_gen.in_brief = 1
                res = line.partition('brief')[2].strip() 
                util_gen.briefs.append(res)
#                print 'in_brief == 1'
#                print line
#                print res

        if '/**' in line:
            util_gen.in_comment = 1
            util_gen.ingroup = list()
            util_gen.briefs = list()
            util_gen.descs = list()
            util_gen.vartable1 = list()
            util_gen.vartable2 = list()
            util_gen.vartable3 = list()
        if '*/' in line:
            util_gen.in_comment = 0

        if 'enum' in line:
            enum_name = line.split()[1]
            util_gen.enums.append(enum_name)
            print ('enum_name: ' + enum_name)
        if '// QoSLibrary:' in line:
            if len(line.split()) >= 3:
                util_gen.QoSLibrary = line.split()[2]
        if '// QoSProfile:' in line:
            if len(line.split()) >= 3:
                util_gen.QoSProfile = line.split()[2]
        if 'module' in line:
            util_gen.module_name += line.split()[1] + '::'
            #print 'module_name: ' + module_name
        if '@copy-c-declaration static const char' in line:
            for cword in line.split():
                if '[]' in cword:
                    util_gen.lastcopyc = cword[:-2]
#                    print 'lastcopyc: ' + lastcopyc
#                    print '\n'
#        //@copy-c-declaration static const char HOIST_REQUEST_TOPIC[] = "HoistRequestTopic";
        if 'struct' in line:
            #fields_list = []
            current_struct = Struct() 
            current_struct.name_camel_case = line.split()[1]
            print ('struct_name: ' + current_struct.name_camel_case)
            current_struct.name_underscore = re.sub(r"(\w)([A-Z])", r"\1_\2", current_struct.name_camel_case).lower()
            #print 'struct_file_name: ' + current_struct.name_underscore
            current_struct.fields = []
            current_struct.copyc = util_gen.lastcopyc
            current_struct.ingroup = util_gen.ingroup 
            current_struct.brief_comments = util_gen.briefs 
            current_struct.comments = util_gen.descs 
            util_gen.structs.append(current_struct.name_camel_case)
            util_gen.structs2.append(current_struct.name_underscore)
            #print 'len(struct.fields): ' + str(len(current_struct.fields))
            for line in idl_file:
                if '};' in line:
                    write_publisher_h(util_gen.output_dir, current_struct)
                    write_publisher_cxx(util_gen.output_dir, current_struct, util_gen.QoSLibrary, util_gen.QoSProfile)
                    write_subscriber_h(util_gen.output_dir, current_struct)
                    write_subscriber_cxx(util_gen.output_dir, current_struct, util_gen.QoSLibrary, util_gen.QoSProfile)
                    #write_io_state_machine_h(output_dir, current_struct)
                    #write_io_state_machine_cxx(output_dir, current_struct)
                    util_gen.structobjs.append(current_struct)
                    util_gen.QoSLibrary = 'EdgeBaseLibrary'
                    util_gen.QoSProfile = 'EdgeBaseProfile'
                    break
                if ';' not in line:
                    continue
                fields = line.replace(';','').split()
                if len(fields) < 2:
                    continue
                unit_namespace = ''
                unit_name = ''
                if 'units::' in line:
                    for field in fields:
                        if 'units::' not in field:
                            continue;
                        ufields = field.replace('(','').replace(')','').split('::')
                        current_struct.fields_with_units += 1
                        unit_namespace = ufields[1]
                        if len(ufields) < 3:
                            print('Error: Expected more ::... :' + line + '\n')
                        unit_name = ufields[2]
                iskey = False
                if '@key' in line:
                    iskey = True
                fdt = fields[0]
                if fdt == 'boolean':
                    fdt = 'bool'
                if fdt == 'long':
                    fdt = 'int32_t'
                field_comment = ''
                for iv in range(len(util_gen.vartable1)):
                    if util_gen.vartable1[iv] == fields[1]:
                        field_comment = util_gen.vartable2[iv]
                        field_type = util_gen.vartable3[iv]
                        if 'units::' in field_type:
                            ufields = field_type.replace('(','').replace(')','').split('::')
                            current_struct.fields_with_units += 1
                            unit_namespace = ufields[1]
                            if len(ufields) < 3:
                                print('Error: Expected more ::... :' + line + '\n')
                            unit_name = ufields[2]
                        break
                struct_field = StructField(fields[1], fdt, unit_namespace, unit_name, iskey, field_comment) 
                current_struct.fields.append(struct_field)
    #write_publish_io_h(output_dir, structobjs)
    #write_publish_io_cxx(output_dir, structobjs)
    util_gen.write_makefile(util_gen.output_dir, util_gen.structs, util_gen.structs2) 


