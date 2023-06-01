#include<iostream>
using namespace std;

class Base{
    public:
    int base_Var;
        void display()
        {
            cout<<"Value of base_var is "<<base_Var<<endl;
        }
};

class Derived : public Base{
    public:
    int derived_Var;
        void display()
        {
            cout<<"Value of derived_var is "<<derived_Var<<endl;
        }
};

int main(){
   Derived derived_obj;
   Base base_obj;
   Base* Base_ptr;
   Base_ptr = &base_obj;
   Base_ptr->base_Var = 30;
   Base_ptr->display();
   
   Derived* Derived_ptr;
   Derived_ptr=&derived_obj;
   Derived_ptr->derived_Var = 40;
   Derived_ptr->display();
   return 0;
}