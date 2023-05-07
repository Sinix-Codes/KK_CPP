#include<iostream>
using namespace std;

class Vehicle
{
public:
    
    virtual void canFly()=0; 

};

class car : public Vehicle{
    void canFly()
    {
        cout<<"No it can't";
    }
};

class aeroplane : public Vehicle{
    void canFly()
    {
        cout<<"\nYes it can";
    }
};

int main(){
    Vehicle *v1 = new car;
    Vehicle *v2 = new aeroplane;

    v1->canFly();
    v2->canFly();

    return 0;
}