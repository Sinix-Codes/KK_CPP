/*
Write a program to implement class and
object concept and use various access 
specifiers
*/

#include<iostream>
using namespace std;

class RectBase{
protected: 
    int length;
    int breadth;
public:
    RectBase(){
        length=1;
        breadth=1;
    }

    RectBase(int l,int b){
        length=l;
        breadth=b;
    }
    friend ostream& operator << (ostream& os, RectBase bs);
};

class Rect: public RectBase{
    private:
        int area;
    public:
        int peri;
        void getin()
        {
            cout<<"Enter the length : ";
            cin>>length;        
            cout<<"\nEnter the breadth : ";
            cin>>breadth;        
        }

        Rect(int l=1,int b=1):RectBase(l,b){
            getin();
            area = length * breadth;
            cout<<"Area : "<<area;
            peri = 2*(length+breadth);
            cout<<"\nPerimeter : "<<peri;
        }
};

ostream& operator<<(ostream& os, RectBase bs)
{
    // "<RectBase length="1 "breadth="1>
    os << "<RectBase length=" << bs.length << " breadth=" << bs.breadth << ">";

    return os; 
}

int main(){
    Rect r1;
    
    RectBase in1, in2(7, 6);
    // cout<<r1.area;
    // cout<<r1.length;
    // cout<<r1.breadth;

    (cout << in1) << endl;
    // // (cout) << endl;
    // cout << in2 << endl;

    // cout << in1.length;  // inaccessible variable, gives error

   return 0;
}

