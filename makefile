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

# Doxyfile:
DOXYFILE = ${DOC_DIR}/DoxyFile

# Phony targets
.PHONY: default dirs lib test doc clean

# Default rule:
default: dirs lib test

# Lets make some directories:
dirs:
	@mkdir -p $(BIN_DIR)

# Compile all libs:
lib:
	$(MAKE) -C lib

# Compile all tests:
test:
	$(MAKE) -C test

# Create documentation:
doc:
	doxygen $(DOXYFILE)

# I probably should create a distclean as well but... too lazy right now.
clean:
	$(MAKE) -C lib clean
	$(MAKE) -C test clean 
	@if [ -d $(BIN_DIR) ]; then rm -Rf $(BIN_DIR); fi
	@if [ -d $(DOC_DIR)/html ]; then rm -Rf $(DOC_DIR)/html; fi
	@echo "Removed BIN and DOC/HTML directories."
