// Wrapping up data member and function in a single entitiy
#include <iostream>
using namespace std;
class Student{
    string name;
    int age;
    int rollNo;

public:
    string getName(){
        return this->name;
    }



};


int main(){

    Student first;
    

    cout << "Everything Fine" << endl;
    
}