#pragma once

#include "Monster.h"
using namespace std;
class Orc
{
private:
	string name;
	int health;
	int attack;
public:
	Orc();
	string getName();
	int getHealth();
	void takeDamage(int damage);
	Item* dropItem();

	int getAttack();
};