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
TARG_BUILD_MINOR = 3
TARG_BUILD_PATCH = 0
TARG_BUILD_REVISION = 0
TARGET_TYPE = library
TARGET_NAME = pipe_tally_publisher

###############################################################################
# compilation flags
###############################################################################
TARG_INCLUDES += -I /usr/local/include/dds-base
TARG_INCLUDES += -I $(CURDIR)/include
TARG_INCLUDES += -I $(MAKEFILEHOME)/edge_data_models/topics/pipe_handling/pipe_tally/include
TARG_INCLUDES += -I $(MAKEFILEHOME)/edge_data_models/topibase_data_types/include

# Sources
TARG_SOURCES = pipe_tally_publisher.cpp

###############################################################################
# Installation section
###############################################################################

# package control file
PACKAGE_DESCRIPTION = "Ensign EDGE Pipe_Tally Library"
PACKAGE_DEV_DESCRIPTION = "Ensign EDGE Pipe_Tally Library"
PACKAGE_MAINTAINER = "Mark Carrier \<mark.carrier@ensignenergy.com\>"
PACKAGE_DEPENDENCIES = liblogger, libdds_base, libbase_data_types, libpipe_tally
PACKAGE_DEV_DEPENDENCIES = liblogger-dev, libdds_base-dev, libbase_data_types-dev, libpipe_tally-dev
PACKAGE_LICENSE = "MIT License"

# package include files
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/pipe_tally_publisher.h

# package installation directory
PACKAGE_INSTALL_DIR += $(CURDIR)/../../../package

###############################################################################
# Makefiles included to configure the compiler, etc for the current platform
###############################################################################
include $(MAKEFILEHOME)/Makefile.rti
include $(MAKEFILEHOME)/Makefile.macros
include $(MAKEFILEHOME)/Makefile.basic
