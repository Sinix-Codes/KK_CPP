/*
Write a program to implement type 
conversion concept
*/

#include<iostream>
using namespace std;

class base{
    public:
        float v;
        operator int(){     // class to basic
            return int(v);
        }

        base(float b){  //basic to class
            v=b;
            cout<<v;
        }

        base(){
        }
};
class base1{
    public:
        float w;
        base1(base b){  
            w = b.v;        // class to class
            cout<<endl<<w;
        }
};

int main(){
   base a,b(2.4);
   base1 c(9);
   a.v = 123.321;
   cout << endl<<int(a);
   return 0;
}