#ifndef TRACKER_H
#define TRACKER_H
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<vector>
#include "Character.h"
#include <string>
#include<memory>
class Tracker
{
    private:
	std::vector<std::unique_ptr<Character>> character_list;
    public:
	Tracker();
	void add_character(std::string);
	void print();
	int get_size();
};
#endif
