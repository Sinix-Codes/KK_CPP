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

        MyClass operator++(){
            ++value;
            cout<<value;
            return *this;
        }
};

int main(){
   MyClass m1;
   ++m1;
   return 0;
}
