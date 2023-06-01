#include<iostream>
using namespace std;

class base1{
    int data1;
    public:
        base1(int a){
            data1 = a;
        }
        void printbase1(){
            cout<<"This is base1 class "<<endl;
            cout<<"Data1 : "<<data1<<endl;
        }
};

class base2{
    int data2;
    public:
        base2(int a){
            data2 = a;
        }
        void printbase2(){
            cout<<"This is base2 class "<<endl;
            cout<<"Data2 : "<<data2<<endl;
        }
};

class derived : public base1,public base2{
    int derived1,derived2;
    public:
        derived(int a,int b,int c,int d):base1(c),base2(d){
            derived1 = a;
            derived2 = b;
        }
        
        void printderived()
        {
            cout<<"Derived1 = "<<derived1<<endl;
            cout<<"Derived2 = "<<derived2<<endl;
        }
};

int main(){
   derived d1(1,2,3,4);
   d1.printderived();
   d1.printbase1();
   d1.printbase2();
   return 0;
}