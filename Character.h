//  Specification file for the Character Class
#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>

class Character;
struct character_data
{
    	std::string name;
	int initiative;
	bool is_crashed;
	int recently_crashed;
	bool has_gone;
	int shift_target;
	int onslaught;
	bool is_delayed;

};

class Character
{
    private:
	std::string name;
	int initiative;
	bool is_crashed;
	int recently_crashed;
	bool has_gone;
	int shift_target;
	int onslaught;
	bool is_delayed;
	int character_number;
    public:
	static int object_count;
	//Constructors
	Character();
	Character(std::string);
	//Getters
	std::string get_name();
	int get_int();
	bool get_crashed();
	int get_recently_crashed();
	bool get_has_gone();
	Character get_shift_target_ptr();
	int get_onslaught();
	bool get_is_delayed;
	character_data data;
	
	~Character();

	//Setters
	void set_name(std::string);
	void set_init(int);
	void set_crashed(bool);
	void set_recently_crashed();
	void set_has_gone(bool);
	void set_shift_target_ptr(Character&);
	void set_onslaught(int);
	void set_is_delayed(bool);

	//Other
  	virtual bool check_for_crash(int damage);
	virtual void add_onslaught(int value);
//	virtual void take_init_damage(int value);
//	virtual void gain_init_from_damage(int value);
};  
#endif

