#include <iostream>
#include <vector>
#include <string>


using namespace std;

class Character
{
private:

    static Character* instance;

    string name;

    int level;

    int health;

    int maxHealth;

    int attack;

    int experience;

    int gold;

    vector<Item*> inventory;

public:

    Character(string name = "") : name(name), level(1), heelth(200), int maxHealth(200), attack(30), experience(0), gold(0)
    {
        cout << name << " 생성 :" << level << " 레벨, " << "체력: " << heelth << "경험치: " << experience << "골드: " << gold << endl;
    }

    static Character* getInstance(string name = "")
    {
        if (instance == nullptr)
        {
            instance = new Character();
        }
    }

    void displayStatus()
    {

    }

    void levelUp()
    {

    }

    void useltem(int index)
    {

    }

};