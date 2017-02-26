SRC_TOP:=../..
include $(SRC_TOP)/Makefile.inc

DEPS = Array.h
OBJ = main.o Array.o

%.o: %.cpp $(DEPS)
	$(CXX) -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CXX) -o $@ $^ $(LFLAGS) $(LIBS)

.PHONY: all
all: main

.PHONY: clean
clean:
	\rm -f *.o main
