#include<iostream>
using namespace std;

// 1]  Inline fuction 
inline int prod(int a,int b)
{
    return a*b;
}

// 2] Friend function
class Student
{
    private:
        int password = 1232;
    public:
        float marks;
    
    friend float marksAdder(Student s);
};

float marksAdder(Student s)
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
   cout<<prod(5,4);      // code of fuction from line 4 to 7  comes at line 10
   Student s;
   cout<<marksAdder(s);
   return 0;
}

