#ifndef TRACKER_H
#define TRACKER_H
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<vector>
#include "Character.h"
#include <string>
class Tracker
{
    private:
	std::vector<Character> character_list;
    public:
	Tracker();
	void add_character(std::string);
	void print();
};
#endif
