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
import types_gen 


def init():
    global in_comment
    global in_brief
    global in_ingroup

    global ingroup
    global briefs
    global descs
    global vartable1
    global vartable2
    global vartable3

    global idl_name
    global idl_file_name
    global output_dir
    global module_name
    global lastcopyc
#struct_name_camel_case = ''
#struct_name_underscore = ''
#fields_list = []
    global enums
    global structs
    global structs2
    global structobjs
    global QoSLibrary 
    global QoSProfile 
    

    in_comment = 0
    in_brief = 0
    in_ingroup = 0

    ingroup = list()
    briefs = list()
    descs = list()
    vartable1 = list()
    vartable2 = list()
    vartable3 = list()

    idl_name = ''
    idl_file_name = ''
    output_dir = ''
    module_name = ''
    lastcopyc = ''
#struct_name_camel_case = ''
#struct_name_underscore = ''
#fields_list = []
    enums = []
    structs = []
    structs2 = []
    structobjs = []

    QoSLibrary = 'EdgeBaseLibrary'
    QoSProfile = 'EdgeBaseProfile'
    

def str_cap(word):
    word = re.sub('([a-zA-Z])', lambda x: x.groups()[0].upper(), word, 1)
    return word

def out_copywrite(wout):
    wout.write('/*\n')
    wout.write(' *  Copyright (c) 2019 Ensign Energy Incorporated\n')
    wout.write(' *  All Rights Reserved.\n')
    wout.write(' *\n')
    wout.write(' * NOTICE:  All information contained herein is, and remains\n')
    wout.write(' * the property of Ensign Energy Incorporated and its suppliers,\n')
    wout.write(' * if any.  The intellectual and technical concepts contained\n')
    wout.write(' * herein are proprietary to Ensign Energy Incorporated\n')
    wout.write(' * and its suppliers and may be covered by U.S. and Foreign Patents,\n')
    wout.write(' * patents in process, and are protected by trade secret or copyright law.\n')
    wout.write(' * Dissemination of this information or reproduction of this material\n')
    wout.write(' * is strictly forbidden unless prior written permission is obtained\n')
    wout.write(' * from Ensign Energy Incorporated.\n')
    wout.write(' */\n')

def write_makefile(outdir, struct_names, struct_names2):
    out = open(outdir + '/Makefile', 'w')
    out.write('###############################################################################\n')
    out.write('# Objective State Library: ' + idl_name + '\n')
    out.write('###############################################################################\n')
    out.write('include $(MAKEFILEHOME)/Makefile.platform\n')
    out.write('\n')
    out.write('TARG_SOURCE_DIR = $(CURDIR)\n')
    out.write('TARG_BUILD_MAJOR = 1\n')
    out.write('TARG_BUILD_MINOR = 2\n')
    out.write('TARG_BUILD_PATCH = 0\n')
    out.write('TARG_BUILD_REVISION = 0\n')
    out.write('TARGET_TYPE = library\n')
    out.write('TARGET_NAME = ' + idl_name + '\n')
    out.write('\n')
    out.write('###############################################################################\n')
    out.write('# compilation flags\n')
    out.write('###############################################################################\n')
    out.write('TARG_INCLUDES += -isystem $(EDGE_THIRD_PARTY_INCLUDE)\n')
    out.write('TARG_INCLUDES += -I $(DDS_INCLUDE)\n')
    out.write('TARG_INCLUDES += -I $(LOG_INCLUDE)\n')
    out.write('TARG_INCLUDES += -I $(CURDIR)/../base_data_types/include\n')
    out.write('TARG_INCLUDES += -I $(CURDIR)/include\n')
#    out.write('TARG_INCLUDES += -I /usr/local/include/plant_client\n')
    out.write('\n')
    out.write('# Sources\n')
    out.write('TARG_SOURCES = ' + idl_name + '.cxx\n')
    out.write('TARG_SOURCES += ' + idl_name + 'Plugin.cxx\n')
    out.write('TARG_SOURCES += ' + idl_name + 'Support.cxx\n')
    for struct_name in struct_names2:
        out.write('TARG_SOURCES += ' + struct_name + '_publisher.cxx\n')
        out.write('TARG_SOURCES += ' + struct_name + '_subscriber.cxx\n')
#        out.write('TARG_SOURCES += io_' + struct_name + '.cxx\n')
#    out.write('TARG_SOURCES += ' + idl_name + '_publish_io.cxx\n')
    out.write('\n')
    out.write('###############################################################################\n')
    out.write('# Installation section\n')
    out.write('###############################################################################\n')
    out.write('\n')
    out.write('# package control file\n')
    out.write('PACKAGE_DESCRIPTION = "Library package for the Ensign Energy EDGE ' + idl_name + ' API."\n')
    out.write('PACKAGE_DEV_DESCRIPTION = "core files for Ensign Energy EDGE ' + idl_name + ' API development."\n')
    out.write('PACKAGE_MAINTAINER = "Mark Carrier \(mark.carrier@ensignenergy.com\)"\n')
    out.write('PACKAGE_DEPENDENCIES = liblogger (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION)),\n')
    out.write('PACKAGE_DEPENDENCIES += libdds_base (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION)),\n')
    out.write('PACKAGE_DEPENDENCIES += libbase_data_types (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION))\n')
    out.write('PACKAGE_DEV_DEPENDENCIES = liblogger-dev (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION)),\n')
    out.write('PACKAGE_DEV_DEPENDENCIES += libdds_base-dev (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION)),\n')
    out.write('PACKAGE_DEV_DEPENDENCIES += libbase_data_types-dev (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION))\n')
    out.write('PACKAGE_LICENSE = "Closed License"\n')
    out.write('\n')
    out.write('# package include files\n')
    out.write('PACKAGE_INCLUDE_FILES += $(CURDIR)/include/' + idl_name + '.h\n')
    out.write('PACKAGE_INCLUDE_FILES += $(CURDIR)/include/' + idl_name + 'Support.h\n')
    out.write('PACKAGE_INCLUDE_FILES += $(CURDIR)/include/' + idl_name + 'Plugin.h\n')
    for struct_name in struct_names2:
        out.write('PACKAGE_INCLUDE_FILES += $(CURDIR)/include/' + struct_name + '_publisher.h\n')
        out.write('PACKAGE_INCLUDE_FILES += $(CURDIR)/include/' + struct_name + '_subscriber.h\n')
#        out.write('PACKAGE_INCLUDE_FILES += $(CURDIR)/include/io_' + struct_name + '.h\n')
#    out.write('PACKAGE_INCLUDE_FILES += $(CURDIR)/include/' + idl_name + '_publish_io.h\n')
    out.write('\n')
    out.write('# package installation directory\n')
    out.write('PACKAGE_INSTALL_DIR += $(CURDIR)/../../package\n')
    out.write('\n')
    out.write('###############################################################################\n')
    out.write('# Makefiles included to configure the compiler, etc for the current platform\n')
    out.write('###############################################################################\n')
    out.write('include $(MAKEFILEHOME)/Makefile.rti\n')
    out.write('include $(MAKEFILEHOME)/Makefile.macros\n')
    out.write('include $(MAKEFILEHOME)/Makefile.basic\n')
    out.write('\n')
    out.close()



