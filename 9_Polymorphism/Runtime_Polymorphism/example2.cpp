// Resource : https://www.codingninjas.com/studio/guided-paths/basics-of-c/content/118817/offering/1382251

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
    // void bark(){
    //     cout << "Barking Dog" << endl;
    // }

};

int main(){
    Dog obj;
    obj.bark();

}