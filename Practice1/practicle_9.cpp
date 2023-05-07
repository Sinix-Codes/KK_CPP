/*
Write a program to implement following 
types of inheritances using various access 
specifiers :- 
a) Single inheritance
b) Multilevel inheritance
c) Multiple inheritance
d) Hierarchical inheritance
e) Hybrid inheritance
*/

//Code :

#include<iostream>
using namespace std;

class Animal{
    public:
        void walk(){
        string walk="\nI can Walk";
        cout<< walk;
        }
};

class cat : virtual public Animal{
    public:
        void meow()
        {
            cout<<"\nmewoooo";
        }
        void walk(){
            cout << "No i wont walk";
        }
};

class grumpy: public cat{
    public:
        void whoAmI()
        {
            cout<<"\nI am Grumpy Cat";
        }
};  

class dog : virtual public Animal{
    public:
        void bark(){
            cout<<"\nbowwow";
        }
};

class catdog : public dog , virtual public cat{
    
};

int main(){
    cat a;
    a.walk();
    a.meow();

    grumpy g;
    g.whoAmI();
    g.walk();
    g.meow();

    dog d;
    d.walk();
    d.bark();

    catdog cd;
    cd.bark();
    cd.meow();
    cd.dog::walk();

   return 0;
}