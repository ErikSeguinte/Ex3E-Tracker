all: tracker

tracker: Tracker.o Character.o cli.o
	g++ -g -Wall Tracker.o Character.o cli.o -o tracker.out

cli.o: cli.cpp Character.h
	g++ -c cli.cpp

Tracker.o: Tracker.cpp Tracker.h Character.h Character.cpp
	g++ -c Tracker.cpp Character.cpp

Character.o: Character.cpp Character.h
	g++ -c Character.cpp

clean:
	rm *.o *.out
