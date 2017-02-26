INCDIR = .
CXX = g++
FLAGS = -Wall -Wextra -Wpedantic -std=c++14
DFLAGS = -O3
CFLAGS = -c $(FLAGS) $(DFLAGS) -I$(INCDIR)
LFLAGS = $(FLAGS) -I$(INCDIR)
MAKE_OPTS = -j $(nproc)
MAKE = make $(MAKE_OPTS)
