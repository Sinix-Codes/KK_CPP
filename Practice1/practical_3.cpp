// Aim : Write a program to implement class and
// object concept and use various access 
// specifiers.

// Code : 

#include<iostream>
using namespace std;

class vehicle{
    private:
        int chassis;
    protected:
        int Vnumber;
    public:
        float price;
    
    void getdata(){
        cout<<"\nEnter Chassis Number : ";
        cin>>chassis;

        cout<<"\nEnter Vehicle number : ";
        cin>>Vnumber;

        cout<<"\nEnter Price : ";
        cin>>price;
    }

    void showChassis()
    {
        cout<<"\nChassis number is : "<<chassis;
    }

    void showVnumber()
    {
        cout<<"\nVehicle number is : "<<Vnumber;
    }
};

int main(){
   cout<<"Enter specifications of car : ";
   vehicle car,bike;
   car.getdata();
      //cout<<car.chassis; // inaccessible
   car.showChassis();
//    car.Vnumber;
    car.showVnumber();
   cout<<"\nPrice of car is : "<< car.price;



   cout<<"\nEnter specifications of bike : ";
   bike.getdata();

   bike.showChassis();
//    bike.Vnumber;
    bike.showVnumber();
   cout<<"\nPrice of bike is : "<< bike.price;
   return 0;
}