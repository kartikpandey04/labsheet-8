#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    virtual void area() = 0;  // Pure virtual function
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }

    void area() {
        cout << "Area of Circle = " << 3.14159 * radius * radius << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void area() {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};

int main() {
    Shape* s;

    // Circle object
    s = new Circle(5);
    s->area();

    // Rectangle object
    s = new Rectangle(4, 6);
    s->area();

    return 0;
}
