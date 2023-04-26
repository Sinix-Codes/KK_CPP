#include<iostream>
using namespace std;

class Point
{
public: int x;
         int y;

    Point(int x,int y){
        this->x = x;
        this->y = y;
    }
    Point add(Point a)
    {
        return Point(this->x+a.x,this->y+a.y);
    }
};

int main(){
   Point a(10,20);
   Point b(30,40);
   Point c=a.add(b);
   cout<< c.x <<endl<< c.y;
   return 0;
}