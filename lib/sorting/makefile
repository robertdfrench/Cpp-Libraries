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

# source files.
SRC =  sorting.cpp

OBJ = $(SRC:.cpp=.o)

OUT = libsorting.a

# include directories
INCLUDES = -I. -I../include/ -I/usr/local/include

# C++ compiler flags (-g -O2 -Wall)
CCFLAGS = -g -Wall -O2 -std=c++0x

# compiler
CC = g++

# library paths
LIBS = -L../ -L/usr/local/lib -lm

# compile flags
LDFLAGS = -g

.SUFFIXES: .cpp

default: $(OUT)

.cpp.o:
	$(CC) $(INCLUDES) $(CCFLAGS) -c $< -o $@

$(OUT): $(OBJ)
	ar rcs $(OUT) $(OBJ)

clean:
	rm -f $(OBJ) $(OUT) Makefile.bak makefile.bak
