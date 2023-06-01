#include<iostream>
using namespace std;

class circle{
    public:
    int radius;
    circle(){
        cout<<"Enter radius of circle ";
        cin>>radius;
    }
    inline void area(){
        cout<<"Area of circle is "<<2*3.14*radius;
    }
};

int main(){
   circle c1;
   c1.area();
   return 0;
}