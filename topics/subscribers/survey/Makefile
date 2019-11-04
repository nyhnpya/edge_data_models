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
TARGET_NAME = survey_subscriber

###############################################################################
# compilation flags
###############################################################################
TARG_INCLUDES += -I /usr/local/include/dds-base
TARG_INCLUDES += -I $(CURDIR)/include
TARG_INCLUDES += -I $(MAKEFILEHOME)/topics/downhole/survey/include
TARG_INCLUDES += -I $(MAKEFILEHOME)/topibase_data_types/include

# Sources
TARG_SOURCES += survey_subscriber.cpp

###############################################################################
# Installation section
###############################################################################

# package control file
PACKAGE_DESCRIPTION = "Ensign EDGE Survey Library"
PACKAGE_DEV_DESCRIPTION = "Ensign EDGE Survey Library"
PACKAGE_MAINTAINER = "Mark Carrier \<mark.carrier@ensignenergy.com\>"
PACKAGE_DEPENDENCIES = liblogger (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION)),
PACKAGE_DEPENDENCIES += libdds_base (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION)),
PACKAGE_DEPENDENCIES += libbase_data_types (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION))
PACKAGE_DEV_DEPENDENCIES = liblogger-dev (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION)),
PACKAGE_DEV_DEPENDENCIES += libdds_base-dev (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION)),
PACKAGE_DEV_DEPENDENCIES += libbase_data_types-dev (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION))
PACKAGE_LICENSE = "Closed License"

# package include files
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/survey_subscriber.h

# package installation directory
PACKAGE_INSTALL_DIR += $(CURDIR)/../../../package

###############################################################################
# Makefiles included to configure the compiler, etc for the current platform
###############################################################################
include $(MAKEFILEHOME)/Makefile.rti
include $(MAKEFILEHOME)/Makefile.macros
include $(MAKEFILEHOME)/Makefile.basic
