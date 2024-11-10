all: vpl_execution

build/list.o: include/list.hpp src/list.cpp
	g++ -std=c++11 -Wall - c src/list.cpp -o build/list.o

build/main.o: include/list.hpp src/main.cpp
	g++ -std=c++11 -Wall -c src/main.cpp -o build/main.o

vpl_execution: build/main.o build/list.o
	g++ -std=c++11 -Wall build/main.o build/list.o -o vpl_execution

clean:
	rm -f vpl_execution build/*.o