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
TARG_BUILD_REVISION = 0
TARGET_TYPE = executable
TARGET_NAME = drilling_calibration_subscriber_test

###############################################################################
# compilation flags
###############################################################################
# Includes
TARG_INCLUDES += -I $(CURDIR)/include
TARG_INCLUDES += -I $(TOP_DIR)/configuration/include
TARG_INCLUDES += -I /usr/include/jsoncpp
TARG_INCLUDES += -isystem/usr/local/include/edge_third_party
TARG_INCLUDES += -I /usr/local/include/base_data_types
TARG_INCLUDES += -I /usr/local/include/configuration
TARG_INCLUDES += -I /usr/local/include/configuration_item
TARG_INCLUDES += -I /usr/local/include/drilling
TARG_INCLUDES += -I /usr/local/include/drilling_objective_state
TARG_INCLUDES += -I /usr/local/include/drilling_calibration
TARG_INCLUDES += -I /usr/local/include/drilling_calibration_objective_state
TARG_INCLUDES += -I /usr/local/include/logger
TARG_INCLUDES += -I /usr/local/include/plant_client
TARG_INCLUDES += -I $(TOP_DIR)/edge_data_models/topics/base_data_types/include
TARG_INCLUDES += -I $(TOP_DIR)/edge_data_models/topics/engineering/drilling_calibration/include
TARG_INCLUDES += -I $(TOP_DIR)/edge_data_models/topics/objective_state/drilling_calibration/include

# Sources
TARG_SOURCES = drilling_calibration_subscriber_test.cpp
TARG_SOURCES += AutoTune.cpp
TARG_SOURCES += app_state_machine.cpp

# Libraries
TARG_LIBS += -L /usr/local/lib 
TARG_LIBS += -llogger 
TARG_LIBS += -lconfiguration_item -lconfiguration
TARG_LIBS += -ldds_base
TARG_LIBS += -luuid
TARG_LIBS += -lrtidlcpp -llog4cplus
TARG_LIBS += -lplant_client
TARG_LIBS += -ldrilling_objective_state -ldrilling
TARG_LIBS += -ldrilling_calibration_objective_state -ldrilling_calibration 
TARG_LIBS += -lbase_data_types
TARG_LIBS += -llogger -lrtidlcpp -lrtidlc -llog4cplus -lncurses
TARG_LIBS += -lopcuaclient -lopcuaprotocol -lopcuacore

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
