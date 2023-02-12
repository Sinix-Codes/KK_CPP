#include<iostream>
using namespace std;

// 2] Friend function
class Student
{
    private:
        int password = 1232;
    public:
        float marks;
    
    friend float adder(Student s);
};

float adder(Student s)
{
    int pass;

    cout << "Enter Password"<<endl;
    cin >> pass;

    if (pass==s.password)
    {
        cout<<"Enter marks of student ";
        cin>>s.marks;     
    }

    return s.marks;
}

int main(){
   Student s;
   cout<<adder(s);
   return 0;
}