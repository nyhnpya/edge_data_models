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
include ../../../../../Makefiles/Makefile.platform

TARG_SOURCE_DIR = $(CURDIR)
TARG_BUILD_MAJOR = 1
TARG_BUILD_MINOR = 0
TARG_BUILD_VERSION = 2
TARGET_TYPE = executable
TARGET_NAME = drilling_calibration_publisher_test

###############################################################################
# compilation flags
###############################################################################
# Includes
TARG_INCLUDES += -isystem /usr/local/include/edge_third_party
TARG_INCLUDES += -I $(TOP_DIR)/edge_data_models/topics/base_data_types/include
TARG_INCLUDES += -I $(TOP_DIR)/edge_data_models/topics/engineering/drilling_calibration/include
TARG_INCLUDES += -I $(TOP_DIR)/edge_data_models/topics/objective_state/drilling_calibration/include

# Sources
TARG_SOURCES = drilling_calibration_publisher_test.cpp

# Libraries
TARG_LIBS += -L /usr/local/lib 
TARG_LIBS += -ldrilling_calibration_objective_state -ldrilling_calibration 
TARG_LIBS += -lbase_data_types -ldds_base -luuid
TARG_LIBS += -llogger -lrtidlcpp -lrtidlc -llog4cplus -lasan

###############################################################################
# Installation section
###############################################################################

# package control file
PACKAGE_DESCRIPTION = "Ensign EDGE Pipe Handling Process"
PACKAGE_EXTENDED_DESCRIPTION = "Ensign EDGE Pipe Handling Process"
PACKAGE_MAINTAINER = "Mark Carrier \<mark.carrier@ensignenergy.com\>"
PACKAGE_DEPENDENCIES =
PACKAGE_DEV_DEPENDENCIES =

###############################################################################
# Makefiles included to configure the compiler, etc for the current platform
###############################################################################
include $(TOP_DIR)/Makefiles/Makefile.rti
include $(TOP_DIR)/Makefiles/Makefile.macros
include $(TOP_DIR)/Makefiles/Makefile.basic
