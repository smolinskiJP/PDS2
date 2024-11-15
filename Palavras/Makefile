all: exec

build/main.o: src/main.cpp
	g++ -std=c++11 -Wall -c src/main.cpp -o build/main.o

exec: build/main.o
	g++ -std=c++11 -Wall build/main.o -o exec