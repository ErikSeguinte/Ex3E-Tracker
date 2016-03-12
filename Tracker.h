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

class Tracker {
    private:
     std::vector<std::shared_ptr<Character>> character_list_;
    public:
     Tracker();
     static bool comparator(const std::shared_ptr<Character>& left, const std::shared_ptr<Character>& right);
     static bool comparatorTurn(const std::shared_ptr<Character>& left, const std::shared_ptr<Character>& right);
     void AddCharacter(std::string);
     void print();
     int size() const;
     std::vector<std::shared_ptr<Character>> character_list() const {
         return character_list_;
     }

     // Attacks
     void performWitheringAttack(const attack_data& input);
     
     void sort();

     std::string centered( std::string const& original, int targetSize );
};
#endif
