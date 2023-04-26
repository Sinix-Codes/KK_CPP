#include<iostream>
using namespace std;

class Vehicle {
public:
   int speed;
};

class Car : virtual public Vehicle {
public:
   int wheels;
};

class Bike : virtual public Vehicle {
public:
   int pedals;
};

class Sports_car : public Car, public Bike {
public:
   int seat;
};

int main() {
   Sports_car sc;
   sc.speed = 200;
   sc.wheels = 4;
   sc.pedals = 2;
   sc.seat = 2;

   cout<<"Speed of the car: "<<sc.speed<<endl;
   cout<<"No of wheels: "<<sc.wheels<<endl;
   cout<<"No of pedals: "<<sc.pedals<<endl;
   cout<<"No of seats: "<<sc.seat<<endl;
   return 0;
}
