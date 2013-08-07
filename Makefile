CPP = cpp
C = c
CC = gcc
CXX = g++
OBJ = o
C_FLAGS = -g -Wall -I. -O2
LIBRARY_LINK = ar cr
LIBRARY_LINK_OPTS = 
LIB_SUFFIX = a
EXE = mytest

#NAME = libtest
LIBTEST_LIB = $(NAME).$(LIB_SUFFIX)
all: $(LIBTEST_LIB) $(EXE)

.c.o:
	g++ -c $(C_FLAGS) $<
#deletetest.c

test.$(OBJ):deletetest.$(C)
	$(CXX) -o $@ -c $(C_FLAGS) $<
$(EXE):test.$(OBJ)
			$(CXX) -o $@ $<
$(LIBTEST_LIB):test.$(OBJ)
	ar cr $@ $<
	@echo ======$@
	@echo ======$<
	@echo ======$(MAKE)
	@echo ======$(NAME)
	@date '+%Y-%m-%d %H:%M:%S'

clean:
	  -rm -rf *.$(OBJ) $(ALL) $(EXE)
