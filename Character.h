//  Specification file for the Character Class
#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
#include <memory>

class Character;
struct CharacterData 
{
    	std::string name;
	int initiative;
	bool isCrashed;
	int turnsSinceCrashed;
	bool hasGone;
	std::weak_ptr<Character> shiftTarget;
	int onslaught;
	bool isDelayed;

};

class Character
{
    private:
	std::string name;
	int initiative;
	bool isCrashed;
	int turnsSinceCrashed;
	bool hasGone;
	std::weak_ptr<Character> shiftTarget;
	int onslaught;
	bool isDelayed;
	int characterNo;
    public:
	static int objectCount;
	//Constructors
	Character();
	Character(std::string);
	//Getters
	std::string getName();
	int getInt();
	bool getCrashed();
	int getTurnsSinceCrashed();
	bool getHasGone();
	Character getShiftTarget();
	int getOnslaught();
	bool getIsDelayed;
	CharacterData getCharacterData();
	
	~Character();

	//Setters
	void setName(std::string);
	void setInit(int);
	void setCrashed(bool);
	void setRecentlyCrashed();
	void setHasGone(bool);
	void setShiftTarget_ptr(const std::shared_ptr<Character>& target);
	void setOnslaught(int);
	void setIsDelayed(bool);

	//Other
  	virtual bool checkForCrash(int damage);
	virtual void addOnslaught(int value);
  	virtual int takeInitDamage(int value);
  	virtual void gainInitFromDamage(int value);
};  
#endif


