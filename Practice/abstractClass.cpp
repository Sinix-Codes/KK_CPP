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
        cout<<"Yes it can";
    }
};

int main(){
    Vehicle *v1;
    car c1;
    aeroplane a1;

    v1 = &c1;
    v1->canFly();

    v1 = &a1;
    v1->canFly();

    return 0;
}