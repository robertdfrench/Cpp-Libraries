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
.PHONY: default lib test run-test doc install clean

# Default rule:
default: lib test doc

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
	@echo -n '** Creating Doxygen docs at $(DOC_DIR)/html... '
	@doxygen $(DOXYFILE) > /dev/null 2>&1
	@echo 'done.'

# Install libraries:
install:
	@echo -n '** Installing libraries... '
	@for lib in `find $(BIN_DIR) -type f -name *.a`; do \
		cp $$lib /usr/local/lib; \
	done
	@echo 'done.'

# I probably should create a distclean as well but... too lazy right now.
clean:
	$(MAKE) -C lib clean
	$(MAKE) -C test clean
	@echo -n '** Deleting directory $(BIN_DIR)... '
	@if [ -d $(BIN_DIR) ]; then $(RM) $(BIN_DIR); fi
	@echo 'done.'
	@echo -n '** Deleting directory $(DOC_DIR)... '
	@if [ -d $(DOC_DIR)/html ]; then $(RM) $(DOC_DIR)/html; fi
	@echo 'done.'
