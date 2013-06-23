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

all:
	$(MAKE) -C lib
	$(MAKE) -C test

.PHONY: docs clean

doc:
	doxygen

clean:
	rm -rf html
	$(MAKE) -C lib clean
	$(MAKE) -C test clean
