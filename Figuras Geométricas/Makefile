all: vpl_execution

build/Retangulo.o: include/Retangulo.hpp src/Retangulo.cpp build
	g++ -std=c++11 -Wall -Iinclude -c src/Retangulo.cpp -o build/Retangulo.o

build/Circulo.o: include/Circulo.hpp src/Circulo.cpp build
	g++ -std=c++11 -Wall -Iinclude -c src/Circulo.cpp -o build/Circulo.o

build/Triangulo.o: include/Triangulo.hpp src/Triangulo.cpp build
	g++ -std=c++11 -Wall -Iinclude -c src/Triangulo.cpp -o build/Triangulo.o

build/main.o: include/Retangulo.hpp include/Circulo.hpp include/Triangulo.hpp src/main.cpp build
	g++ -std=c++11 -Wall -Iinclude -c src/main.cpp -o build/main.o

vpl_execution: build/Retangulo.o build/Circulo.o build/Triangulo.o build/main.o
	g++ -std=c++11 -Wall build/main.o build/Retangulo.o build/Circulo.o build/Triangulo.o -o vpl_execution

build:
	mkdir build