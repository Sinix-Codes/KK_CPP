/*
Write a program to implement
pointers concepts
*/

//Code :

#include<iostream>
using namespace std;
class my_vars{
    private:
        int v;
        int w;
        int x;
        int y;
    public:
        my_vars()
        {
            cout<<"Enter x : ";
            cin>>x;
            cout<<"\nEnter Y : ";
            cin>>y;

            this->v = x;
            this->w = y;
            cout<<v<<endl;
            cout<<w<<endl;
        }

        void show(){
            cout<<"This finction is called by pointer"<<endl;
        }
};
int main(){
   my_vars a;
   my_vars *ptr = &a;
    ptr->show();
    return 0;
}