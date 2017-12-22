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
TARGET_NAME = wellbore_objective_state

###############################################################################
# compilation flags
###############################################################################
TARG_INCLUDES += -isystem $(EDGE_THIRD_PARTY_INCLUDE)
TARG_INCLUDES += -I $(DDS_INCLUDE)
TARG_INCLUDES += -I $(LOG_INCLUDE)
TARG_INCLUDES += -I $(CURDIR)/include
TARG_INCLUDES += -I $(CURDIR)/../../downhole/wellbore/include
TARG_INCLUDES += -I $(CURDIR)/../../base_data_types/include

# Sources
TARG_SOURCES = wellbore.cxx
TARG_SOURCES += wellborePlugin.cxx
TARG_SOURCES += wellboreSupport.cxx
TARG_SOURCES += wellbore_state_subscriber.cpp
TARG_SOURCES += wellbore_state_publisher.cpp

###############################################################################
# Installation section
###############################################################################

# package control file
PACKAGE_DESCRIPTION = "Ensign EDGE C++ API wellbore state subscription library"
PACKAGE_DEV_DESCRIPTION = "Ensign EDGE C++ API wellbore state subscription library - development"
PACKAGE_MAINTAINER = "Mark Carrier \<mark.carrier@ensignenergy.com\>"
PACKAGE_DEPENDENCIES = liblogger, libdds_base, libbase_data_types, libwellbore
PACKAGE_DEV_DEPENDENCIES = liblogger-dev, libdds_base-dev, libbase_data_types-dev, libwellbore-dev
PACKAGE_LICENSE = "Closed License"

# package include files
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/wellbore.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/wellborePlugin.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/wellboreSupport.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/wellbore_state_subscriber.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/wellbore_state_publisher.h

# package installation directory
PACKAGE_INSTALL_DIR += $(CURDIR)/../../../package

###############################################################################
# Makefiles included to configure the compiler, etc for the current platform
###############################################################################
include $(TOP_DIR)/Makefiles/Makefile.rti
include $(TOP_DIR)/Makefiles/Makefile.macros
include $(TOP_DIR)/Makefiles/Makefile.basic
