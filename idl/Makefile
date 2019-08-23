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
#	mkdir -p $(TOPIC_HOME)/engineering/pipehandler_engineering
#	mkdir -p $(TOPIC_HOME)/engineering/pipehandler_engineering/include
#	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/engineering/pipehandler_engineering/include
#	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/engineering/pipehandler_engineering
	-@rm -rf $(TMPOUTDIR)

circulate_engineering.cpy:
	@echo "Copying generated files..."
#	mkdir -p $(TOPIC_HOME)/circulate_engineering
#	mkdir -p $(TOPIC_HOME)/circulate_engineering/include
#	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/circulate_engineering/include
#	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/circulate_engineering
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
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/auto_ream/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/auto_ream
	-@rm -rf $(TMPOUTDIR)

circulate.cpy:
	@echo "Generating Pubs & Subs for target $@ $(TMPOUTDIR) ..."
	/usr/bin/python ./pub_sub_gen.py process/$@ $(TMPOUTDIR) 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/circulate
	mkdir -p $(TOPIC_HOME)/circulate/include
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/circulate/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/circulate
	cp $(TMPOUTDIR)/*_publisher.cxx $(TOPIC_HOME)/circulate
	cp $(TMPOUTDIR)/*_subscriber.cxx $(TOPIC_HOME)/circulate
	cp $(TMPOUTDIR)/*_publisher.h $(TOPIC_HOME)/circulate/include
	cp $(TMPOUTDIR)/*_subscriber.h $(TOPIC_HOME)/circulate/include
	cp $(TMPOUTDIR)/Makefile $(TOPIC_HOME)/circulate
	-@rm -rf $(TMPOUTDIR)

drill.cpy: 
	@echo "Generating Pubs & Subs for target $@ $(TMPOUTDIR) ..."
	/usr/bin/python ./pub_sub_gen.py process/$@ $(TMPOUTDIR) 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/drill
	mkdir -p $(TOPIC_HOME)/drill/include
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/drill/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/drill
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/drill/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/drill
	cp $(TMPOUTDIR)/*_publisher.cxx $(TOPIC_HOME)/drill
	cp $(TMPOUTDIR)/*_subscriber.cxx $(TOPIC_HOME)/drill
	cp $(TMPOUTDIR)/*_publisher.h $(TOPIC_HOME)/drill/include
	cp $(TMPOUTDIR)/*_subscriber.h $(TOPIC_HOME)/drill/include
	cp $(TMPOUTDIR)/Makefile $(TOPIC_HOME)/drill
	-@rm -rf $(TMPOUTDIR)

hoist.cpy: 
	@echo "Generating Pubs & Subs for target $@ $(TMPOUTDIR) ..."
	/usr/bin/python ./pub_sub_gen.py process/$@ $(TMPOUTDIR) 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/hoist
	mkdir -p $(TOPIC_HOME)/hoist/include
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/hoist/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/hoist
	cp $(TMPOUTDIR)/*_publisher.cxx $(TOPIC_HOME)/hoist
	cp $(TMPOUTDIR)/*_subscriber.cxx $(TOPIC_HOME)/hoist
	cp $(TMPOUTDIR)/*_publisher.h $(TOPIC_HOME)/hoist/include
	cp $(TMPOUTDIR)/*_subscriber.h $(TOPIC_HOME)/hoist/include
	cp $(TMPOUTDIR)/Makefile $(TOPIC_HOME)/hoist
	-@rm -rf $(TMPOUTDIR)

rotate.cpy:
	@echo "Generating Pubs & Subs for target $@ $(TMPOUTDIR) ..."
	/usr/bin/python ./pub_sub_gen.py process/$@ $(TMPOUTDIR) 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/rotate
	mkdir -p $(TOPIC_HOME)/rotate/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/rotate
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/rotate/include
	cp $(TMPOUTDIR)/*_publisher.cxx $(TOPIC_HOME)/rotate
	cp $(TMPOUTDIR)/*_subscriber.cxx $(TOPIC_HOME)/rotate
	cp $(TMPOUTDIR)/*_publisher.h $(TOPIC_HOME)/rotate/include
	cp $(TMPOUTDIR)/*_subscriber.h $(TOPIC_HOME)/rotate/include
	cp $(TMPOUTDIR)/Makefile $(TOPIC_HOME)/rotate
	-@rm -rf $(TMPOUTDIR)

wellbore.cpy:
	@echo "Generating Pubs & Subs for target $@ $(TMPOUTDIR) ..."
	/usr/bin/python ./pub_sub_gen.py process/$@ $(TMPOUTDIR) 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/wellbore
	mkdir -p $(TOPIC_HOME)/wellbore/include
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/wellbore/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/wellbore/
	cp $(TMPOUTDIR)/*_publisher.cxx $(TOPIC_HOME)/wellbore
	cp $(TMPOUTDIR)/*_subscriber.cxx $(TOPIC_HOME)/wellbore
	cp $(TMPOUTDIR)/*_publisher.h $(TOPIC_HOME)/wellbore/include
	cp $(TMPOUTDIR)/*_subscriber.h $(TOPIC_HOME)/wellbore/include
	cp $(TMPOUTDIR)/Makefile $(TOPIC_HOME)/wellbore
	-@rm -rf $(TMPOUTDIR)

objective.cpy:
	@echo "Copying generated files..."
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective/
	-@rm -rf $(TMPOUTDIR)

drilling_limits.cpy:
	@echo "Generating Pubs & Subs for target $@ $(TMPOUTDIR) ..."
	/usr/bin/python ./pub_sub_gen.py objective/$@ $(TMPOUTDIR) 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/drilling_limits
	mkdir -p $(TOPIC_HOME)/drilling_limits/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/drilling_limits
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/drilling_limits/include
	cp $(TMPOUTDIR)/*_publisher.cxx $(TOPIC_HOME)/drilling_limits
	cp $(TMPOUTDIR)/*_subscriber.cxx $(TOPIC_HOME)/drilling_limits
	cp $(TMPOUTDIR)/*_publisher.h $(TOPIC_HOME)/drilling_limits/include
	cp $(TMPOUTDIR)/*_subscriber.h $(TOPIC_HOME)/drilling_limits/include
	cp $(TMPOUTDIR)/Makefile $(TOPIC_HOME)/drilling_limits
	-@rm -rf $(TMPOUTDIR)

drilling_calibration.cpy: 
	@echo "Copying generated files..."
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/drilling_calibration/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/drilling_calibration
	-@rm -rf $(TMPOUTDIR)

autodriller_configuration.cpy: 
	@echo "Copying generated files..."
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/autodriller_configuration/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/autodriller_configuration
	-@rm -rf $(TMPOUTDIR)

autotuner_configuration.cpy: 
	@echo "Copying generated files..."
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/autotuner_configuration/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/autotuner_configuration
	-@rm -rf $(TMPOUTDIR)

resources.cpy:
	@echo "Copying generated files ..."
	mkdir -p $(TOPIC_HOME)/resources
	mkdir -p $(TOPIC_HOME)/system_resources/include
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/resources/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/resources
	-@rm -rf $(TMPOUTDIR)

drill_simulation.cpy: 
	@echo "Copying generated files..."
#	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/simulation/include
#	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/simulation
	-@rm -rf $(TMPOUTDIR)

slips.cpy: 
	@echo "Copying generated files..."
#	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/slips/include
#	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/slips
	-@rm -rf $(TMPOUTDIR)

ibop.cpy: 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/ibop/include
#	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/ibop/include
#	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/ibop
	-@rm -rf $(TMPOUTDIR)


ir_engineering.cpy: 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/ir_engineering/include
#	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/ir_engineering/include
#	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/ir_engineering
	-@rm -rf $(TMPOUTDIR)

rotate_engineering.cpy:
	@echo "Generating Pubs & Subs for target $@ $(TMPOUTDIR) ..."
	/usr/bin/python ./pub_sub_gen.py engineering/$@ $(TMPOUTDIR) 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/rotate_engineering
	mkdir -p $(TOPIC_HOME)/rotate_engineering/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/rotate_engineering
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/rotate_engineering/include
	cp $(TMPOUTDIR)/*_publisher.cxx $(TOPIC_HOME)/rotate_engineering
	cp $(TMPOUTDIR)/*_subscriber.cxx $(TOPIC_HOME)/rotate_engineering
	cp $(TMPOUTDIR)/*_publisher.h $(TOPIC_HOME)/rotate_engineering/include
	cp $(TMPOUTDIR)/*_subscriber.h $(TOPIC_HOME)/rotate_engineering/include
	cp $(TMPOUTDIR)/Makefile $(TOPIC_HOME)/rotate_engineering
	-@rm -rf $(TMPOUTDIR)

plc_circulate.cpy:
	@echo "Generating Pubs & Subs for target $@ $(TMPOUTDIR) ..."
	/usr/bin/python ./pub_sub_gen.py control/$@ $(TMPOUTDIR) 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/circulate_control
	mkdir -p $(TOPIC_HOME)/circulate_control/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/circulate_control
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/circulate_control/include
	cp $(TMPOUTDIR)/*_publisher.cxx $(TOPIC_HOME)/circulate_control
	cp $(TMPOUTDIR)/*_subscriber.cxx $(TOPIC_HOME)/circulate_control
	cp $(TMPOUTDIR)/*_publisher.h $(TOPIC_HOME)/circulate_control/include
	cp $(TMPOUTDIR)/*_subscriber.h $(TOPIC_HOME)/circulate_control/include
	cp $(TMPOUTDIR)/Makefile $(TOPIC_HOME)/circulate_control
	-@rm -rf $(TMPOUTDIR)

plc_drill.cpy: 
	@echo "Generating Pubs & Subs for target $@ $(TMPOUTDIR) ..."
	/usr/bin/python ./pub_sub_gen.py control/$@ $(TMPOUTDIR) 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/drill_control
	mkdir -p $(TOPIC_HOME)/drill_control/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/drill_control
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/drill_control/include
	cp $(TMPOUTDIR)/*_publisher.cxx $(TOPIC_HOME)/drill_control
	cp $(TMPOUTDIR)/*_subscriber.cxx $(TOPIC_HOME)/drill_control
	cp $(TMPOUTDIR)/*_publisher.h $(TOPIC_HOME)/drill_control/include
	cp $(TMPOUTDIR)/*_subscriber.h $(TOPIC_HOME)/drill_control/include
	cp $(TMPOUTDIR)/Makefile $(TOPIC_HOME)/drill_control
	-@rm -rf $(TMPOUTDIR)

plc_hoist.cpy: 
	@echo "Generating Pubs & Subs for target $@ $(TMPOUTDIR) ..."
	/usr/bin/python ./pub_sub_gen.py control/$@ $(TMPOUTDIR) 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/hoist_control
	mkdir -p $(TOPIC_HOME)/hoist_control/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/hoist_control
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/hoist_control/include
	cp $(TMPOUTDIR)/*_publisher.cxx $(TOPIC_HOME)/hoist_control
	cp $(TMPOUTDIR)/*_subscriber.cxx $(TOPIC_HOME)/hoist_control
	cp $(TMPOUTDIR)/*_publisher.h $(TOPIC_HOME)/hoist_control/include
	cp $(TMPOUTDIR)/*_subscriber.h $(TOPIC_HOME)/hoist_control/include
	cp $(TMPOUTDIR)/Makefile $(TOPIC_HOME)/hoist_control
	-@rm -rf $(TMPOUTDIR)

plc_rotate.cpy:
	@echo "Generating Pubs & Subs for target $@ $(TMPOUTDIR) ..."
	/usr/bin/python ./pub_sub_gen.py control/$@ $(TMPOUTDIR) 
	@echo "Copying generated files..."
	mkdir -p $(TOPIC_HOME)/rotate_control
	mkdir -p $(TOPIC_HOME)/rotate_control/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/rotate_control
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/rotate_control/include
	cp $(TMPOUTDIR)/*_publisher.cxx $(TOPIC_HOME)/rotate_control
	cp $(TMPOUTDIR)/*_subscriber.cxx $(TOPIC_HOME)/rotate_control
	cp $(TMPOUTDIR)/*_publisher.h $(TOPIC_HOME)/rotate_control/include
	cp $(TMPOUTDIR)/*_subscriber.h $(TOPIC_HOME)/rotate_control/include
	cp $(TMPOUTDIR)/Makefile $(TOPIC_HOME)/rotate_control
	-@rm -rf $(TMPOUTDIR)

torque.cpy:
	@echo "Copying generated files..."
#	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/engineering/torque/include
#	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/engineering/torque
	-@rm -rf $(TMPOUTDIR)

survey.cpy:
	@echo "Copying generated files..."
#	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/survey/include
#	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/survey/
	-@rm -rf $(TMPOUTDIR)

pipe_tally.cpy:
	@echo "Copying generated files..."
#	mkdir -p $(TOPIC_HOME)/pipe_handling/pipe_tally
#	mkdir -p $(TOPIC_HOME)/pipe_handling/pipe_tally/include
#	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/pipe_handling/pipe_tally/include
#	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/pipe_handling/pipe_tally/
	-@rm -rf $(TMPOUTDIR)

