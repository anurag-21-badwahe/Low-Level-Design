#include<iostream>
using namespace std;
class Operator{
    public:
    int a ;

    void bracket[] () {
        cout << "I am a Bracket"  << this->a << endl;
    }

};

int main(){

    Operator obj;
    obj.a = 10;
    obj[];

}