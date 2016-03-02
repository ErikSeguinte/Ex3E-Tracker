# compiler flags
# -g --Enable debugging
# -Wall --Turn on all warnings
# -std=c++11 --use c++11
#

CXX = g++
UI = uic
CXXFLAGS = -g -Wall -std=c++11
GUI = -I./gui



all: tracker

tracker: Tracker.o Character.o gui.o
	$(CXX) $(CXXFLAGS) Tracker.o Character.o cli.o -o tracker.out

gui.o: gui.cpp Character.h gui 
	$(CXX) $(CXXFLAGS) -c gui.cpp

Tracker.o: Tracker.cpp Tracker.h Character.h Character.cpp
	$(CXX) $(CXXFLAGS) -c Tracker.cpp Character.cpp

Character.o: Character.cpp Character.h
	$(CXX) $(CXXFLAGS) -c Character.cpp

.PHONY: gui
gui:
	$(MAKE) -C ./gui


clean:
	rm *.o *.out
