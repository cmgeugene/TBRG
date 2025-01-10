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

    Character(string name) : name(name), level(1), health(200), maxHealth(200), attack(30), experience(0), gold(0)
    {
        cout << name << " 생성 :" << " 레벨, " << level << "체력: " << health << "경험치: " << experience << "골드: " << gold << endl;
    }

    Character(const Character&) = delete;
    Character& operator=(const Character&) = delete;

public:

    static Character* getInstance(string name)
    {
        if (instance == nullptr)
        {
            instance = new Character(name);
        }
        return instance;
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