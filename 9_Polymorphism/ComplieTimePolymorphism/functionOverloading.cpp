// In Compile Time Polymorphism there is function overloading


//function overloading => When there are multiple function in a class with same name but with different parameters these are callled function overloading
#include<iostream>
using namespace std;

class Total{
    public:

    int sum(int a, int b){
        return a+b;
    }

    int sum(int a, int b,int c){
        return a+b+c;
    }

};


int main(){

    Total money;
    cout << "Total Money with two Argument " <<  money.sum(90000,45000) << endl;
    cout << "Total Money with three Argument " << money.sum(90000,45000,89000) << endl;


}