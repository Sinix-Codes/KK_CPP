#include<iostream>
using namespace std;

class cls2;
class cls1{
    private:
        int no1;
    public:
        void get1(){
            cout<<"Enter no1 : ";
            cin>>no1;
        }
        friend void smallest(cls1 no1, cls2 no2);
};
class cls2{
    private:
        int no2;
    public:
        void get1(){
            cout<<"Enter no2 : ";
            cin>>no2;
        }
        friend void smallest(cls1 no1, cls2 no2);
};

void smallest(cls1 a,cls2 b){
    if( a.no1 > b.no2 )
    {
        cout<<"No2 is smaller";
    }
    else{
        cout<<"No2 is smaller";
    }
}

int main(){
   cls1 a;
   cls2 b;
   a.get1();
   b.get1();
   smallest(a,b);
   return 0;
}