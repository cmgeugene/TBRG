#pragma once
#include <iostream>
#include "Character.h"
#include "Monster.h"
#include "Slime.h"
#include "Orc.h"
#include <time.h>
#include <cstdlib>
#include <windows.h>		// 캐릭터 생성 시 약간 시간 걸리는 것처럼 보이기 위해 Sleep(1500) 사용하기 위해 

class GameManager {
public:
	Monster* generateMonster(int level);
	//BossMonster* generateBossMonster(int level);
	void battle(Character* player);
	void visitShop(Character* player);
	void displayInventory(Character* player);
};