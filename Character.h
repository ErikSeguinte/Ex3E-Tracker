//  Specification file for the Character Class
#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
#include <memory>

class Character;

class CrashState {
    private:
     bool is_crashed_;
     int turns_since_crashed_;
     std::weak_ptr<Character> shift_target_;
    };



struct CharacterData {
    std::string name;
    int initiative;
    bool has_gone;
    int onslaught;
    bool is_delayed;

};

class Character {
    private:
	std::string name_;
	int initiative_;
	bool is_crashed_;;
	int turns_since_crashed_;
	bool has_gone_;
	std::weak_ptr<Character> shift_target_;
	int onslaught_;
	bool is_delayed_;
	int character_number_;
    public:
	static int objectCount;
	//Constructors
	Character();
	Character(std::string);
	//Getters
	std::string name() const {
            return name_;
        }
	int initiative() const {
            return initiative_;
        }
        std::string initiative_as_string() const {
            return std::to_string(initiative_);
        }
	bool is_crashed() const {
            return is_crashed_;
        }
	int turns_since_crashed() const {
            return turns_since_crashed_;
        }
	bool has_gone() const {
            return has_gone_;
        }
        std::string has_gone_as_string() const {
            return has_gone_ ? "true" : "false";
        }
	Character shift_target() const;
	int onslaught() const;
	bool is_delayed() const;;
	CharacterData character_data() const;;
	
	~Character();

	//Setters
	void setName(std::string);
	void setInit(int value)
        {
            initiative_ = value;
        }
	void setCrashed(bool crashed) { is_crashed_ = crashed;     };
	void setRecentlyCrashed();
	void setHasGone(bool boolean)
        {
            has_gone_ = boolean;
        }
	void setShiftTarget_ptr(const std::shared_ptr<Character>& target);
	void setOnslaught(int);
	void setIsDelayed(bool);

	//Other
  	virtual bool checkForCrash(int damage);
	virtual void addOnslaught(int value);
  	virtual int takeInitDamage(int value);
  	virtual void gainInitFromDamage(int value);
//      virtual bool checkForShift(std::shared_ptr<Character> attacker);

        static bool compareCharacter(const Character&, const Character&);
};  
#endif


