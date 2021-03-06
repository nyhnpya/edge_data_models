DDSGEN = rtiddsgen
GENOPT = -language C++ -namespace -replace 
TMPOUTDIR = generated_code

TOPIC_HOME = $(CURDIR)/../topics
IDL_HOME = $(CURDIR)

###############################################################################
# Description: 
# Generate RTI DDS C++ code from IDL files under IDL_HOME and copy the
# generated files to locations in MC repository (TOPIC_HOME).
# 
# Usages: 
# 1. make -f Makefile.dds [target]
#    + target is the IDL file name without the "idl" extention.
#    + If no target is specified, all IDL files under IDL_HOME will be built.
#    + TOPIC_HOME and IDL_HOME variables are required.
#
# 2. make TOPIC_HOME=<path to mc repo> IDL_HOME=<path to IDL files> -f Makefile.dds
#    + passed in the required TOPIC_HOME/IDL_HOME variables as parameters.
#
# Instruction to update this makefile for new IDL file:
# + No need to add new rule. The makefile will auto detect the new 
#   IDL file if it's under IDL_HOME.  
# + Add the target <new idl file name>.cpy to the bottom of
#   of the makefile, and add commands to copy the generated files to
#   MC repository. 
###############################################################################

.NOTPARALLEL:
.ONESHELL:

# set VPATH variable for dependency does not exist in current directory
VPATH := $(shell find $(IDL_HOME) -type d)

# only files with .idl extension be looked for in VPATH
vpath %.idl $(VPATH)

# extract all idl files from IDL_HOME
DEPENDS := $(shell find $(IDL_HOME) -type f -name '*.idl')

# extract the target name from all IDL files in current directory
TARGETS := $(basename $(notdir $(DEPENDS)))

# rule for all <target>.idl found under IDL_HOME
all: $(TARGETS)

.PHONY: all clean env_test $(addsuffix .cpy,$(TARGET))

# rule for each <target> (without .idl extension)
# Note: put the %.idl dependency so that the full path of idl file is looked up
%: env_test %.idl
	@mkdir -p $(TMPOUTDIR)
	@echo
	@echo "making target $@ ..."
	$(NDDSHOME)/bin/$(DDSGEN) $(GENOPT) -d $(TMPOUTDIR) -inputIdl $(lastword $^) $(addprefix -I , $(VPATH))
	@$(MAKE) -f $(firstword $(MAKEFILE_LIST)) --no-print-directory $@.cpy

# empty rule to satisfy the "%.idl" dependency of rule above.
$(DEPENDS):

# making sure the TOPIC_HOME and IDL_HOME env are defined.
env_test:
	@if test -z "$(TOPIC_HOME)"; then \
	    echo 'TOPIC_HOME is not set. Need the path to MC code. e.g. /home/src/mc/'; \
	    exit 1; \
	fi; 
	@if test -z "$(IDL_HOME)"; then \
	    echo 'IDL_HOME is not set. Need the path to IDL files. e.g. /home/novos_data_models/idl'; \
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

circulate.cpy:
	@echo "Copying generated files..."
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/circulate/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/circulate
	-@rm -rf $(TMPOUTDIR)

drill.cpy: 
	@echo "Copying generated files..."
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/drill/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/drill
	-@rm -rf $(TMPOUTDIR)

auto_ream.cpy: 
	@echo "Copying generated files..."
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/auto_ream/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/auto_ream
	-@rm -rf $(TMPOUTDIR)

hoist.cpy: 
	@echo "Copying generated files..."
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/hoist/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/hoist
	-@rm -rf $(TMPOUTDIR)

rotate.cpy:
	@echo "Copying generated files..."
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/rotate/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/rotate
	-@rm -rf $(TMPOUTDIR)

wellbore.cpy:
	@echo "Copying generated files..."
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/wellbore/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/wellbore/
	-@rm -rf $(TMPOUTDIR)

objective.cpy:
	@echo "Copying generated files..."
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/objective/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/objective/
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

process_info.cpy:
	@echo "Copying generated files ..."
	mkdir -p $(TOPIC_HOME)/system/process_info
	mkdir -p $(TOPIC_HOME)/system_process_info/include
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/system/process_info/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/system/process_info
	-@rm -rf $(TMPOUTDIR)

drill_simulation.cpy: 
	@echo "Copying generated files..."
	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/objective_state/simulation/include
	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/objective_state/simulation
	-@rm -rf $(TMPOUTDIR)

rotate_engineering.cpy:
	@echo "Copying generated files..."
#	mkdir -p $(TOPIC_HOME)/engineering/rotate_engineering
#	mkdir -p $(TOPIC_HOME)/engineering/rotate_engineering/include
#	cp $(TMPOUTDIR)/$(basename $@)*.h $(TOPIC_HOME)/engineering/rotate_engineering/include
#	cp $(TMPOUTDIR)/$(basename $@)*.cxx $(TOPIC_HOME)/engineering/rotate_engineering
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

