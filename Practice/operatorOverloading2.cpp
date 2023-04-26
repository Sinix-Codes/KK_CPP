#include<iostream>
using namespace std;

class Negate{
    private:
        int x;
        int y;
    public:
        Negate(int a,int b){
            x=a;
            y=b;
        }
        
        void display(){
            cout<<x<<"\t"<<y<<endl;
        }

        void operator -(){
            x = -x;
            y = -y;
        }
};

int main(){
   Negate n(10,20);
   n.display();
   -n;
   n.display();
   return 0;
}