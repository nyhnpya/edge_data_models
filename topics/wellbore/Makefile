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
TARG_BUILD_PATCH = 0
TARG_BUILD_REVISION = 0
TARGET_TYPE = library
TARGET_NAME = wellbore

###############################################################################
# compilation flags
###############################################################################
TARG_INCLUDES += -isystem $(EDGE_THIRD_PARTY_INCLUDE)
TARG_INCLUDES += -I $(DDS_INCLUDE)
TARG_INCLUDES += -I $(LOG_INCLUDE)
TARG_INCLUDES += -I $(CURDIR)/../base_data_types/include
TARG_INCLUDES += -I $(CURDIR)/include

# Sources
TARG_SOURCES = wellbore.cxx
TARG_SOURCES += wellborePlugin.cxx
TARG_SOURCES += wellboreSupport.cxx
TARG_SOURCES += wellbore_state_publisher.cxx
TARG_SOURCES += wellbore_state_subscriber.cxx

###############################################################################
# Installation section
###############################################################################

# package control file
PACKAGE_DESCRIPTION = "Library package for the Ensign Energy EDGE wellbore API."
PACKAGE_DEV_DESCRIPTION = "core files for Ensign Energy EDGE wellbore API development."
PACKAGE_MAINTAINER = "Mark Carrier \(mark.carrier@ensignenergy.com\)"
PACKAGE_DEPENDENCIES = liblogger (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION)),
PACKAGE_DEPENDENCIES += libdds_base (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION)),
PACKAGE_DEPENDENCIES += libbase_data_types (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION))
PACKAGE_DEV_DEPENDENCIES = liblogger-dev (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION)),
PACKAGE_DEV_DEPENDENCIES += libdds_base-dev (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION)),
PACKAGE_DEV_DEPENDENCIES += libbase_data_types-dev (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION))
PACKAGE_LICENSE = "Closed License"

# package include files
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/wellbore.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/wellboreSupport.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/wellborePlugin.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/wellbore_state_publisher.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/wellbore_state_subscriber.h

# package installation directory
PACKAGE_INSTALL_DIR += $(CURDIR)/../../package

###############################################################################
# Makefiles included to configure the compiler, etc for the current platform
###############################################################################
include $(MAKEFILEHOME)/Makefile.rti
include $(MAKEFILEHOME)/Makefile.macros
include $(MAKEFILEHOME)/Makefile.basic

