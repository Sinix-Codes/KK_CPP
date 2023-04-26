#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "This is class A." << endl;
    }
};

class B {
public:
    void display() {
        cout << "This is class B." << endl;
    }
};

class C : public A, public B {
public:
    void display() {
        cout << "This is class C." << endl;
    }
};

class D : public C {
public:
    void display() {
        cout << "This is class D." << endl;
    }
};

int main() {
    A a;
    B b;
    C c;
    D d;

    a.display();
    b.display();
    c.A::display();
    c.B::display();
    c.display();
    d.display();

    return 0;
}
