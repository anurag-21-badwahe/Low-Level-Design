#include <iostream>
using namespace std;

// Created a class
class Hero
{
public:
    // Properties
    int power;
    char name[100];
    char level;
};

int main()
{

    // Static Allocation
    Hero obj;
    cout << "Level of obj is " << obj.level << endl;

    // Dynamically Allocation
    Hero *obj2 = new Hero;
    cout << "Level of obj is " << (*obj2).level << endl;
    cout << "Level of obj is " << obj2->level << endl;
}