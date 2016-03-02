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
	Character *shift_target_ptr;
	int onslaught;
	bool is_delayed;
    public:
	//Constructors
	Character(std::string);
	
	//Getters
	std::string get_name();
	int get_int();
	bool get_crashed();
	bool get_has_gone();
	Character get_shift_target_ptr();
	int get_onslaught();
	bool get_is_delayed;

	//Setters
	void set_name(std::string);
	void set_init(int);
	void set_has_gone(bool);
	void set_shift_target_ptr(Character&);
	void set_onslaught(int);
	void set_is_delayed(bool);

	//Other
//	virtual bool check_for_crash(int damage);
//	virtual void add_onslaught(int value);
//	virtual void take_init_damage(int value);
//	virtual void gain_init_from_damage(int value);
};  
#endif

