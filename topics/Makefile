include ../../Makefiles/Makefile.platform

# Lists of all the sub-directories that have a Makefile. Libraries and
# executables are placed in separate lists to be able to build the libraries
# before building the executables.
MAKEFILE_LIBRARY_DIRS = base_data_types
MAKEFILE_LIBRARY_DIRS += configuration
#MAKEFILE_LIBRARY_DIRS += downhole/survey
#MAKEFILE_LIBRARY_DIRS += subscribers/survey
#MAKEFILE_LIBRARY_DIRS += pipe_handling/pipe_tally
MAKEFILE_LIBRARY_DIRS += objective_state/auto_ream
MAKEFILE_LIBRARY_DIRS += objective_state/autodriller_configuration
MAKEFILE_LIBRARY_DIRS += objective_state/autotuner_configuration
MAKEFILE_LIBRARY_DIRS += objective_state/circulate
MAKEFILE_LIBRARY_DIRS += objective_state/drill
MAKEFILE_LIBRARY_DIRS += objective_state/drilling_calibration
MAKEFILE_LIBRARY_DIRS += objective_state/drilling_limits
MAKEFILE_LIBRARY_DIRS += objective_state/hoist
MAKEFILE_LIBRARY_DIRS += objective_state/objective
MAKEFILE_LIBRARY_DIRS += objective_state/roptimizer_configuration
MAKEFILE_LIBRARY_DIRS += objective_state/rotate
MAKEFILE_LIBRARY_DIRS += objective_state/rotate_engineering
MAKEFILE_LIBRARY_DIRS += objective_state/simulation
MAKEFILE_LIBRARY_DIRS += objective_state/wellbore
MAKEFILE_LIBRARY_DIRS += system/resources
MAKEFILE_LIBRARY_DIRS += objective_state/circulate_control
MAKEFILE_LIBRARY_DIRS += objective_state/drill_control
MAKEFILE_LIBRARY_DIRS += objective_state/hoist_control
MAKEFILE_LIBRARY_DIRS += objective_state/rotate_control

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
	$(MAKE) $(MFLAGS) $@

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

deb: RULE=deb
deb: $(MAKEFILE_LIBRARY_DIRS)

deb_dev: RULE=deb_dev
deb_dev: $(MAKEFILE_LIBRARY_DIRS)

info: RULE=info
info: $(MAKEFILE_LIBRARY_DIRS)

endif # MAKECMDGOALS

##############################################################################
# SUPPORT RULES
##############################################################################

$(MAKEFILE_EXECUTABLE_DIRS): $(MAKEFILE_LIBRARY_DIRS)
	$(MAKE) -C $@ $(RULE) $(MFLAGS)

$(MAKEFILE_LIBRARY_DIRS):
	$(MAKE) -e -C $@ $(RULE)
