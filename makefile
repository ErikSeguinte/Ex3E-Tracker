# compiler flags
# -g --Enable debugging
# -Wall --Turn on all warnings
# -std=c++11 --use c++11
#

CXX = g++
CXXFLAGS = -g -Wall -std=c++14

all: tracker

tracker: Tracker.o Character.o cli.o pod.o
	$(CXX) $(CXXFLAGS) Tracker.o Character.o cli.o pod.o -o tracker.out

cli.o: cli.cpp Character.h 
	$(CXX) $(CXXFLAGS) -c cli.cpp

Tracker.o: Tracker.cpp Tracker.h Character.h Character.cpp pod.o 
	$(CXX) $(CXXFLAGS) -c Tracker.cpp Character.cpp 

Character.o: Character.cpp Character.h
	$(CXX) $(CXXFLAGS) -c Character.cpp

pod.o: pod.h pod.cpp
	$(CXX) $(CXXFLAGS) -c pod.cpp

.PHONY: clean

clean:
	rm *.o *.out

test: test_main.o test_1.o Character.o Tracker.o
	$(CXX) $(CXXFLAGS) test_main.o test_1.o Character.o Tracker.o -o test.out pod.o

test_main.o: test_main.cpp
	$(CXX) $(CXXFLAGS) -c test_main.cpp

test_1.o: test_1.cpp
	$(CXX) $(CXXFLAGS) -c test_1.cpp
