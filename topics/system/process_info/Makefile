###############################################################################
#
# The following variables must be set for the makefile to work correctly
#
# TARG_BUILD_MAJOR   - Version number major
# TARG_BUILD_MINOR   - Version number minor
# TARG_BUILD_PATCH - Version number patch
# TARGET_TYPE        - library, staticlib, executable, unittest or thirdparty
# TARGET_NAME        - Name of final executable/library
#
###############################################################################
include ../../../../Makefiles/Makefile.platform

TARG_SOURCE_DIR = $(CURDIR)
TARG_BUILD_MAJOR = 1
TARG_BUILD_MINOR = 1
TARG_BUILD_PATCH = 0
TARG_BUILD_REVISION = 0
TARGET_TYPE = library
TARGET_NAME = process_info

###############################################################################
# compilation flags
###############################################################################
TARG_INCLUDES += -I $(CURDIR)/include
TARG_INCLUDES += -I $(TOP_DIR)/topics/base_data_types/include

# Sources
TARG_SOURCES = process_info.cxx
TARG_SOURCES += process_infoPlugin.cxx
TARG_SOURCES += process_infoSupport.cxx

###############################################################################
# Installation section
###############################################################################

# package control file
PACKAGE_DESCRIPTION = "Ensign EDGE Process_Info Library"
PACKAGE_DEV_DESCRIPTION = "Ensign EDGE Process_Info Library"
PACKAGE_MAINTAINER = "Mark Carrier \<mark.carrier@ensignenergy.com\>"
PACKAGE_DEPENDENCIES = liblogger, libdds_base, libbase_data_types
PACKAGE_DEV_DEPENDENCIES = liblogger-dev, libdds_base-dev, libbase_data_types-dev
PACKAGE_LICENSE = "Closed License"

# package include files
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/process_info.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/process_infoPlugin.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/process_infoSupport.h

# package installation directory
PACKAGE_INSTALL_DIR += $(CURDIR)/../../../package

###############################################################################
# Makefiles included to configure the compiler, etc for the current platform
###############################################################################
include $(TOP_DIR)/Makefiles/Makefile.rti
include $(TOP_DIR)/Makefiles/Makefile.macros
include $(TOP_DIR)/Makefiles/Makefile.basic
