﻿#pragma once

#pragma region OriginalHeader
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <windows.h>
#include <conio.h>
#pragma endregion

#pragma region AddedHeader
#include "../headerFile/GameManager.h"
#include "../headerFile/Character.h"
#include "../headerFile/Item.h"
#include "../headerFile/Monster.h"
#include "../headerFile/Orc.h"
#include "../headerFile/Troll.h"
#include "../headerFile/Goblin.h"
#include "../headerFile/BossMonster.h"
#include "../headerFile/Shop.h"
#pragma endregion

using namespace std;


#pragma region GlobalVariable

GameManager* gameManager = nullptr;
Character* player = nullptr;
Shop* shop = nullptr;

#pragma endregion

int main() {
	gameManager = GameManager::GetInstance();
	player = Character::GetInstance();
	shop = Shop::GetInstance();

	string playerName = player->NameValidation();
	Monster* enemy = GameManager::GetInstance()->getMonster();
	
	Sleep(500);
	player->SetName(playerName);
	int i = 0;
	i=_getch();


	int stage = 1;
	int stageguide = 0;


	while (1)
	{
		stageguide = gameManager->firstPhase();

		if (stageguide == 1)
		{
			cout << "1번 선택" << endl;
			Sleep(500);
			cout << "몬스터와 조우!" << endl;
			Sleep(500);

			if (stage < 10)
			{
				gameManager->generateMonster();
				gameManager->battle(player, GameManager::GetInstance()->getMonster());
				stage++;
			}
			else
			{
				//한번에 battle함수로만 컨트롤 하고, monster generate에서 bossmonster를 생성하는 것도 
				gameManager->generateBossMonster();
				//gameManager->bossbattle(player, GameManager::GetInstance()->getBossMonster());
			}

		}
		else if (stageguide == 2)
		{
			cout << "2번 선택" << endl;
			Sleep(500);
			cout << "상점 오픈!" << endl;
			Sleep(500);

			gameManager->visitShop();
		}
		else if (stageguide == 3)
		{
			cout << "3번 선택" << endl;
			Sleep(500);
			cout << "상태보기" << endl;
			Sleep(500);

			gameManager->displayInventory(player);
			i = _getch();
		}
		else
		{
			cout << "다시 입력해주세요. " << endl;
			i = _getch();
			system("cls");
		}
		//Sleep(500);
	
	}
	return 0;
}
