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
include ../../../Makefiles/Makefile.platform

TARG_SOURCE_DIR = $(CURDIR)
TARG_BUILD_MAJOR = 1
TARG_BUILD_MINOR = 1
TARG_BUILD_PATCH = 0
TARG_BUILD_REVISION = 0
TARGET_TYPE = library
TARGET_NAME = sim_drill_objective_state

###############################################################################
# compilation flags
###############################################################################
# Options
TARG_OPTIONS += -ggdb

# Libraries
TARG_LIBS +=

# Includes
TARG_INCLUDES += -I /usr/local/include/dds_base
TARG_INCLUDES += -I /usr/local/include/logger
TARG_INCLUDES += -I $(CURDIR)/include
TARG_INCLUDES += -I $(TOP_DIR)/topics/base_data_types/include
TARG_INCLUDES += -I $(TOP_DIR)/topics/simulation/include

# Sources
TARG_SOURCES = sim_drill_request_subscriber.cpp
TARG_SOURCES += sim_drill_objective_subscriber.cpp
TARG_SOURCES += sim_drill_state_subscriber.cpp
TARG_SOURCES += sim_drill_request_publisher.cpp
TARG_SOURCES += sim_drill_objective_publisher.cpp
TARG_SOURCES += sim_drill_state_publisher.cpp

###############################################################################
# Installation section
###############################################################################

# package control files
PACKAGE_DESCRIPTION = "EDGE drilling simulation objective-state library"
PACKAGE_DEV_DESCRIPTION = "EDGE drilling simulation objective-state library"
PACKAGE_MAINTAINER = "Mark Carrier \(mark.carrier@ensignenergy.com\)"
PACKAGE_DEPENDENCIES = liblogger, libdds_base, libbase_data_types, libsimulation_drill
PACKAGE_DEV_DEPENDENCIES = liblogger-dev, libdds_base-dev, libbase_data_types-dev, libsimulation_drill-dev
PACKAGE_LICENSE = "Closed License"

# package include files
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/sim_drill_request_publisher.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/sim_drill_request_subscriber.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/sim_drill_state_publisher.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/sim_drill_state_subscriber.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/sim_drill_objective_publisher.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/sim_drill_objective_subscriber.h

# package installation directory
PACKAGE_INSTALL_DIR += $(TOP_DIR)/package

###############################################################################
# Makefiles included to configure the compiler, etc for the current platform
###############################################################################
include $(TOP_DIR)/Makefiles/Makefile.rti
include $(TOP_DIR)/Makefiles/Makefile.macros
include $(TOP_DIR)/Makefiles/Makefile.basic
