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


    Hero(){
        cout << "Constructor Called" << endl;
    }


    ~Hero(){
        cout << "Destructor Called" << endl;
    }
};

int main()
{

    // Created object of Hero Type statically
    Hero obj;

    // Created object of Hero Type Dynamically
    Hero *obj1 = new Hero();

    //Manually Destructor called for Dynamically created obj
    delete obj1;

}

//Imp Point :- Destructor Automatically called only for static obj if you want to call Destructor for Dynamically object created you have to use keyword delete