#pragma once
#include <iostream>
#include "Character.h"
#include "Monster.h"
#include "Slime.h"
#include "Orc.h"
#include <time.h>
#include <cstdlib>
#include <windows.h>		// ĳ���� ���� �� �ణ �ð� �ɸ��� ��ó�� ���̱� ���� Sleep(1500) ����ϱ� ���� 

class GameManager {
public:
	Monster* generateMonster(int level);
	//BossMonster* generateBossMonster(int level);
	void battle(Character* player);
	void visitShop(Character* player);
	void displayInventory(Character* player);
};