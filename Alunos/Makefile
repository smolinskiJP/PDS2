all: vpl_execution

build/aluno.o: include/aluno.hpp src/aluno.cpp build
	g++ -std=c++11 -Wall -Iinclude -c src/aluno.cpp -o build/aluno.o

build/main.o: include/aluno.hpp src/main.cpp build
	g++ -std=c++11 -Wall -Iinclude -c src/main.cpp -o build/main.o

vpl_execution: build/aluno.o build/main.o
	g++ -std=c++11 -Wall build/main.o build/aluno.o -o vpl_execution

build:
	mkdir build