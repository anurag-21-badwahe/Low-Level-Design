#include<iostream>
using namespace std;

class Person {
public:
    int age;

    // Overloading the + operator
    void operator+(Person &otherPerson) {
        cout << "Current Person's Address: " << this << endl;
        cout << "Age of Current Person: " << this->age << " years" << endl;

        cout << "Other Person's Address: " << &otherPerson << endl;
        cout << "Age of Other Person: " << otherPerson.age << " years" << endl;

        int ageDifference = otherPerson.age - this->age;
        cout << "Age difference: " << ageDifference << " years" << endl;
    }
};

int main() {
    // Creating two Person objects
    Person person1, person2;

    // Setting the age for person1 and person2
    person1.age = 25;
    person2.age = 32;

    // Using the overloaded + operator to calculate age difference
    person1 + person2;

    return 0;
}
