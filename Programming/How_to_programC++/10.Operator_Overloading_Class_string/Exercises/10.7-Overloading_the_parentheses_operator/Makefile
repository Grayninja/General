include ../../Makefile.inc

DEPS = DoubleSubScriptedArray.h
OBJ = main.o DoubleSubscriptedArray.o

%.o: %.cpp $(DEPS)
	$(CXX) -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CXX) -o $@ $^ $(LFLAGS) $(LIBS)

.PHONY: all
all: main

.PHONY: clean
clean:
	\rm -f *.o main
