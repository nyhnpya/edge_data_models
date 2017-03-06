##############################################################################
# Mission Control Makefile
###############################################################################

include ../../Makefiles/Makefile.platform

# Lists of all the sub-directories that have a Makefile. Libraries and
# executables are placed in separate lists to be able to build the libraries
# before building the executables.
MAKEFILE_LIBRARY_DIRS = base_data_types
MAKEFILE_LIBRARY_DIRS += configuration
MAKEFILE_LIBRARY_DIRS += process/drilling
MAKEFILE_LIBRARY_DIRS += process/circulate
MAKEFILE_LIBRARY_DIRS += process/hoist
MAKEFILE_LIBRARY_DIRS += process/rotate
MAKEFILE_LIBRARY_DIRS += engineering/autodriller_configuration
MAKEFILE_LIBRARY_DIRS += engineering/drilling_calibration
#MAKEFILE_LIBRARY_DIRS += engineering/rotate_engineering
#MAKEFILE_LIBRARY_DIRS += engineering/torque
#MAKEFILE_LIBRARY_DIRS += downhole/survey
MAKEFILE_LIBRARY_DIRS += downhole/wellbore
#MAKEFILE_LIBRARY_DIRS += pipe_handling/pipe_tally
#MAKEFILE_LIBRARY_DIRS += subscribers/survey
MAKEFILE_LIBRARY_DIRS += subscribers/objective
MAKEFILE_LIBRARY_DIRS += subscribers/wellbore
MAKEFILE_LIBRARY_DIRS += publishers/wellbore
MAKEFILE_LIBRARY_DIRS += publishers/objective
MAKEFILE_LIBRARY_DIRS += objective_state/circulate
MAKEFILE_LIBRARY_DIRS += objective_state/drill
MAKEFILE_LIBRARY_DIRS += objective_state/autodrill_configuration
MAKEFILE_LIBRARY_DIRS += objective_state/drilling_calibration
MAKEFILE_LIBRARY_DIRS += objective_state/hoist
MAKEFILE_LIBRARY_DIRS += objective_state/rotate
MAKEFILE_LIBRARY_DIRS += objective/objective
MAKEFILE_LIBRARY_DIRS += tests/wellbore_test/subscriber
MAKEFILE_LIBRARY_DIRS += tests/wellbore_test/publisher

#MAKEFILE_EXECUTABLE_DIRS := db_connection_manager/dbcm_test

ifdef UNITTEST
#MAKEFILE_LIBRARY_DIRS += mock_objects/clsocket
#MAKEFILE_LIBRARY_DIRS += mock_objects/comm/ComManagement
#MAKEFILE_LIBRARY_DIRS += mock_objects/mission_control/mccomm/commbuffer
#MAKEFILE_LIBRARY_DIRS += mock_objects/mission_control/mccomm/mccomm
#MAKEFILE_LIBRARY_DIRS += mock_objects/mission_control/npc
#MAKEFILE_LIBRARY_DIRS += unit_tests/guidance_layer

#MAKEFILE_EXECUTABLE_DIRS += mock_objects/mission_control/novosconfig
#MAKEFILE_EXECUTABLE_DIRS += unit_tests/configuration
#MAKEFILE_EXECUTABLE_DIRS += unit_tests/datetime
MAKEFILE_EXECUTABLE_DIRS += unit_tests/include
#MAKEFILE_EXECUTABLE_DIRS += unit_tests/interfaces
#MAKEFILE_EXECUTABLE_DIRS += unit_tests/mccomm/mccomm
#MAKEFILE_EXECUTABLE_DIRS += unit_tests/mccomm/other
#MAKEFILE_EXECUTABLE_DIRS += unit_tests/novosconfig
#MAKEFILE_EXECUTABLE_DIRS += unit_tests/npc/cmds
#MAKEFILE_EXECUTABLE_DIRS += unit_tests/npc/core
#MAKEFILE_EXECUTABLE_DIRS += unit_tests/npc/daemon
MAKEFILE_EXECUTABLE_DIRS += unit_tests/runtime
#MAKEFILE_EXECUTABLE_DIRS += unit_tests/test_main
MAKEFILE_EXECUTABLE_DIRS += unit_tests/unit_test_writer
endif

.PHONY: all clean dep install install_clean install_dev install_dev_clean \
filelist cfilelist info $(MAKEFILE_LIBRARY_DIRS) $(MAKEFILE_EXECUTABLE_DIRS)

##############################################################################
# AVAILABLE RULES
##############################################################################

# If make is given more than one make rule, we split the list of given rules
# into non-parallel executions. This is to avoid overlapping when building in
# parallel. If make is not given any rules, we default to the "all" rule.
ifneq ($(words $(MAKECMDGOALS)),1)

.NOTPARALLEL:

# Sort removes duplicats. The "all" target is required in the list,
# in case user invokes make with no targets.
$(sort all $(MAKECMDGOALS)):
	$(MAKE) $@

else

all: RULE=all
all: $(MAKEFILE_LIBRARY_DIRS)

clean: RULE=clean
clean: $(MAKEFILE_LIBRARY_DIRS)
	rm -rf $(TOP_DIR)/bin${SUFFIX}
	rm -rf $(TOP_DIR)/lib${SUFFIX}

dep: RULE=dep
dep: $(MAKEFILE_EXECUTABLE_DIRS)

install: RULE=install
install: $(MAKEFILE_LIBRARY_DIRS)

install_clean: RULE=install_clean
install_clean: $(MAKEFILE_EXECUTABLE_DIRS)

install_dev: RULE=install_dev
install_dev: $(MAKEFILE_LIBRARY_DIRS)

install_dev_clean: RULE=install_dev_clean
install_dev_clean: $(MAKEFILE_LIBRARY_DIRS)

filelist: RULE=filelist
filelist: $(MAKEFILE_EXECUTABLE_DIRS)

cfilelist: RULE=cfilelist
cfilelist: $(MAKEFILE_EXECUTABLE_DIRS)

info: RULE=info
info: $(MAKEFILE_LIBRARY_DIRS)

endif # MAKECMDGOALS

##############################################################################
# SUPPORT RULES
##############################################################################

$(MAKEFILE_EXECUTABLE_DIRS): $(MAKEFILE_LIBRARY_DIRS)
	$(MAKE) -C $@ $(RULE)

$(MAKEFILE_LIBRARY_DIRS):
	$(MAKE) -C $@ $(RULE)
