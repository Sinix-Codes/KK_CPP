#include<iostream>
using namespace std;

class Animal{
    public:
        virtual void speak(){
            cout<<"Hello"<<endl;
        }
};

class Cat : public Animal{
    public: 
        void speak(){
            cout << "Mewoooo"<<endl;
        }
};

class Dog : public Animal{
    public: 
        void speak(){
            cout << "Barking..";
        }
};

int main(){
   Animal *animal;
   Animal a;
   Cat cat;
   Dog dog;

   animal = &a;
   animal->speak();
   animal = &cat;
   animal->speak();
   animal = &dog;
   animal->speak();
   return 0;
}