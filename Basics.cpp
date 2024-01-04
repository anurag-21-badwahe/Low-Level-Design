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

    // Created object of Hero Type
    Hero obj;

    cout << sizeof(obj) << endl; // 108
    // Print the size that is taken by its Properties

    // Let's see how the access the class properties or data member

    cout << "Name of obj is " << obj.name << endl;
    cout << "Power of obj is " << obj.power << endl;
}