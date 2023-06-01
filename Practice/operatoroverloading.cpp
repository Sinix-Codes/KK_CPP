#include<iostream>
using namespace std;

class MyClass{
    public:
        int value;
        MyClass()
        {
            cout<<"Enter value: ";
            cin>>value;
        }

        friend int operator++(MyClass& a);
};

  int operator++(MyClass& a){
            ++a.value;
            // cout<<a.value;
            return a.value;
        }


int main(){
   MyClass m1;
   ++m1;
   cout<<m1.value;
   return 0;
}
