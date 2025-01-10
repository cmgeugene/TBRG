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
	cout << "  " << monster->getName() << " �߰� (HP:" << monster->getHealth() << ", DAMAGE:" << monster->getAttack() << ")" << endl;
	cout << "**********************************" << endl;

	// ���� ����
	while (1) {
		cout << "���� ��" << endl;
		break;
	}

	// ���� ���� ������ ��
	// ���Ͱ� ���� Ȯ�������� �����ϰ�
	// �÷��̾� ����
	// ���� ����
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

