# Makefile
CXX_FLAG = --std=c++11 -g

all: main

main: main.cpp bst.o
	g++ $(CXX_FLAG) -o test main.cpp bst.cpp

clean:
	rm -f test *.o