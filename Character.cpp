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

    Character() :


public:

    static Character* getInstance(string name = "")
    {

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