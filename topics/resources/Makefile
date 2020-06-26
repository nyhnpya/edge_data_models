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
TARG_BUILD_MINOR = 2
TARG_BUILD_PATCH = 0
TARG_BUILD_REVISION = 0
TARGET_TYPE = library
TARGET_NAME = resources

###############################################################################
# compilation flags
###############################################################################
TARG_INCLUDES += -I $(DDS_INCLUDE)
TARG_INCLUDES += -I $(LOG_INCLUDE)
TARG_INCLUDES += -isystem $(EDGE_THIRD_PARTY_INCLUDE)
TARG_INCLUDES += -I $(CURDIR)/include
TARG_INCLUDES += -I $(CURDIR)/../base_data_types/include

# Sources
TARG_SOURCES = resources.cxx
TARG_SOURCES += resourcesPlugin.cxx
TARG_SOURCES += resourcesSupport.cxx
TARG_SOURCES += resources_publisher.cpp
TARG_SOURCES += resources_subscriber.cpp
TARG_SOURCES += process_info.cpp
TARG_SOURCES += resources_monitor.cpp

###############################################################################
# Installation section
###############################################################################

# package control file
PACKAGE_DESCRIPTION = "Ensign Energy EDGE Process_Info Library"
PACKAGE_DEV_DESCRIPTION = "Ensign Energy EDGE Process_Info Library"
PACKAGE_MAINTAINER = "Mark Carrier \<mark.carrier@ensignenergy.com\>"
PACKAGE_DEPENDENCIES = liblogger (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION)),
PACKAGE_DEPENDENCIES += libdds_base (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION)),
PACKAGE_DEPENDENCIES += libbase_data_types (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION))
PACKAGE_DEV_DEPENDENCIES = liblogger-dev (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION)),
PACKAGE_DEV_DEPENDENCIES += libdds_base-dev (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION)),
PACKAGE_DEV_DEPENDENCIES += libbase_data_types-dev (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION))
PACKAGE_LICENSE = "Closed License"

# package include files
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/resources.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/resourcesPlugin.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/resourcesSupport.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/resources_publisher.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/resources_subscriber.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/resources_monitor.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/process_info.h

# package installation directory
PACKAGE_INSTALL_DIR += $(CURDIR)/../../package

###############################################################################
# Makefiles included to configure the compiler, etc for the current platform
###############################################################################
include $(MAKEFILEHOME)/Makefile.rti
include $(MAKEFILEHOME)/Makefile.macros
include $(MAKEFILEHOME)/Makefile.basic
