all: vpl_execution

vpl_execution: main.cpp HeapInt.o
	g++ -std=c++11 -Wall main.cpp HeapInt.o -o vpl_execution

HeapInt.o: HeapInt.cpp HeapInt.hpp
	g++ -std=c++11 -Wall -c HeapInt.cpp -o HeapInt.o