/*
Write a program to implement following 
concepts:
a) Virtual functions 
b) Pure virtual function
*/

#include<iostream>
using namespace std;

class employee{
    public:
        virtual void work(){
            cout<<"working";
        };
};

class swe : public employee{
    public: 
        void work(){
            cout<<"Data analyst ";
        }
};

class hwe : public employee{
    public:
        void work(){
            cout<< "\nLathe machine handling";
        }
};

int main(){
  swe a;
  a.work();

  hwe b;
  b.work(); 
   return 0;
}