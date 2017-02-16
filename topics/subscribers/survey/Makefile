###############################################################################
# liblogger Library Makefile
###############################################################################
#
# The following variables must be set for the makefile to work correctly
#
# TARG_BUILD_MAJOR   - Version number major
# TARG_BUILD_MINOR   - Version number minor
# TARG_BUILD_VERSION - Version number patch
# TARGET_TYPE          - library, staticlib, executable, unittest or thirdparty
# TARGET_NAME          - Name of final executable/library
# TARG_DESCRIPTION   - Brief description of the package for debian control file
#
###############################################################################
include ../../../../Makefiles/Makefile.platform

TARG_SOURCE_DIR = $(CURDIR)
TARG_BUILD_MAJOR = 1
TARG_BUILD_MINOR = 0
TARG_BUILD_VERSION = 0
TARGET_TYPE = library
TARGET_NAME = survey_subscriber

###############################################################################
# compilation flags
###############################################################################
# Includes
TARG_INCLUDES += -I /usr/local/include/dds-base
TARG_INCLUDES += -I $(CURDIR)/include
TARG_INCLUDES += -I $(TOP_DIR)/edge_data_models/topics/downhole/survey/include
TARG_INCLUDES += -I $(TOP_DIR)/edge_data_models/topics/base_data_types/include

# Sources
TARG_SOURCES += survey_subscriber.cpp

###############################################################################
# Installation section
###############################################################################

# package control file
PACKAGE_DESCRIPTION = "Ensign EDGE Survey Library"
PACKAGE_EXTENDED_DESCRIPTION = "Ensign EDGE Survey Library"
PACKAGE_MAINTAINER = "Mark Carrier \<mark.carrier@ensignenergy.com\>"

# package include files
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/survey_subscriber.h

# package configuration files

###############################################################################
# Makefiles included to configure the compiler, etc for the current platform
###############################################################################
include $(TOP_DIR)/Makefiles/Makefile.rti
include $(TOP_DIR)/Makefiles/Makefile.macros
include $(TOP_DIR)/Makefiles/Makefile.basic
