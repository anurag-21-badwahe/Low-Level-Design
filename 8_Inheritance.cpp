// Syntax
#include<iostream>
using namespace std;
class parentClass{
    public:
    string gender;
    string color;
    int height;

    void setGender(string g){
        this->gender = g;
    }
    string getGender(){
        return this->gender;
    }


};

class childClass : public parentClass{
    public:
    int weight;

    int setWeight(int W){
        this->weight = W;
    }

};

class childClass2 : protected parentClass{
    public:
    string name;

    int getHeight(){
        return this->height;
    }
};

int main(){

    childClass Anu;
    childClass2 Rahul;
    parentClass Santosh;
    Anu.setWeight(80);
    Anu.setGender("Male");
    Santosh.setGender("Male");
    
    cout << "Anu Color is" << Anu.color << endl;
    cout << "Santosh Gender is " << Santosh.getGender() << endl;


    cout << "Name of Rahul is" << Rahul.name << endl;
    // cout << "height of Rahul is" << Rahul.height<< endl; // It can get the height because access modifier is private
    cout << "height of Rahul is" << Rahul.getHeight() << endl; 

}

///Must see Modes of Inheritance Table

// Also study types of Inheritance