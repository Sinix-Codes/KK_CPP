#include<iostream>
using namespace std;

class c1
{
private:
     int a;
     int b;
     int c;
public:
    c1(int a,int b,int c);
    c1(int a,int b);
    c1(int a);
    ~c1(){
        cout<<"\n------Deconstructor-----------";
    }
};

c1::c1(int a,int b,int c){
    cout<<"\nsum : "<<a+b+c;
}
c1::c1(int a,int b)
{
    cout<<"\nMult : "<<a*b;
}
c1::c1(int a)
{
    cout<<"\nSquare : "<<a*a;
}



int main(){
   c1 c(1,2,3),c2(3,4),c3(5);
   return 0;
}