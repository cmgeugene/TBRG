#include <iostream>
#include "GameManager.h"
#include <windows.h>		// ĳ���� ���� �� �ణ �ð� �ɸ��� ��ó�� ���̱� ���� Sleep(1500) ����ϱ� ���� 
using namespace std;

int main() {
	// 1. ĳ���� ����
	string name;
	cout << "==================================" << endl;
	cout << "       ȯ���մϴ�. ���谡��!\n";
	cout << "==================================" << endl;
	cout << " ĳ���͸��� �Է��ϼ��� : ";
	getline(cin, name);			// �̸��� �����̸� �ٽ� �Է��ϵ���
	cout << endl;

	Character* player = Character::getInstance(name);
	cout << "** ĳ���� [" << name << "] ���� �Ϸ�! **" << endl;

	player->displayStatus();

	while (player->getHealth() > 0) {
		// 2. ĳ���� ����
		battle(player);
		

		// 3. ���� ���� �� ���� ȹ��


		// 4. ���� �湮
		int select = 0;
		cout << "1. ����   2. ����" << endl;
		if (select == 1)
			visitShop(player);

		break;
	}

	// 5. ���� ����

	return 0;
}