#include <iostream>
using namespace std;

// Created a class
class Hero
{
public:
    // Properties
    int superPower;
    char name[100];
    char health;

     // getter
    int getSuperPower()
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
    // Hero *obj2 = new Hero;
    Hero obj(4);
    cout << "Address of obj " << &obj << endl;
    // Constructor Automatically called at the time of object creation

    cout << "After Object Creation" << endl;

     obj.setHealth(10);


    //Copy Constructor
    Hero ram(obj);
    cout << "Ram health is" << ram.getHealth() << endl;
    cout << "Ram health is " << obj.getHealth() << endl;
    
}

//When you create your own Constructor default Constructor will Automatically die


