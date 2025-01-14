#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <iostream>
#include <thread> // sleep_for
#include <chrono> // �ð� ���� ���
#include "Monster.h"
#include "BossMonster.h"
#include "Character.h"
#include "Orc.h"
#include "Troll.h"
#include "Goblin.h"

using namespace std;

//Singleton Pattern
class GameManager
{
private:
	static GameManager* instance;

	GameManager();
	~GameManager();
	
	GameManager(const GameManager&) = delete;
	GameManager& operator=(const GameManager&) = delete;

public:
	static GameManager* GetInstance() {
		if (instance == nullptr) {
			instance = new GameManager();
		}
		return instance;
	}

	Monster* generateMonster();
	BossMonster* generateBossMonster();
	void battle(Character* player, Monster* monster);
	void visitShop(Character* player);
	void displayInventory(Character* player);
};


GameManager* GameManager::instance = nullptr;

//����, ���� ��ȭ �ٲٱ�
GameManager::GameManager()
{
	cout << "TMI ����" << endl;
}

GameManager::~GameManager()
{
	cout << "����" << endl;
}

//���� ���� ��ȯ
Monster* GameManager::generateMonster()
{
	Monster* monster = nullptr;
	int type = rand() % 3; // 0, 1, 2 �� ���� ���� (Goblin, Orc, Troll)
	switch (type) {
	case 0:
		monster = new Goblin();
		break;
	case 1:
		monster = new Orc();
		break;
	case 2:
		monster = new Troll();
		break;
	}
	cout << monster << "�� �����ߴ�!" << endl;
	return monster;
}

BossMonster* GameManager::generateBossMonster()
{
	BossMonster* monster = new BossMonster;
	cout << "���� ���� " << monster << "�� ��Ÿ����!" << endl;
	return monster;
}

void GameManager::battle(Character* player, Monster* monster)
{
	while (player->gethealth() != 0 || monster->GetHealth() != 0) // ĳ����.h�� gethealth �߰�
	{
		//�÷��̾� ����
		cout << player->getname() << "�� ����! " << player->getattack() << "�� ����" << endl;
		this_thread::sleep_for(chrono::seconds(1 / 2));
		monster->TakeDamage(player->getattack());
		cout << monster->GetName() << "�� ���� ü�� " << monster->GetHealth() << endl;
		this_thread::sleep_for(chrono::seconds(1));
		//���� ����
		cout << monster->GetName() << "�� ����! " << monster->GetAttack() << "�� ����" << endl;
		this_thread::sleep_for(chrono::seconds(1 / 2));
		player->TakeDamage(monster->GetAttack());
		cout << player->getname() << "�� ���� ü�� " << player->gethealth() - monster->GetAttack() << endl;
		this_thread::sleep_for(chrono::seconds(1));
	}
}

void GameManager::visitShop(Character* player)
{
	char visit;
	int shopcnt = 0;
	cout << "������ �湮�Ͻðڽ��ϱ�? Y / N" << endl;
	cin >> visit;
	while (shopcnt == 0) {
		if (visit == 'Y' || visit == 'y')
		{
		//	player->visitShop();
			shopcnt++;
		}
		else if (visit == 'N' || visit == 'n')
		{
			cout << "����?" << endl;
			shopcnt++;
		}
	}

}

void GameManager::displayInventory(Character* player)
{
	cout << "(�÷��̾� �̸�)�� ����" << endl << "ü�� : " << player->gethealth() << endl << "���ݷ� : " << endl << " ����ġ : " << endl << "��� : " << endl; //ĳ���� - ��� 
	//or
	//cout << player->displayStatus();
}

//����
void StartGame()
{
	//GameManager* gameManager = GameManager::GetInstance();
	//Character* player = Character::GetInstance();
	Monster* monster = nullptr;
	BossMonster* bossMonster = new BossMonster;
	/*
	while (player->getlevel() != 10) { // ĳ����.h�� getlevel �߰�
		gameManager->generateMonster();
		gameManager->battle(player, monster);
		gameManager->displayInventory(player);
		gameManager->visitShop(player);
	}
	gameManager->generateBossMonster();
	gameManager->battle(player, monster);
	*/
	cout << "�¸��߽��ϴ�! " << endl;
}


#endif