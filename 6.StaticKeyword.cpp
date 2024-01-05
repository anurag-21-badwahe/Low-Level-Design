#include <iostream>
using namespace std;

// Created a class
class Hero
{
public:
    // Properties
    static int invisiblePower;
    
};
// datatype Classname {Scope Resolution Object} property
int Hero :: invisiblePower = 5;

int main()
{
    // Hero obj;
    cout << "Hero :: invisiblePower" << Hero :: invisiblePower;

}

// Static Keyword belong to the class not to object