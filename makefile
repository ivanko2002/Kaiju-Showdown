Flag= -pedantic-errors -std=c++11
Header= struct.h
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
main.o: main.cpp $(Header)
	g++ $(Flag) -c $<
kj: main.o battlefield.o jaegar_choice.o jaegar_data.o jaegar_props.o jaegar_status.o kaiju_choice.o kaiju_data.o kaiju_props.o kaiju_status.o
	g++ $(Flag) $^ -o $@
clean:
	rm -f main.o battlefield.o jaegar_choice.o jaegar_data.o jaegar_props.o jaegar_status.o kaiju_choice.o kaiju_data.o kaiju_props.o kaiju_status.o kj
.PHONY: clean
