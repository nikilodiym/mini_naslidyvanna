#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Square {
protected:
    double side;

public:
    Square(double s) {
        side = s;
    }

    double getSide() {
        return side;
    }

    double area() {
        return side * side;
    }
};

class Circle {
protected:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double getRadius() {
        return radius;
    }

    double area() {
        return 3.14159 * radius * radius;
    }
};

class InscribedCircle {
protected:
    Square square;
    Circle circle;

public:
    InscribedCircle(double s) : square(s), circle(s / 2.0) {}

    void display() {
        cout << "Square Side: " << square.getSide() << endl;
        cout << "Square Area: " << square.area() << endl;
        cout << "Circle Radius: " << circle.getRadius() << endl;
        cout << "Circle Area: " << circle.area() << endl;
    }
};

int main() {
    InscribedCircle shape(10.0);
    shape.display();

	system("pause");
    return 0;
}