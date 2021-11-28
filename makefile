Flag= -pedantic-errors -std=c++11
Header= struct.h
battlefield.o: battlefield.cpp $(Header)
		g++ $(Flag) -c $<
jaegar_choice.o: jaegar_choice.cpp $(Header)
		g++ $(Flag) -c $<
kaiju_choice.o: kaiju_choice.cpp $(Header)
		g++ $(Flag) -c $<
kaiju_choice.o: kaiju_choice.cpp $(Header)
		g++ $(Flag) -c $<
kaiju_choice.o: kaiju_choice.cpp $(Header)
		g++ $(Flag) -c $<
kaiju_choice.o: kaiju_choice.cpp $(Header)
		g++ $(Flag) -c $<
kaiju_choice.o: kaiju_choice.cpp $(Header)
		g++ $(Flag) -c $<
kaiju_choice.o: kaiju_choice.cpp $(Header)
		g++ $(Flag) -c $<
kaiju_choice.o: kaiju_choice.cpp $(Header)
		g++ $(Flag) -c $<
main.o: main.cpp $(Header)
	g++ $(Flag) -c $<
kj: main.o battlefield.o jaegar_choice.o kaiju_choice.o
	g++ $(Flag) $^ -o $@