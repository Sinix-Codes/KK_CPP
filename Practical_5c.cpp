#include<iostream>
using namespace std;

// 3] Static functions

class People
{
    private:
       int id;
       static int count;

       public:
        void setData(void)
        {
            cout <<"Enter the id"<<endl;
            cin>>id;
            count++;
        } 
        void getData(void)
        {
            cout <<"The id of this employee is "<<id<<" And this employee number is "<<count<<endl;
        } 

        static void getCount(void)
        {
            cout<<"Count of objects is "<<count<<endl;
        }
};

int People::count;//so now any object can use it and it will act statically for each of them.


int main(){
   People sinix,kunal,jett;

   sinix.setData();
   sinix.getData();
   People::getCount();

   kunal.setData();
   kunal.getData();
   People::getCount();

   jett.setData();
   jett.getData();
   People::getCount();

   return 0;
}