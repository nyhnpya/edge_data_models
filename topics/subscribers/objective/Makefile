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
include ../../../../Makefiles/Makefile.platform

TARG_SOURCE_DIR = $(CURDIR)
TARG_BUILD_MAJOR = 0
TARG_BUILD_MINOR = 5
TARG_BUILD_VERSION = 1
TARG_BUILD_REVISION = 0
TARGET_TYPE = library
TARGET_NAME = objective_subscriber

###############################################################################
# compilation flags
###############################################################################
# Includes
TARG_INCLUDES += -I /usr/local/include/dds_base
TARG_INCLUDES += -I /usr/local/include/logger
TARG_INCLUDES += -I $(CURDIR)/include
TARG_INCLUDES += -I $(TOP_DIR)/edge_data_models/topics/objective/objective/include
TARG_INCLUDES += -I $(TOP_DIR)/edge_data_models/topics/base_data_types/include

# Sources
TARG_SOURCES = objective_subscriber.cpp

###############################################################################
# Installation section
###############################################################################

# package control file
PACKAGE_DESCRIPTION = "Ensign EDGE Objective Library"
PACKAGE_EXTENDED_DESCRIPTION = "Ensign EDGE Objective Library"
PACKAGE_MAINTAINER = "Mark Carrier \<mark.carrier@ensignenergy.com\>"
PACKAGE_DEPENDENCIES = liblogger, libdds_base, libbase_data_types, libobjective
PACKAGE_DEV_DEPENDENCIES = liblogger-dev, libdds_base-dev, libbase_data_types-dev, libobjective-dev
PACKAGE_LICENSE = "Closed License"

# package include files
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/objective_subscriber.h

# package installation directory
PACKAGE_INSTALL_DIR += $(TOP_DIR)/edge_data_models/package

###############################################################################
# Makefiles included to configure the compiler, etc for the current platform
###############################################################################
include $(TOP_DIR)/Makefiles/Makefile.rti
include $(TOP_DIR)/Makefiles/Makefile.macros
include $(TOP_DIR)/Makefiles/Makefile.basic
