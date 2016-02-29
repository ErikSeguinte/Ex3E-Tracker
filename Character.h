//  Specification file for the Character Class
#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
class Character
{
    private:
	std::string name;
    	int initiative;
	bool is_crashed;
	bool has_gone;
	Character *shift_target;
	int onslaught;
	bool is_delayed;
    public:
	Characters(std::string);

}

