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
include $(MAKEFILEHOME)/Makefile.platform

TARG_SOURCE_DIR = $(CURDIR)
TARG_BUILD_MAJOR = 1
TARG_BUILD_MINOR = 0
TARG_BUILD_PATCH = 1
TARG_BUILD_REVISION = 0
TARGET_TYPE = library
TARGET_NAME = base_data_types

###############################################################################
# compilation flags
###############################################################################
TARG_INCLUDES += -I $(CURDIR)/include

# Sources
TARG_SOURCES = base_data_types.cxx
TARG_SOURCES += base_data_typesPlugin.cxx
TARG_SOURCES += base_data_typesSupport.cxx

###############################################################################
# Installation section
###############################################################################

# package control file
PACKAGE_DESCRIPTION = "Ensign EDGE Base_Data_Types Library"
PACKAGE_DEV_DESCRIPTION = "Ensign EDGE Base_Data_Types Library"
PACKAGE_MAINTAINER = "Mark Carrier \<mark.carrier@ensignenergy.com\>"
PACKAGE_DEPENDENCIES = liblogger, libdds_base
PACKAGE_DEV_DEPENDENCIES = liblogger-dev, libdds_base-dev
PACKAGE_LICENSE = "Closed License"

# package include files
PACKAGE_INCLUDE_FILES += $(CURDIR)/inclubase_data_types.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/inclubase_data_typesPlugin.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/inclubase_data_typesSupport.h

# package configuration files

# package installation directory
PACKAGE_INSTALL_DIR += $(CURDIR)/../../package

###############################################################################
# Makefiles included to configure the compiler, etc for the current platform
###############################################################################
include $(MAKEFILEHOME)/Makefile.rti
include $(MAKEFILEHOME)/Makefile.macros
include $(MAKEFILEHOME)/Makefile.basic
