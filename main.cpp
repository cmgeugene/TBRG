#include <iostream>
#include "GameManager.h"
#include <windows.h>		// 캐릭터 생성 시 약간 시간 걸리는 것처럼 보이기 위해 Sleep(1500) 사용하기 위해 
using namespace std;

int main() {
	// 1. 캐릭터 생성
	string name;
	cout << "==================================" << endl;
	cout << "       환영합니다. 모험가님!\n";
	cout << "==================================" << endl;
	cout << " 캐릭터명을 입력하세요 : ";
	getline(cin, name);			// 이름이 공백이면 다시 입력하도록
	cout << endl;

	Character* player = Character::getInstance(name);
	cout << "** 캐릭터 [" << name << "] 생성 완료! **" << endl;

	player->displayStatus();

	while (player->getHealth() > 0) {
		// 2. 캐릭터 전투
		battle(player);
		

		// 3. 전투 종료 시 보상 획득


		// 4. 상점 방문
		int select = 0;
		cout << "1. 상점   2. 전투" << endl;
		if (select == 1)
			visitShop(player);

		break;
	}

	// 5. 게임 종료

	return 0;
}