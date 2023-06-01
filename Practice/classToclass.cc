#include<iostream>
#include<string>
using namespace std;

class Myclass1{
    string a;
    public:
        Myclass1(){
            cout<< "Enter string";
            cin>>a;
        }
        string getString()
        {
            return a;
        }
};
class Myclass2{
    string b;
    public:
        void operator =(Myclass1 a)
        {
            b = a.getString();
        }
        
        void display()
        {
            cout<<b;
        }
};

int main(){
    Myclass1 a;
    Myclass2 b;
    
    b=a;
    b.display();

   return 0;
}