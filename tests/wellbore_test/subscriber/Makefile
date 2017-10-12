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
TARG_BUILD_VERSION = 2
TARG_BUILD_REVISION = 0
TARGET_TYPE = executable
TARGET_NAME = wellbore_subscriber

###############################################################################
# compilation flags
###############################################################################
# Includes
TARG_INCLUDES += -isystem /usr/local/include/edge_third_party
TARG_INCLUDES += -I /usr/local/include/dds_base
TARG_INCLUDES += -I /usr/local/include/logger
TARG_INCLUDES += -isystem/usr/local/include/edge_third_party
TARG_INCLUDES += -I /usr/local/include/base_data_types
TARG_INCLUDES += -I /usr/local/include/wellbore
TARG_INCLUDES += -I /usr/local/include/wellbore_state_subscriber

# Sources
TARG_SOURCES = wellbore_subscriber.cpp

# Libraries
TARG_LIBS += -L$(NDDSHOME)/lib/$(NDDSARCH)
TARG_LIBS += -L /usr/local/lib 
TARG_LIBS += -lwellbore_state_subscriber -lwellbore -lbase_data_types -ldds_base
TARG_LIBS += -lncurses
TARG_LIBS += -llogger -llog4cplus -luuid 
TARG_LIBS += $(NDDSHOME)/lib/$(NDDSARCH)/librtidlcppzd.a $(NDDSHOME)/lib/$(NDDSARCH)/librtidlczd.a 
TARG_LIBS += $(NDDSHOME)/lib/$(NDDSARCH)/librticonnextmsgcppzd.a 
TARG_LIBS += $(NDDSHOME)/lib/$(NDDSARCH)/libnddscppzd.a 
TARG_LIBS += $(NDDSHOME)/lib/$(NDDSARCH)/libnddsczd.a 
TARG_LIBS += $(NDDSHOME)/lib/$(NDDSARCH)/libnddscorezd.a
TARG_LIBS += -ldl -lpthread

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
