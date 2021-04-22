###############################################################################
# library libbase data types
###############################################################################
include $(MAKEFILEHOME)/Makefile.platform
include $(MAKEFILEHOME)/Makefile.rti

TARG_SOURCE_DIR = $(CURDIR)
TARG_BUILD_MAJOR = 1
TARG_BUILD_MINOR = 3
TARG_BUILD_PATCH = 0
TARG_BUILD_REVISION = 0
TARGET_TYPE = library
TARGET_NAME = base_data_types

###############################################################################
# compilation flags
###############################################################################
TARG_INCLUDES += -I $(CURDIR)/include

# Sources
TARG_SOURCES = base_data_types.cxx
TARG_SOURCES += base_data_typesPlugin.cxx
TARG_SOURCES += base_data_typesSupport.cxx

###############################################################################
# Installation section
###############################################################################

# package control file
PACKAGE_DESCRIPTION = "Ensign Energy EDGE Base_Data_Types Library"
PACKAGE_DEV_DESCRIPTION = "Ensign Energy EDGE Base_Data_Types Library"
PACKAGE_MAINTAINER = "Mark Carrier \<mark.carrier@ensignenergy.com\>"
PACKAGE_DEPENDENCIES = liblogger (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION)),
PACKAGE_DEPENDENCIES += libdds_base (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION))
PACKAGE_DEV_DEPENDENCIES = liblogger-dev (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION)),
PACKAGE_DEV_DEPENDENCIES += libdds_base-dev (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION))
PACKAGE_LICENSE = "Closed License"

# package include files
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/base_data_types.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/base_data_typesPlugin.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/base_data_typesSupport.h


# package installation directory
PACKAGE_INSTALL_DIR += $(CURDIR)/../../package

###############################################################################
# Makefiles included to configure the compiler, etc for the current platform
###############################################################################
include $(MAKEFILEHOME)/Makefile.macros
include $(MAKEFILEHOME)/Makefile.basic
