###############################################################################
#
# The following variables must be set for the makefile to work correctly
#
# TARG_BUILD_MAJOR   - Version number major
# TARG_BUILD_MINOR   - Version number minor
# TARG_BUILD_VERSION - Version number patch
# TARGET_TYPE        - library, staticlib, executable, unittest or thirdparty
# TARGET_NAME        - Name of final executable/library
#
###############################################################################
include ../../../Makefiles/Makefile.platform

TARG_SOURCE_DIR = $(CURDIR)
TARG_BUILD_MAJOR = 0
TARG_BUILD_MINOR = 5
TARG_BUILD_VERSION = 1
TARGET_TYPE = library
TARGET_NAME = base_data_types

###############################################################################
# compilation flags
###############################################################################
# Includes
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
PACKAGE_EXTENDED_DESCRIPTION = "Ensign EDGE Base_Data_Types Library"
PACKAGE_MAINTAINER = "Mark Carrier \<mark.carrier@ensignenergy.com\>"
PACKAGE_DEPENDENCIES = liblogger, libdds_base
PACKAGE_DEV_DEPENDENCIES = liblogger-dev, libdds_base-dev
PACKAGE_LICENSE = "Closed License"

# package include files
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/base_data_types.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/base_data_typesPlugin.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/base_data_typesSupport.h

# package configuration files

# package installation directory
PACKAGE_INSTALL_DIR += $(TOP_DIR)/edge_data_models/package

###############################################################################
# Makefiles included to configure the compiler, etc for the current platform
###############################################################################
include $(TOP_DIR)/Makefiles/Makefile.rti
include $(TOP_DIR)/Makefiles/Makefile.macros
include $(TOP_DIR)/Makefiles/Makefile.basic
