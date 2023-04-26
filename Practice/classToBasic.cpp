#include<iostream>
using namespace std;

class Myclass{
    public: 
        int x;
        Myclass(int v){
            x=v;
        }
        operator int(){
            return x;
        }
};

int main(){
    
   Myclass v1(10);
   int x = v1;
   return 0;
}