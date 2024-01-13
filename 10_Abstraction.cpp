#include <iostream>

using namespace std;

// Abstraction example
class Shape {
public:
    // Pure virtual function makes this class abstract
    virtual void draw() = 0;  // Abstract method
};

class Circle : public Shape {
public:
    void draw() override {
        // Implementation details for drawing a circle
        cout << "Drawing a circle." << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        // Implementation details for drawing a square
        cout << "Drawing a square." << endl;
    }
};

int main() {
    // Using the abstraction
    Shape* myCircle = new Circle();
    Shape* mySquare = new Square();

    // Polymorphic behavior through the abstraction
    myCircle->draw();
    mySquare->draw();

    // Clean up memory
    delete myCircle;
    delete mySquare;

    return 0;
}
