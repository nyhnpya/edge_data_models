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
TARGET_NAME = rotate_objective_state

###############################################################################
# compilation flags
###############################################################################
# Options
TARG_OPTIONS += -ggdb

# Libraries
TARG_LIBS +=

# Includes
TARG_INCLUDES += -I /usr/local/include/dds_base
TARG_INCLUDES += -isystem/usr/local/include/edge_third_party
TARG_INCLUDES += -I /usr/local/include/logger
TARG_INCLUDES += -I $(TOP_DIR)/topics/base_data_types/include
TARG_INCLUDES += -I $(TOP_DIR)/topics/process/rotate/include
TARG_INCLUDES += -I $(CURDIR)/include

# Sources
TARG_SOURCES = rotate_request_publisher.cpp
TARG_SOURCES += rotate_request_subscriber.cpp
TARG_SOURCES += rotate_objective_publisher.cpp
TARG_SOURCES += rotate_objective_subscriber.cpp
TARG_SOURCES += rotate_state_publisher.cpp
TARG_SOURCES += rotate_state_subscriber.cpp

###############################################################################
# Installation section
###############################################################################

# package control file
PACKAGE_DESCRIPTION = "EDGE rotate objective-state library"
PACKAGE_DEV_DESCRIPTION = "EDGE rotate objective-state library"
PACKAGE_MAINTAINER = "Mark Carrier \(mark.carrier@ensignenergy.com\)"
PACKAGE_DEPENDENCIES = liblogger, libdds_base, libbase_data_types, librotate
PACKAGE_DEV_DEPENDENCIES = liblogger-dev, libdds_base-dev, libbase_data_types-dev, librotate-dev
PACKAGE_LICENSE = "Closed License"

# package include files
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/rotate_request_publisher.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/rotate_request_subscriber.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/rotate_objective_publisher.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/rotate_objective_subscriber.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/rotate_state_publisher.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/rotate_state_subscriber.h

# package installation directory
PACKAGE_INSTALL_DIR += $(TOP_DIR)/package

###############################################################################
# Makefiles included to configure the compiler, etc for the current platform
###############################################################################
include $(TOP_DIR)/Makefiles/Makefile.rti
include $(TOP_DIR)/Makefiles/Makefile.macros
include $(TOP_DIR)/Makefiles/Makefile.basic
