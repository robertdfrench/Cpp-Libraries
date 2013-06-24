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
.PHONY: default lib test doc clean distclean

default: dirs lib test

dirs:
	@mkdir $(BIN_DIR)

lib:
	$(MAKE) -C lib

test:
	$(MAKE) -C test

doc:
	doxygen $(DOXYFILE)

clean:
	$(MAKE) -C lib clean
	$(MAKE) -C test clean

distclean: clean
	rm -rf $(BIN_DIR)
	rm -rf $(DOC_DIR)/html
