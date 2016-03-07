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

struct IndividualAttackStats
{
    const std::shared_ptr<Character>& ptr;
    int initiativeModifier;
};

struct attack_data
{
    IndividualAttackStats attacker;
    IndividualAttackStats defender;
    int damage;
    bool success;
    int cost;
};

class Tracker

{
    private:
	std::vector<std::shared_ptr<Character>> characterList;
    public:
	Tracker();
	void addCharacter(std::string);
	void print();
	int getSize();

	// Attacks
	void performWitheringAttack(attack_data input);
};
#endif
