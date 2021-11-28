kaiju_choice.o: kaiju_choice.cpp struct.h
		g++ -c kaiju_choice.cpp
main.o: main.cpp struct.h
	g++ -c main.cpp
kj: main.o kaiju_choice.o
	g++ main.o kaiju_choice.o -o kj