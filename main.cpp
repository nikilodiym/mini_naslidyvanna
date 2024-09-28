#include <iostream>
#include <string>

using namespace std;

template <typename T1, typename T2>
class Base {
public:
    T1 value1;
    T2 value2;

    Base(T1 v1, T2 v2) {
        value1 = v1;
        value2 = v2;
        cout << "Base Constructor Called\n";
    }

    void display() {
        cout << "Base Values: " << value1 << ", " << value2 << endl;
    }
};

template <typename T1, typename T2, typename T3, typename T4>
class Child : public Base<T1, T2> {
public:
    T3 value3;
    T4 value4;

    Child(T1 v1, T2 v2, T3 v3, T4 v4) : Base<T1, T2>(v1, v2) {
        value3 = v3;
        value4 = v4;
        cout << "Child Constructor Called\n";
    }

    void display() {
        Base<T1, T2>::display();
        cout << "Child Values: " << value3 << ", " << value4 << endl;
    }
};

template <typename T1, typename T2, typename T5, typename T6>
class Child2 : public Base<T1, T2> {
public:
    T5 value5;
    T6 value6;

    Child2(T1 v1, T2 v2, T5 v5, T6 v6) : Base<T1, T2>(v1, v2) {
        value5 = v5;
        value6 = v6;
        cout << "Child2 Constructor Called\n";
    }

    void display() {
        Base<T1, T2>::display();
        cout << "Child2 Values: " << value5 << ", " << value6 << endl;
    }
};

int main() {
    Child<int, int, int, int> child(1, 2, 3, 4);
    child.display();

    Child2<int, int, int, int> child2(1, 2, 5, 6);
    child2.display();

    system("pause");    
    return 0;
}
