#pragma once

#include <string>
#include "Item.h"

using namespace std;
class Monster
{
private:
	string name;
	int health;
	int attack;
public:
	string getName();
	int getHealth();
	void takeDamage(int damage);
	Item* dropItem();

	//���������Լ�
	//���� Ƚ���� ����� ���͸��� �ٸ���...
	virtual int getAttack() = 0;
};