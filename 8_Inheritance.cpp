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

int main(){

    childClass Anu;
    parentClass Santosh;
    Anu.setWeight(80);
    Anu.setGender("Male");
    Santosh.setGender("Male");
    
    cout << "Anu Color is" << Anu.color << endl;
    cout << "Santosh Gender is " << Santosh.getGender() << endl;

}

///Must see Modes of Inheritance Table