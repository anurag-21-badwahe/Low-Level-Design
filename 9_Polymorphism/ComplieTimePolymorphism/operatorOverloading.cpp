
// Operator overloading is used to overload or redefines most of the operators available in C++. It is used to perform the operation on the user-defined data type.

// In the below example we are overloading '+' opearator by '-'
#include <iostream>
using namespace std;

class Opovld
{
public:
    int a;
    int b;

    // Overloading the + operator
    void operator+(Opovld &obj)
    {
        int val1 = this->a; // Gets the 'a' member of the current object
        int val2 = obj.a;
        cout << "Output: " << val2 - val1 << endl;
    }
};

int main()
{
    Opovld obj1, obj2;

    obj2.a = 7; // Corrected to set the 'a' member for obj2
    obj1.a = 4;

    obj1 + obj2;

    return 0;
}
