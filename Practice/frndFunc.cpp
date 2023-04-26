
#include <iostream>
using namespace std;

class student
{
private:
    int password = 132;
public:
    float marks;
    friend void marksAdder(student& a);
};

void marksAdder(student& a)
{
    int pass;
    cout << "Enter password";
    cin >>pass;
    if (pass == a.password)
    {
        cout << "Password correct!\n";
        cout <<"Enter marks to add : ";
        cin>>a.marks;
    }
    cout << "\nMarks of student a : ";
    cout << a.marks;
}

int main()
{
    student a;
    marksAdder(a);
    return 0;
}