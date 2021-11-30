Flag= -pedantic-errors -std=c++11
Header= struct.h
startgame_menu.o: startgame_menu.cpp $(Header)
		g++ $(Flag) -c $<
instruction.o: instruction.cpp $(Header)
		g++ $(Flag) -c $<
newgame.o: newgame.cpp $(Header)
		g++ $(Flag) -c $<
battlefield.o: battlefield.cpp $(Header)
		g++ $(Flag) -c $<
jaegar_choice.o: jaegar_choice.cpp $(Header)
		g++ $(Flag) -c $<
jaegar_data.o: jaegar_data.cpp $(Header)
		g++ $(Flag) -c $<
jaegar_props.o: jaegar_props.cpp $(Header)
		g++ $(Flag) -c $<
jaegar_status.o: jaegar_status.cpp $(Header)
		g++ $(Flag) -c $<
kaiju_choice.o: kaiju_choice.cpp $(Header)
		g++ $(Flag) -c $<
kaiju_data.o: kaiju_data.cpp $(Header)
		g++ $(Flag) -c $<
kaiju_props.o: kaiju_props.cpp $(Header)
		g++ $(Flag) -c $<
kaiju_status.o: kaiju_status.cpp $(Header)
		g++ $(Flag) -c $<
jaegar_bag.o: jaegar_bag.cpp $(Header)
		g++ $(Flag) -c $<
kaiju_bag.o: kaiju_bag.cpp $(Header)
		g++ $(Flag) -c $<
main.o: main.cpp $(Header)
	g++ $(Flag) -c $<
kj: *.o
		g++ $(Flag) $^ -o $@
clean:
	rm -f *.o kj
.PHONY: clean
