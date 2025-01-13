#pragma once
#include <string>
#include <vector>
#include "Item.h"
using namespace std;

//Singleton Pattern
class Character
{
private:
	static Character* instance;
	Character(const string& characterName);
	~Character();

    string name;
    int level;
    int health;
    int maxHealth;
    int attack;
    int experience;
    int gold;

    vector<Item*> inventory;


	Character(const Character&) = delete;
	Character& operator=(const Character&) = delete;

public:
    static Character* GetInstance(const string& characterName);
    static void ReleaseInstance();
    
    string NameValidation(); // 이름 검증
    void DisplayStatus();
    void LevelUp();
    void UseItem(int index);
    void VisitShop(); 

//✨ update  
    int getlevel() const 
    {

        return level;
    }
    int gethealth() const 
    {
        return health;
    }
    int getattack() const 
    {
        return attack;
    }
    string getname() const 
    {
        return name;
    }

    int getgold() const
    {
        return gold;    
    }

    void setgold(int settleGold);

    //✨ update  

    void TakeDamage(int damage);
};