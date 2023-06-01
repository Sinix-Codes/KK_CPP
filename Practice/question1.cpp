#include<iostream>
using namespace std;

class MyClass{
    int b;
    public:
    static int a;
        MyClass(){
            cout<<"Default constructor"<<endl;
            a++;
        }
        // MyClass ()=default;
        MyClass(int c):b(c){
            a++;
            cout<<"value of b = "<<c;
        }

       static void getcount()
        {
            cout<<"Number of objects created : "<<a<<endl;
        }

        ~MyClass(){
            a--;
            cout<<"Destructor"<<endl;
        }
};

int MyClass :: a=0;

int main(){
   MyClass *ab= new MyClass();
   MyClass *bc= new MyClass();
   MyClass *cd= new MyClass(2);
   MyClass::getcount();

   delete bc;

   MyClass::getcount();
   return 0;
}