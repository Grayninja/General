SRC_TOP:=../../..
include $(SRC_TOP)/Makefile.inc

DEPS = Complex.h
OBJ = main.o Complex.o

%.o: %.cpp $(DEPS)
	$(CXX) -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CXX) -o $@ $^ $(LFLAGS) $(LIBS)

.PHONY: all
all: main

.PHONY: clean
clean:
	\rm -f *.o main
