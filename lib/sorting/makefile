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

#include $(realpath ../makefile-lib.common)
include /home/calebwherry/Downloads/repos_github/Cpp-Libraries/lib/makefile-lib.common

SRC =  sorting.cpp

OBJ = $(SRC:.cpp=.o)

OUT = libsorting.a

.SUFFIXES: .cpp

default: $(OUT)

.cpp.o:
	$(CC) $(INCLUDES) $(CFLAGS) -c $< -o $@

$(OUT): $(OBJ)
	ar rcs $(OUT) $(OBJ)

clean:
	rm -f $(OBJ) $(OUT) Makefile.bak makefile.bak
