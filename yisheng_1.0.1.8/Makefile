CC := gcc
CXX := g++
.DEFAULT_GOAL := all
DEST := .

########## for frontend dev BEGIN ###########################

module_list := wftd-dstar.so
wftd-dstar.so: trader_dstar.o
	$(CXX) -shared -o $@ $^  -ldstartradeapi -ldstarudptradeapi

########## for frontend dev END #############################

CFLAGS := -Wall -I $(DEST)/include -I ${HOME}/.local/include -fPIC -O2 -g -pthread
CXXFLAGS := $(CFLAGS) --std=c++11

all: $(module_list)

install: $(module_list)
	install -d $(DEST)/lib
	install -p $(module_list) $(DEST)/lib

clean:
	$(RM) $(module_list) *.o

.PHONY: all install clean
