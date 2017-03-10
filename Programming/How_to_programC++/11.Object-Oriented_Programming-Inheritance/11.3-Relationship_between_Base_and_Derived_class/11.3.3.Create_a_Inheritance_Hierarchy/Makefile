SRC_TOP:=../../..
include $(SRC_TOP)/Makefile.inc

DEPS = CommissionEmployee.h \
	   BasePlusCommissionEmployee.h

OBJ = main.o \
	  CommissionEmployee.o \
	  BasePlusCommissionEmployee.o

%.o: %.cpp $(DEPS)
	$(CXX) $(CFLAGS) -o $@ $<

main: $(OBJ)
	$(CXX) $(LFLAGS) $(LIBS) -o $@ $^ 

.PHONY: all
all: main

.PHONY: clean
clean:
	\rm -f *.o main
