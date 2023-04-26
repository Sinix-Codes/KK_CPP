#include<iostream>
using namespace std;

class MyNum{
    public:
        int value;
        MyNum(int x)
        {
            value = x;
            cout<<value<<endl;
        }
};

class Mydouble{
    public:
        double value;
        Mydouble(MyNum x){
            value = (double)x.value;
            cout<<value; 
        }
};
int main(){
   MyNum x(10);
   Mydouble y = x;
   return 0;
}