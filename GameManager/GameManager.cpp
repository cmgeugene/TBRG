#include "GameManager.h"

Monster* GameManager::generateMonster(int level)
{
	srand((unsigned int)time(NULL));

	int randomMonster = rand() % 2;
	Monster* monster = nullptr;

	switch (randomMonster) {
	case 0:
		monster = new Slime(level);
		break;
	case 1:
		monster = new Orc(level);
		break;
	default:
		break;
	}

	return monster;
}

//BossMonster* GameManager::generateBossMonster(int level)
//{
//
//}

void GameManager::battle(Character* player)
{
	Monster* monster = generateMonster(player->getLevel());

	cout << "**********************************" << endl;
	cout << "  " << monster->getName() << " 발견 (HP:" << monster->getHealth() << ", DAMAGE:" << monster->getAttack() << ")" << endl;
	cout << "**********************************" << endl;

	// 전투 시작
	while (1) {
		cout << "전투 중" << endl;
		break;
	}

	// 누가 먼저 공격할 지
	// 몬스터가 낮은 확률적으로 공격하고
	// 플레이어 공격
	// 몬스터 공격
	// ...

	//srand((unsigned int)time(NULL));
	//int strikeFirst = rand() % 100;	// 0 ~ 99

	//if (strikeFirst < 30)
	//{
	//	
	//}
}

void GameManager::visitShop(Character* player)
{

}

void GameManager::displayInventory(Character* player)
{

}

