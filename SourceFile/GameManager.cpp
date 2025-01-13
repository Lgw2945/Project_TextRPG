#include "../headerFile/GameManager.h"
#include "../headerFile/Character.h"
#include "../headerFile/Shop.h"
#include "../headerFile/Orc.h"
#include "../headerFile/Goblin.h"
#include "../headerFile/Troll.h"
#include <iostream>


extern GameManager* gameManager;
extern Character* player;
//시작, 종료 대화 바꾸기
GameManager::GameManager()
{
	cout << "TMI 시작" << endl;
}

GameManager::~GameManager()
{
	cout << "종료" << endl;
}
//몬스터 랜덤 소환
Monster* GameManager::generateMonster()
{
	Monster* monster = nullptr;
	int type = rand() % 3; // 0, 1, 2 중 랜덤 선택 (Goblin, Orc, Troll)
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
	return monster;
}

BossMonster* GameManager::generateBossMonster()
{
	BossMonster* monster = new BossMonster;
	return monster;
}

void GameManager::battle(Character* player)
{
	/*
	while (player->gethealth() != 0 || monster->gethealth() != 0) // 캐릭터.h에 gethealth 추가
	{
	}
	*/
}

void GameManager::visitShop(Character* player)
{
	char visit;
	int shopcnt = 0;
	cout << "상점에 방문하시겠습니까? Y / N" << endl;
	cin >> visit;
	while (shopcnt == 0) {
		if (visit == 'Y' || visit == 'y')
		{
			player->visitShop();
			shopcnt++;
		}
		else if (visit == 'N' || visit == 'n')
		{
			cout << "공백?" << endl;
			shopcnt++;
		}
	}

}

void GameManager::displayInventory(Character* player)
{
	
	player->displayStatus();
}

//종합
void StartGame()
{
	/*
	while (player.level != 10) { 
		gameManager->generateMonster();
		gameManager->battle(player);
		gameManager->displayInventory(player);
		gameManager->visitShop(player);
	}
	*/
	gameManager->generateBossMonster();
	gameManager->battle(player);
}