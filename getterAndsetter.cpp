// Getter is setter is used to access the data member
#include <iostream>
using namespace std;

// Created a class
class Hero
{

private:
    string superPower;

public:
    // Properties
    int health;
    char name[100];
    char level;

    // getter
    string getSuperPower()
    {
        return superPower;
    }

    int getHealth()
    {
        return health;
    }

    void setHealth(int h)
    {
        health = h;
    }

    // setter
    void setSuperPower(string power)
    {
        superPower = power;
    }
};

int main()
{

    // Created object of Hero Type
    Hero obj;

    obj.setSuperPower("Fire");
    cout << "Super Power of Hero is " << obj.getSuperPower() << endl;

    obj.setHealth(10);
    cout << "Obj Health is " << obj.getHealth() << endl;

    // Let's see how the access the class properties or data member

    // cout << "Name of obj is " << obj.name << endl;
    // cout << "Health of obj is " << obj.health << endl;
}