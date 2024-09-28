#include <iostream>
#include <string>

using namespace std;

class Base {
public:
    int value1;
    int value2;

    Base(int v1, int v2) {
        value1 = v1;
        value2 = v2;
        cout << "Base Constructor Called\n";
    }

    void display() {
        cout << "Base Values: " << value1 << ", " << value2 << endl;
    }
};

class Child : virtual public Base {
public:
    int value3;
    int value4;

    Child(int v1, int v2, int v3, int v4) : Base(v1, v2) {
        value3 = v3;
        value4 = v4;
        cout << "Child Constructor Called\n";
    }

    void display() {
        Base::display();
        cout << "Child Values: " << value3 << ", " << value4 << endl;
    }
};

class Child2 : virtual public Base {
public:
    int value5;
    int value6;

    Child2(int v1, int v2, int v5, int v6) : Base(v1, v2) {
        value5 = v5;
        value6 = v6;
        cout << "Child2 Constructor Called\n";
    }

    void display() {
        Base::display();
        cout << "Child2 Values: " << value5 << ", " << value6 << endl;
    }
};

class GrandChild : public Child, public Child2 {
public:
    GrandChild(int v1, int v2, int v3, int v4, int v5, int v6)
        : Base(v1, v2), Child(v1, v2, v3, v4), Child2(v1, v2, v5, v6) {
        cout << "GrandChild Constructor Called\n";
    }

    void display() {
        Child::display();
        Child2::display();
    }
};

int main() {
    GrandChild gc(1, 2, 3, 4, 5, 6);
    gc.display();

    system("pause");
    return 0;
}
