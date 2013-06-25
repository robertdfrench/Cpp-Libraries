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
.PHONY: default lib test doc clean

default: dirs lib test

dirs:
	@mkdir -p $(BIN_DIR)

lib:
	$(MAKE) -C lib

test:
	$(MAKE) -C test

doc:
	doxygen $(DOXYFILE)

# I probably should create a distclean as well but... too lazy right now.
clean:
	$(MAKE) -C lib clean
	$(MAKE) -C test clean 
	@if [ -d $(BIN_DIR) ]; then rm -Rf $(BIN_DIR); fi
	@if [ -d $(DOC_DIR)/html ]; then rm -Rf $(DOC_DIR)/html; fi
	@echo "Removed BIN and DOC/HTML directories."
