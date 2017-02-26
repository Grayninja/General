SRC_TOP:=../../..
include $(SRC_TOP)/Makefile.inc

DEPS = HugeInt.h
OBJ = main.o HugeInt.o

HugeInt.h: utility.h

# Default rule
.DEFAULT_GOAL := all

%.o: %.cpp $(DEPS)
	$(CXX) -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CXX) -o $@ $^ $(LFLAGS) $(LIBS)

.PHONY: all
all:
	$(MAKE) main

.PHONY: clean
clean:
	\rm -f *.o main
