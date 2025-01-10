#include <iostream>
using namespace std;

class Airplane {
private:
    static Airplane* instance; // 유일한 비행기 객체를 가리킬 정적 포인터
    int positionX;             // 비행기의 X 위치
    int positionY;             // 비행기의 Y 위치

    // private 생성자: 외부에서 객체 생성 금지
    Airplane() : positionX(0), positionY(0) {
        cout << "Airplane Created at (" << positionX << ", " << positionY << ")" << endl;
    }

public:
    // 복사 생성자와 대입 연산자를 삭제하여 복사 방지
    Airplane(const Airplane&) = delete;
    Airplane& operator=(const Airplane&) = delete;

    // 정적 메서드: 유일한 비행기 인스턴스를 반환
    static Airplane* getInstance() {
        if (instance == nullptr) {
            instance = new Airplane();
        }
        return instance;
    }

    // 비행기 위치 이동
    void move(int deltaX, int deltaY) {
        positionX += deltaX;
        positionY += deltaY;
        cout << "Airplane moved to (" << positionX << ", " << positionY << ")" << endl;
    }

    // 현재 위치 출력
    void getPosition() const {
        cout << "Airplane Position: (" << positionX << ", " << positionY << ")" << endl;
    }
};

// 정적 멤버 초기화
Airplane* Airplane::instance = nullptr;

// 메인 함수 (사용 예시)
int main() {
    // 유일한 비행기 인스턴스를 가져옴
    Airplane* airplane = Airplane::getInstance();
    airplane->move(10, 20);  // 비행기 이동
    airplane->getPosition();

    // 또 다른 요청도 같은 인스턴스를 반환
    Airplane* sameAirplane = Airplane::getInstance();
    sameAirplane->move(-5, 10); // 비행기 이동
    sameAirplane->getPosition();

    return 0;
}