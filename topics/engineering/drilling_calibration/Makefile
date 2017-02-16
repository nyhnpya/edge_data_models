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
TARGET_NAME = drilling_calibration

PACKAGE_DESCRIPTION = "Ensign EDGE Drilling_Calibration Library"
PACKAGE_EXTENDED_DESCRIPTION = "Ensign EDGE Drilling_Calibration Library"
PACKAGE_MAINTAINER = "Mark Carrier \<mark.carrier@ensignenergy.com\>"

###############################################################################
# compilation flags
###############################################################################
# Includes
TARG_INCLUDES += -I $(CURDIR)/include
TARG_INCLUDES += -I $(TOP_DIR)/edge_data_models/topics/base_data_types/include

# Sources
TARG_SOURCES = drilling_calibration.cxx
TARG_SOURCES += drilling_calibrationPlugin.cxx
TARG_SOURCES += drilling_calibrationSupport.cxx

###############################################################################
# Installation section
###############################################################################

# package include files
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/drilling_calibration.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/drilling_calibrationPlugin.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/drilling_calibrationSupport.h

# package configuration files

###############################################################################
# Makefiles included to configure the compiler, etc for the current platform
###############################################################################
include $(TOP_DIR)/Makefiles/Makefile.rti
include $(TOP_DIR)/Makefiles/Makefile.macros
include $(TOP_DIR)/Makefiles/Makefile.basic
