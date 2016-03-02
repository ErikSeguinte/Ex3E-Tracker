all: tracker

tracker: Tracker.o Character.o cli.o
	g++ -std=c++11 -g -Wall Tracker.o Character.o cli.o -o tracker.out

cli.o: cli.cpp Character.h
	g++ -std=c++11 -c cli.cpp

Tracker.o: Tracker.cpp Tracker.h Character.h Character.cpp
	g++ -std=c++11 -c Tracker.cpp Character.cpp

Character.o: Character.cpp Character.h
	g++ -std=c++11 -c Character.cpp

clean:
	rm *.o *.out
