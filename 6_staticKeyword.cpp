#include <iostream>
using namespace std;

// Created a class
class Hero
{
public:
    // Properties
    static int invisiblePower;
};

// Define the static variable outside the class
int Hero::invisiblePower = 5;

int main()
{
    // Create an object of the Hero class
    Hero obj;
    
    // Access the static variable using the class name and the scope resolution operator
    cout << "Hero :: invisiblePower: " << Hero::invisiblePower << endl;

    //May in the terminal you are not getting any outputdue to some IDE problem

    //Output is -> Hero :: invisiblePower: 5

    return 0;
   
}
