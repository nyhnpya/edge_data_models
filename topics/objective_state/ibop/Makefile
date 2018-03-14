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
TARG_BUILD_MINOR = 0
TARG_BUILD_PATCH = 1
TARG_BUILD_REVISION = 0
TARGET_TYPE = library
TARGET_NAME = rotate_objective_state

###############################################################################
# compilation flags
###############################################################################
TARG_INCLUDES += -isystem $(EDGE_THIRD_PARTY_INCLUDE)
TARG_INCLUDES += -I $(DDS_INCLUDE)
TARG_INCLUDES += -I $(LOG_INCLUDE)
TARG_INCLUDES += -I $(CURDIR)/../../base_data_types/include
TARG_INCLUDES += -I $(CURDIR)/include

# Sources
TARG_SOURCES = ibop.cxx
TARG_SOURCES += ibopPlugin.cxx
TARG_SOURCES += ibopSupport.cxx
#TARG_SOURCES += ibop_request_publisher.cpp
#TARG_SOURCES += ibop_request_subscriber.cpp
#TARG_SOURCES += ibop_objective_publisher.cpp
#TARG_SOURCES += ibop_objective_subscriber.cpp
#TARG_SOURCES += ibop_state_publisher.cpp
#TARG_SOURCES += ibop_state_subscriber.cpp

###############################################################################
# Installation section
###############################################################################

# package control file
PACKAGE_DESCRIPTION = "Library package for the Ensign rotate_request API."
PACKAGE_DEV_DESCRIPTION = "core files for Ensign rotate_request API development."
PACKAGE_MAINTAINER = "Jarrod Chapman \(jarrod.chapman@ensignenergy.com\)"
PACKAGE_DEPENDENCIES = liblogger, libdds_base, libbase_data_types
PACKAGE_DEV_DEPENDENCIES = liblogger-dev, libdds_base-dev, libbase_data_types-dev
PACKAGE_LICENSE = "Closed License"

# package include files
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/ibop.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/ibopSupport.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/ibopPlugin.h
#PACKAGE_INCLUDE_FILES += $(CURDIR)/include/ibop_request_publisher.h
#PACKAGE_INCLUDE_FILES += $(CURDIR)/include/ibop_request_subscriber.h
#PACKAGE_INCLUDE_FILES += $(CURDIR)/include/ibop_objective_publisher.h
#PACKAGE_INCLUDE_FILES += $(CURDIR)/include/ibop_objective_subscriber.h
#PACKAGE_INCLUDE_FILES += $(CURDIR)/include/ibop_state_publisher.h
#PACKAGE_INCLUDE_FILES += $(CURDIR)/include/ibop_state_subscriber.h

# package installation directory
PACKAGE_INSTALL_DIR += $(CURDIR)/../../../package

###############################################################################
# Makefiles included to configure the compiler, etc for the current platform
###############################################################################
include $(TOP_DIR)/Makefiles/Makefile.rti
include $(TOP_DIR)/Makefiles/Makefile.macros
include $(TOP_DIR)/Makefiles/Makefile.basic
