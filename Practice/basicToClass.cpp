// 1) basic to class type conversion
#include<iostream>
using namespace std;

class Myclass{
    public:
        int x;
        Myclass(int v){
            x = v;
            cout<<x;
        }
};

int main(){
   int v=10;
   Myclass num = v;
   return 0;
}