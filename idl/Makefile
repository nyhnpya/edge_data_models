###############################################################################
# IDL Genration Makefile
###############################################################################
include ../../Makefiles/Makefile.platform
include $(TOP_DIR)/Makefiles/Makefile.rti

TMPOUTDIR = generated_code

TOPIC_HOME = $(CURDIR)/../topics
IDL_HOME = $(CURDIR)


.NOTPARALLEL:
.ONESHELL:

# set VPATH variable for dependency does not exist in current directory
VPATH := $(shell find $(IDL_HOME) -type d)

# only files with .idl extension be looked for in VPATH
vpath %.idl $(VPATH)

# extract all idl files from IDL_HOME
IDL_TARGETS := $(shell find $(IDL_HOME) -type f -name '*.idl')

# extract the target name from all IDL files in current directory
TARGETS := $(basename $(notdir $(IDL_TARGETS)))

# rule for all <target>.idl found under IDL_HOME
all: $(TARGETS)

.PHONY: all clean env_test $(addsuffix .cpy,$(TARGET))

# rule for each <target> (without .idl extension)
# Note: put the %.idl dependency so that the full path of idl file is looked up
%: env_test %.idl
	@mkdir -p $(TMPOUTDIR)
	@echo
	@echo "making target $@ ..."
	$(NDDSHOME)/bin/$(DDS_GEN) $(DDS_GEN_OPT) -d $(TMPOUTDIR) -inputIdl $(lastword $^) $(addprefix -I , $(VPATH))
	@$(MAKE) -f $(firstword $(MAKEFILE_LIST)) --no-print-directory $@.cpy

# empty rule to satisfy the "%.idl" dependency of rule above.
$(IDL_TARGETS):

# making sure the TOPIC_HOME and IDL_HOME env are defined.
env_test:
	@if test -z "$(TOPIC_HOME)"; then \
	    echo 'TOPIC_HOME is not set. '; \
	    exit 1; \
	fi; 
	@if test -z "$(IDL_HOME)"; then \
	    echo 'IDL_HOME is not set. ';\
	    exit 1; \
	fi;
	@if test ! -d "$(TOPIC_HOME)"; then \
	    echo "\$$TOPIC_HOME=$(TOPIC_HOME) does not exist"; \
	    exit 1; \
	fi;
	@if test ! -d "$(IDL_HOME)"; then \
	    echo "\$$IDL_HOME=$(IDL_HOME) does not exist"; \
	    exit 1; \
	fi;
clean:
	-rm -rf $(TMPOUTDIR)

# PHONY targets to copy the generated files.  
# The copy destinations are specific to each target.

pipehandler_engineering.cpy:
	@echo "Copying generated files ..."
	mkdir -p $(TOPIC_HOME)/engineering/pipehandler_engineering
	mkdir -p $(TOPIC_HOME)/engineering/pipehandler_engineering/include
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/engineering/pipehandler_engineering/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/engineering/pipehandler_engineering
	-@rm -rf $(TMPOUTDIR)

circulate_engineering.cpy:
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/objective_state/circulate_engineering
	mkdir -p $(TOPIC_HOME)/objective_state/circulate_engineering/include
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/circulate_engineering/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/circulate_engineering
	-@rm -rf $(TMPOUTDIR)

base_data_types.cpy:
	@echo "Copying generated files ..."
	mkdir -p $(TOPIC_HOME)/base_data_types/
	mkdir -p $(TOPIC_HOME)/base_data_types/include
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/base_data_types/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/base_data_types/
	-@rm -rf $(TMPOUTDIR)

configuration.cpy:
	@echo "Copying generated files ..."
	mkdir -p $(TOPIC_HOME)/configuration/
	mkdir -p $(TOPIC_HOME)/configuration/include
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/configuration/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/configuration/
	-@rm -rf $(TMPOUTDIR)

auto_ream.cpy: 
	@echo "Copying generated files..."
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/auto_ream/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/auto_ream
	-@rm -rf $(TMPOUTDIR)

circulate.cpy:
	@echo "Generating Pubs & Subs for target $@ $(TMPOUTDIR) ..."
	/usr/bin/python ./pub_sub_gen.py process/$@ $(TMPOUTDIR) 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/objective_state/circulate
	mkdir -p $(TOPIC_HOME)/objective_state/circulate/include
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/circulate/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/circulate
	cp $(TMPOUTDIR)/*_publisher.cxx $(TOPIC_HOME)/objective_state/circulate
	cp $(TMPOUTDIR)/*_subscriber.cxx $(TOPIC_HOME)/objective_state/circulate
	cp $(TMPOUTDIR)/*_publisher.h $(TOPIC_HOME)/objective_state/circulate/include
	cp $(TMPOUTDIR)/*_subscriber.h $(TOPIC_HOME)/objective_state/circulate/include
	cp $(TMPOUTDIR)/Makefile $(TOPIC_HOME)/objective_state/circulate
	-@rm -rf $(TMPOUTDIR)

drill.cpy: 
	@echo "Generating Pubs & Subs for target $@ $(TMPOUTDIR) ..."
	/usr/bin/python ./pub_sub_gen.py process/$@ $(TMPOUTDIR) 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/objective_state/drill
	mkdir -p $(TOPIC_HOME)/objective_state/drill/include
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/drill/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/drill
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/drill/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/drill
	cp $(TMPOUTDIR)/*_publisher.cxx $(TOPIC_HOME)/objective_state/drill
	cp $(TMPOUTDIR)/*_subscriber.cxx $(TOPIC_HOME)/objective_state/drill
	cp $(TMPOUTDIR)/*_publisher.h $(TOPIC_HOME)/objective_state/drill/include
	cp $(TMPOUTDIR)/*_subscriber.h $(TOPIC_HOME)/objective_state/drill/include
	cp $(TMPOUTDIR)/Makefile $(TOPIC_HOME)/objective_state/drill
	-@rm -rf $(TMPOUTDIR)

hoist.cpy: 
	@echo "Generating Pubs & Subs for target $@ $(TMPOUTDIR) ..."
	/usr/bin/python ./pub_sub_gen.py process/$@ $(TMPOUTDIR) 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/objective_state/hoist
	mkdir -p $(TOPIC_HOME)/objective_state/hoist/include
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/hoist/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/hoist
	cp $(TMPOUTDIR)/*_publisher.cxx $(TOPIC_HOME)/objective_state/hoist
	cp $(TMPOUTDIR)/*_subscriber.cxx $(TOPIC_HOME)/objective_state/hoist
	cp $(TMPOUTDIR)/*_publisher.h $(TOPIC_HOME)/objective_state/hoist/include
	cp $(TMPOUTDIR)/*_subscriber.h $(TOPIC_HOME)/objective_state/hoist/include
	cp $(TMPOUTDIR)/Makefile $(TOPIC_HOME)/objective_state/hoist
	-@rm -rf $(TMPOUTDIR)

#rotate.cpy:
#	@echo "Generating Pubs & Subs for target $@ $(TMPOUTDIR) ..."
#	/usr/bin/python ./pub_sub_gen.py process/$@ $(TMPOUTDIR) 
#	@echo "Copying generated files..."
#	mkdir -p $(TOPIC_HOME)/objective_state/rotate
#	mkdir -p $(TOPIC_HOME)/objective_state/rotate/include
#	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/rotate
#	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/rotate/include
#	cp $(TMPOUTDIR)/*_publisher.cxx $(TOPIC_HOME)/objective_state/rotate
#	cp $(TMPOUTDIR)/*_subscriber.cxx $(TOPIC_HOME)/objective_state/rotate
#	cp $(TMPOUTDIR)/*_publisher.h $(TOPIC_HOME)/objective_state/rotate/include
#	cp $(TMPOUTDIR)/*_subscriber.h $(TOPIC_HOME)/objective_state/rotate/include
#	cp $(TMPOUTDIR)/Makefile $(TOPIC_HOME)/objective_state/rotate
#	-@rm -rf $(TMPOUTDIR)

rotate.cpy:
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/objective_state/rotate
	mkdir -p $(TOPIC_HOME)/objective_state/rotate/include
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/rotate/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/rotate
	-@rm -rf $(TMPOUTDIR)

wellbore.cpy:
	@echo "Generating Pubs & Subs for target $@ $(TMPOUTDIR) ..."
	/usr/bin/python ./pub_sub_gen.py process/$@ $(TMPOUTDIR) 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/objective_state/wellbore
	mkdir -p $(TOPIC_HOME)/objective_state/wellbore/include
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/wellbore/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/wellbore/
	cp $(TMPOUTDIR)/*_publisher.cxx $(TOPIC_HOME)/objective_state/wellbore
	cp $(TMPOUTDIR)/*_subscriber.cxx $(TOPIC_HOME)/objective_state/wellbore
	cp $(TMPOUTDIR)/*_publisher.h $(TOPIC_HOME)/objective_state/wellbore/include
	cp $(TMPOUTDIR)/*_subscriber.h $(TOPIC_HOME)/objective_state/wellbore/include
	cp $(TMPOUTDIR)/Makefile $(TOPIC_HOME)/objective_state/wellbore
	-@rm -rf $(TMPOUTDIR)

objective.cpy:
	@echo "Copying generated files..."
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/objective/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/objective/
	-@rm -rf $(TMPOUTDIR)

drilling_limits.cpy:
	@echo "Generating Pubs & Subs for target $@ $(TMPOUTDIR) ..."
	/usr/bin/python ./pub_sub_gen.py objective/$@ $(TMPOUTDIR) 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/objective_state/drilling_limits
	mkdir -p $(TOPIC_HOME)/objective_state/drilling_limits/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/drilling_limits
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/drilling_limits/include
	cp $(TMPOUTDIR)/*_publisher.cxx $(TOPIC_HOME)/objective_state/drilling_limits
	cp $(TMPOUTDIR)/*_subscriber.cxx $(TOPIC_HOME)/objective_state/drilling_limits
	cp $(TMPOUTDIR)/*_publisher.h $(TOPIC_HOME)/objective_state/drilling_limits/include
	cp $(TMPOUTDIR)/*_subscriber.h $(TOPIC_HOME)/objective_state/drilling_limits/include
	cp $(TMPOUTDIR)/Makefile $(TOPIC_HOME)/objective_state/drilling_limits
	-@rm -rf $(TMPOUTDIR)

drilling_calibration.cpy: 
	@echo "Copying generated files..."
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/drilling_calibration/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/drilling_calibration
	-@rm -rf $(TMPOUTDIR)

autodriller_configuration.cpy: 
	@echo "Copying generated files..."
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/autodriller_configuration/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/autodriller_configuration
	-@rm -rf $(TMPOUTDIR)

autotuner_configuration.cpy: 
	@echo "Copying generated files..."
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/autotuner_configuration/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/autotuner_configuration
	-@rm -rf $(TMPOUTDIR)

roptimizer_configuration.cpy: 
	@echo "Generating Pubs & Subs for target $@ $(TMPOUTDIR) ..."
	/usr/bin/python ./pub_sub_gen.py hmi/$@ $(TMPOUTDIR) 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/objective_state/roptimizer_configuration
	mkdir -p $(TOPIC_HOME)/objective_state/roptimizer_configuration/include
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/roptimizer_configuration/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/roptimizer_configuration
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/roptimizer_configuration
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/roptimizer_configuration/include
	cp $(TMPOUTDIR)/*_publisher.cxx $(TOPIC_HOME)/objective_state/roptimizer_configuration
	cp $(TMPOUTDIR)/*_subscriber.cxx $(TOPIC_HOME)/objective_state/roptimizer_configuration
	cp $(TMPOUTDIR)/*_publisher.h $(TOPIC_HOME)/objective_state/roptimizer_configuration/include
	cp $(TMPOUTDIR)/*_subscriber.h $(TOPIC_HOME)/objective_state/roptimizer_configuration/include
	cp $(TMPOUTDIR)/Makefile $(TOPIC_HOME)/objective_state/roptimizer_configuration
	-@rm -rf $(TMPOUTDIR)

resources.cpy:
	@echo "Copying generated files ..."
	mkdir -p $(TOPIC_HOME)/system/resources
	mkdir -p $(TOPIC_HOME)/system_resources/include
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/system/resources/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/system/resources
	-@rm -rf $(TMPOUTDIR)

drill_simulation.cpy: 
	@echo "Copying generated files..."
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/simulation/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/simulation
	-@rm -rf $(TMPOUTDIR)

slips.cpy: 
	@echo "Copying generated files..."
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/slips/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/slips
	-@rm -rf $(TMPOUTDIR)

ibop.cpy: 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/objective_state/ibop/include
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/ibop/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/ibop
	-@rm -rf $(TMPOUTDIR)


ir_engineering.cpy: 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/objective_state/ir_engineering/include
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/ir_engineering/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/ir_engineering
	-@rm -rf $(TMPOUTDIR)

rotate_engineering.cpy:
	@echo "Generating Pubs & Subs for target $@ $(TMPOUTDIR) ..."
	/usr/bin/python ./pub_sub_gen.py engineering/$@ $(TMPOUTDIR) 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/objective_state/rotate_engineering
	mkdir -p $(TOPIC_HOME)/objective_state/rotate_engineering/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/rotate_engineering
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/rotate_engineering/include
	cp $(TMPOUTDIR)/*_publisher.cxx $(TOPIC_HOME)/objective_state/rotate_engineering
	cp $(TMPOUTDIR)/*_subscriber.cxx $(TOPIC_HOME)/objective_state/rotate_engineering
	cp $(TMPOUTDIR)/*_publisher.h $(TOPIC_HOME)/objective_state/rotate_engineering/include
	cp $(TMPOUTDIR)/*_subscriber.h $(TOPIC_HOME)/objective_state/rotate_engineering/include
	#cp $(TMPOUTDIR)/io_*.h $(TOPIC_HOME)/objective_state/rotate_engineering/include
	#cp $(TMPOUTDIR)/io_*.cxx $(TOPIC_HOME)/objective_state/rotate_engineering
	#cp $(TMPOUTDIR)/*_publish_io.h $(TOPIC_HOME)/objective_state/rotate_engineering/include
	##cp $(TMPOUTDIR)/*_publish_io.cxx $(TOPIC_HOME)/objective_state/rotate_engineering
	cp $(TMPOUTDIR)/Makefile $(TOPIC_HOME)/objective_state/rotate_engineering
	-@rm -rf $(TMPOUTDIR)

plc_circulate.cpy:
	@echo "Generating Pubs & Subs for target $@ $(TMPOUTDIR) ..."
	/usr/bin/python ./pub_sub_gen.py control/$@ $(TMPOUTDIR) 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/objective_state/circulate_control
	mkdir -p $(TOPIC_HOME)/objective_state/circulate_control/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/circulate_control
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/circulate_control/include
	cp $(TMPOUTDIR)/*_publisher.cxx $(TOPIC_HOME)/objective_state/circulate_control
	cp $(TMPOUTDIR)/*_subscriber.cxx $(TOPIC_HOME)/objective_state/circulate_control
	cp $(TMPOUTDIR)/*_publisher.h $(TOPIC_HOME)/objective_state/circulate_control/include
	cp $(TMPOUTDIR)/*_subscriber.h $(TOPIC_HOME)/objective_state/circulate_control/include
	cp $(TMPOUTDIR)/Makefile $(TOPIC_HOME)/objective_state/circulate_control
	-@rm -rf $(TMPOUTDIR)

plc_drill.cpy: 
	@echo "Generating Pubs & Subs for target $@ $(TMPOUTDIR) ..."
	/usr/bin/python ./pub_sub_gen.py control/$@ $(TMPOUTDIR) 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/objective_state/drill_control
	mkdir -p $(TOPIC_HOME)/objective_state/drill_control/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/drill_control
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/drill_control/include
	cp $(TMPOUTDIR)/*_publisher.cxx $(TOPIC_HOME)/objective_state/drill_control
	cp $(TMPOUTDIR)/*_subscriber.cxx $(TOPIC_HOME)/objective_state/drill_control
	cp $(TMPOUTDIR)/*_publisher.h $(TOPIC_HOME)/objective_state/drill_control/include
	cp $(TMPOUTDIR)/*_subscriber.h $(TOPIC_HOME)/objective_state/drill_control/include
	cp $(TMPOUTDIR)/Makefile $(TOPIC_HOME)/objective_state/drill_control
	-@rm -rf $(TMPOUTDIR)

plc_hoist.cpy: 
	@echo "Generating Pubs & Subs for target $@ $(TMPOUTDIR) ..."
	/usr/bin/python ./pub_sub_gen.py control/$@ $(TMPOUTDIR) 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/objective_state/hoist_control
	mkdir -p $(TOPIC_HOME)/objective_state/hoist_control/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/hoist_control
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/hoist_control/include
	cp $(TMPOUTDIR)/*_publisher.cxx $(TOPIC_HOME)/objective_state/hoist_control
	cp $(TMPOUTDIR)/*_subscriber.cxx $(TOPIC_HOME)/objective_state/hoist_control
	cp $(TMPOUTDIR)/*_publisher.h $(TOPIC_HOME)/objective_state/hoist_control/include
	cp $(TMPOUTDIR)/*_subscriber.h $(TOPIC_HOME)/objective_state/hoist_control/include
	cp $(TMPOUTDIR)/Makefile $(TOPIC_HOME)/objective_state/hoist_control
	-@rm -rf $(TMPOUTDIR)

plc_rotate.cpy:
	@echo "Generating Pubs & Subs for target $@ $(TMPOUTDIR) ..."
	/usr/bin/python ./pub_sub_gen.py control/$@ $(TMPOUTDIR) 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/objective_state/rotate_control
	mkdir -p $(TOPIC_HOME)/objective_state/rotate_control/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/rotate_control
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/rotate_control/include
	cp $(TMPOUTDIR)/*_publisher.cxx $(TOPIC_HOME)/objective_state/rotate_control
	cp $(TMPOUTDIR)/*_subscriber.cxx $(TOPIC_HOME)/objective_state/rotate_control
	cp $(TMPOUTDIR)/*_publisher.h $(TOPIC_HOME)/objective_state/rotate_control/include
	cp $(TMPOUTDIR)/*_subscriber.h $(TOPIC_HOME)/objective_state/rotate_control/include
	cp $(TMPOUTDIR)/Makefile $(TOPIC_HOME)/objective_state/rotate_control
	-@rm -rf $(TMPOUTDIR)

torque.cpy:
	@echo "Copying generated files..."
#	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/engineering/torque/include
#	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/engineering/torque
	-@rm -rf $(TMPOUTDIR)

survey.cpy:
	@echo "Copying generated files..."
#	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/survey/include
#	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/survey/
	-@rm -rf $(TMPOUTDIR)

pipe_tally.cpy:
	@echo "Copying generated files..."
#	mkdir -p $(TOPIC_HOME)/pipe_handling/pipe_tally
#	mkdir -p $(TOPIC_HOME)/pipe_handling/pipe_tally/include
#	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/pipe_handling/pipe_tally/include
#	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/pipe_handling/pipe_tally/
	-@rm -rf $(TMPOUTDIR)

