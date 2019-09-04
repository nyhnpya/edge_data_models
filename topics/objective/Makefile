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
TARGET_NAME = objective

###############################################################################
# compilation flags
###############################################################################
TARG_INCLUDES += -isystem $(EDGE_THIRD_PARTY_INCLUDE)
TARG_INCLUDES += -I $(DDS_INCLUDE)
TARG_INCLUDES += -I $(LOG_INCLUDE)
TARG_INCLUDES += -I $(CURDIR)/../base_data_types/include
TARG_INCLUDES += -I $(CURDIR)/include

# Sources
TARG_SOURCES = objective.cxx
TARG_SOURCES += objectivePlugin.cxx
TARG_SOURCES += objectiveSupport.cxx
TARG_SOURCES += objective_state_publisher.cxx
TARG_SOURCES += objective_state_subscriber.cxx

###############################################################################
# Installation section
###############################################################################

# package control file
PACKAGE_DESCRIPTION = "Library package for the Ensign Energy EDGE objective API."
PACKAGE_DEV_DESCRIPTION = "core files for Ensign Energy EDGE objective API development."
PACKAGE_MAINTAINER = "Mark Carrier \(mark.carrier@ensignenergy.com\)"
PACKAGE_DEPENDENCIES = liblogger, libdds_base, libbase_data_types
PACKAGE_DEV_DEPENDENCIES = liblogger-dev, libdds_base-dev, libbase_data_types-dev
PACKAGE_LICENSE = "Closed License"

# package include files
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/objective.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/objectiveSupport.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/objectivePlugin.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/objective_state_publisher.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/objective_state_subscriber.h

# package installation directory
PACKAGE_INSTALL_DIR += $(CURDIR)/../../package

###############################################################################
# Makefiles included to configure the compiler, etc for the current platform
###############################################################################
include $(MAKEFILEHOME)/Makefile.rti
include $(MAKEFILEHOME)/Makefile.macros
include $(MAKEFILEHOME)/Makefile.basic

