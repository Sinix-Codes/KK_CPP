#include<iostream>
using namespace std;

class A{
    public:
        int a;
        int b;
    private:
        int c;
};

// Single inheritance
class B : public A{
    public:
        void display(){
            cout<<"a: "<<a<<endl;
            cout<<"b: "<<b<<endl; // Accessible
            //cout<<"c: "<<c<<endl; // Not Accessible
        }
};

// Multilevel inheritance
class C : public B{
    public:
        void show(){
            cout<<"a: "<<a<<endl;
            cout<<"b: "<<b<<endl;
            //cout<<"c: "<<c<<endl;
        }
};

// Multiple inheritance
class D{
    public:
        int d;
};

class E{
    public:
        int e;
};

class F : public D, public E{
    public:
        void print(){
            cout<<"d: "<<d<<endl;
            cout<<"e: "<<e<<endl;
        }
};

// Hierarchical inheritance
class G : public A{
    public:
        void display(){
            cout<<"a: "<<a<<endl;
            cout<<"b: "<<b<<endl;
            //cout<<"c: "<<c<<endl;
        }
};

class H : public A{
    public:
        void show(){
            cout<<"a: "<<a<<endl;
            cout<<"b: "<<b<<endl;
            //cout<<"c: "<<c<<endl;
        }
};

// Hybrid inheritance
class I : public G, public F{
    public:
        void print(){
            cout<<"a: "<<a<<endl;
            cout<<"b: "<<b<<endl;
            cout<<"d: "<<d<<endl;
            cout<<"e: "<<e<<endl;
        }
};

int main(){
    // Single inheritance
    B obj1;
    obj1.a = 10;
    obj1.display();

    // Multilevel inheritance
    C obj2;
    obj2.a = 20;
    obj2.display();
    obj2.show();

    // Multiple inheritance
    F obj3;
    obj3.d = 30;
    obj3.e = 40;
    obj3.print();

    // Hierarchical inheritance
    G obj4;
    obj4.a = 50;
    obj4.display();

    H obj5;
    obj5.a = 60;
    obj5.show();

    // Hybrid inheritance
    I obj6;
    obj6.a = 70;
    obj6.b = 80;
    obj6.d = 90;
    obj6.e = 100;
    obj6.print();

    return 0;
}