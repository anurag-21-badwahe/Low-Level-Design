#include<iostream>
using namespace std;
class Animal{
    public:
    void bark(){
        cout << "Barking Animal" << endl;
    }

};


class Dog : public Animal{
     public:
    void bark(){
        cout << "Barking Dog" << endl;
    }

};

int main(){
    Dog obj;
    obj.bark();

}