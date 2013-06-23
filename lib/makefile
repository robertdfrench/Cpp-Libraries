#############################
##
##  File:
##      makefile
##
##  Description:
##      Library-level makefile for C++ Sort Library
##
##  Author:
##      J. Caleb Wherry
##
#############################

# source files.
SRC =  sort.cpp

OBJ = $(SRC:.cpp=.o)

OUT = libsort.a

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
	rm -f $(OBJ) $(OUT) Makefile.bak
