#############################
##
##  File:
##      makefile
##
##  Description:
##      Top-level makefile for C++ Libraries
##
##  Author:
##      J. Caleb Wherry
##
#############################

# Include all common make rules:
include makefile.common

.PHONY: all lib test doc clean

all: lib test

lib:
	$(MAKE) -C lib

test:
	$(MAKE) -C test

doc:
	doxygen $(DOXYFILE)

clean:
	rm -rf $(DOC)/html
	$(MAKE) -C lib clean
	$(MAKE) -C test clean
