#include <iostream>
using namespace std;

// Created a class
class Hero
{
public:
    // Properties
    int health;
    char name[100];
    char level;

    // Constructor
    Hero()
    {
        cout << "Constructor Called" << endl;
    }

    // Parameterized Constructor
    Hero(int health)
    {
        this->health = health;
        cout << "Address of this Keyword " << this << endl;
        //This Keyword Store the Address pf Current Object
    }
};

int main()
{

    cout << "Before Object Creation" << endl;
    // Created object of Hero Type statically
    Hero *obj2 = new Hero;
    Hero obj(4);
    cout << "Address of obj " << &obj << endl;
    // Constructor Automatically called at the time of object creation

    cout << "After Object Creation" << endl;
}