###############################################################################
# Objective State Library: autotuner_configuration
###############################################################################
include $(MAKEFILEHOME)/Makefile.platform

TARG_SOURCE_DIR = $(CURDIR)
TARG_BUILD_MAJOR = 1
TARG_BUILD_MINOR = 3
TARG_BUILD_PATCH = 0
TARG_BUILD_REVISION = 0
TARGET_TYPE = library
TARGET_NAME = autotuner_configuration

###############################################################################
# compilation flags
###############################################################################
TARG_INCLUDES += -isystem $(EDGE_THIRD_PARTY_INCLUDE)
TARG_INCLUDES += -I $(DDS_INCLUDE)
TARG_INCLUDES += -I $(LOG_INCLUDE)
TARG_INCLUDES += -I $(CURDIR)/../base_data_types/include
TARG_INCLUDES += -I $(CURDIR)/include

# Sources
TARG_SOURCES = autotuner_configuration.cxx
TARG_SOURCES += autotuner_configurationPlugin.cxx
TARG_SOURCES += autotuner_configurationSupport.cxx
TARG_SOURCES += model_state_publisher.cxx
TARG_SOURCES += model_state_subscriber.cxx
TARG_SOURCES += diffp_tuning_request_publisher.cxx
TARG_SOURCES += diffp_tuning_request_subscriber.cxx
TARG_SOURCES += diffp_tuning_state_publisher.cxx
TARG_SOURCES += diffp_tuning_state_subscriber.cxx
TARG_SOURCES += wob_tuning_request_publisher.cxx
TARG_SOURCES += wob_tuning_request_subscriber.cxx
TARG_SOURCES += wob_tuning_state_publisher.cxx
TARG_SOURCES += wob_tuning_state_subscriber.cxx
TARG_SOURCES += torque_tuning_request_publisher.cxx
TARG_SOURCES += torque_tuning_request_subscriber.cxx
TARG_SOURCES += torque_tuning_state_publisher.cxx
TARG_SOURCES += torque_tuning_state_subscriber.cxx

###############################################################################
# Installation section
###############################################################################

# package control file
PACKAGE_DESCRIPTION = "Library package for the Ensign Energy EDGE autotuner_configuration API."
PACKAGE_DEV_DESCRIPTION = "core files for Ensign Energy EDGE autotuner_configuration API development."
PACKAGE_MAINTAINER = "Mark Carrier \(mark.carrier@ensignenergy.com\)"
PACKAGE_DEPENDENCIES = liblogger (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION)),
PACKAGE_DEPENDENCIES += libdds_base (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION)),
PACKAGE_DEPENDENCIES += libbase_data_types (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION))
PACKAGE_DEV_DEPENDENCIES = liblogger-dev (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION)),
PACKAGE_DEV_DEPENDENCIES += libdds_base-dev (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION)),
PACKAGE_DEV_DEPENDENCIES += libbase_data_types-dev (= $(TARG_BUILD_MAJOR).$(TARG_BUILD_MINOR).$(TARG_BUILD_PATCH).$(TARG_BUILD_REVISION))
PACKAGE_LICENSE = "Closed License"

# package include files
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/autotuner_configuration.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/autotuner_configurationSupport.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/autotuner_configurationPlugin.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/model_state_publisher.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/model_state_subscriber.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/diffp_tuning_request_publisher.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/diffp_tuning_request_subscriber.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/diffp_tuning_state_publisher.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/diffp_tuning_state_subscriber.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/wob_tuning_request_publisher.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/wob_tuning_request_subscriber.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/wob_tuning_state_publisher.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/wob_tuning_state_subscriber.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/torque_tuning_request_publisher.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/torque_tuning_request_subscriber.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/torque_tuning_state_publisher.h
PACKAGE_INCLUDE_FILES += $(CURDIR)/include/torque_tuning_state_subscriber.h

# package installation directory
PACKAGE_INSTALL_DIR += $(CURDIR)/../../package

###############################################################################
# Makefiles included to configure the compiler, etc for the current platform
###############################################################################
include $(MAKEFILEHOME)/Makefile.rti
include $(MAKEFILEHOME)/Makefile.macros
include $(MAKEFILEHOME)/Makefile.basic

