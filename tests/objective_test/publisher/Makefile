###############################################################################
# objective publishser
###############################################################################
include ../../../../Makefiles/Makefile.platform

TARG_SOURCE_DIR = $(CURDIR)
TARG_BUILD_MAJOR = 1
TARG_BUILD_MINOR = 0
TARG_BUILD_VERSION = 2
TARG_BUILD_REVISION = 0
TARGET_TYPE = executable
TARGET_NAME = objective_publisher

###############################################################################
# compilation flags
###############################################################################
# Includes
TARG_INCLUDES += -I /usr/include/jsoncpp
TARG_INCLUDES += -I /usr/local/include/dds_base
TARG_INCLUDES += -I /usr/local/include/logger
TARG_INCLUDES += -isystem/usr/local/include/edge_third_party
TARG_INCLUDES += -I /usr/local/include/base_data_types
TARG_INCLUDES += -I /usr/local/include/objective
TARG_INCLUDES += -I /usr/local/include/configuration
TARG_INCLUDES += -I /usr/local/include/configuration_item
TARG_INCLUDES += -I /usr/local/include/plant_client

# Sources
TARG_SOURCES = objective_publisher.cpp

# Libraries
TARG_LIBS += -L$(NDDSHOME)/lib/$(NDDSARCH)
TARG_LIBS += -L /usr/local/lib 
TARG_LIBS += -lplant_client
TARG_LIBS += -lconfiguration_item -lconfiguration
TARG_LIBS += -lobjective -lbase_data_types -ldds_base
TARG_LIBS += -llogger -llog4cplus -luuid 
TARG_LIBS += -ledge_third_party
TARG_LIBS += -lopcuaclient -lopcuaprotocol -lopcuacore
TARG_LIBS += -ljsoncpp
TARG_LIBS += -lsnap7
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
