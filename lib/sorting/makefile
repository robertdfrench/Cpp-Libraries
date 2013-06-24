#############################
##
##  File:
##      makefile
##
##  Description:
##      Sorting library makefile for C++ Libraries
##
##  Author:
##      J. Caleb Wherry
##
#############################

include ../common-lib-rules.mk

# source files.
SRC =  sorting.cpp

OBJ = $(SRC:.cpp=.o)

OUT = libsorting.a

# include directories
INCLUDES = -I. -I../include/ -I/usr/local/include

# library paths
LIBS = -L../ -L/usr/local/lib -lm

.SUFFIXES: .cpp

default: $(OUT)

.cpp.o:
	$(CC) $(INCLUDES) $(CFLAGS) -c $< -o $@

$(OUT): $(OBJ)
	ar rcs $(OUT) $(OBJ)

clean:
	rm -f $(OBJ) $(OUT) Makefile.bak makefile.bak
