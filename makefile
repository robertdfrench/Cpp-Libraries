#############################
##
##  File:
##      \file makefile
##
##  Description:
##      \brief Top-level makefile for C++ Libraries
##
##  Author:
##      \author J. Caleb Wherry
##
#############################

# Include all common make rules:
include makefile.common

# Phony targets:
.PHONY: default dirs lib test run-test doc clean

# Default rule:
default: dirs lib test doc

# Lets make some directories:
dirs:
	@mkdir -p $(BIN_DIR)

# Compile all libs:
lib:
	$(MAKE) -C lib

# Compile all tests:
test:
	$(MAKE) -C test

# Run all tests:
run-test:
	@for f in `find $(BIN_DIR) -type f -executable`; do \
        $$f; \
    done

# Create documentation:
doc:
	@doxygen $(DOXYFILE) > /dev/null 2>&1
	@echo '** Doxygen docs created at $(DOC_DIR)/html'

# I probably should create a distclean as well but... too lazy right now.
clean:
	$(MAKE) -C lib clean
	$(MAKE) -C test clean 
	@if [ -d $(BIN_DIR) ]; then $(RM) $(BIN_DIR); fi
	@echo '** Deleted bin directory: $(BIN_DIR)'
	@if [ -d $(DOC_DIR)/html ]; then $(RM) $(DOC_DIR)/html; fi
	@echo '** Deleted doc directory: $(DOC_DIR)/html'
