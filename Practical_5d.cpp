#include <iostream>
using namespace std;

// d) Object as a function argument and returning object
class Student
{
private:
    int password = 1232;

public:
    char name[20];
    int marks;

    int display(Student s)
    {
        int pass;

        cout << "Enter Password" << endl;
        cin >> pass;

        if (pass == s.password)
        {
            cout << "Enter marks of student ";
            cin >> s.marks;
            return s.marks;
        }
        else
        {
            cout << endl
                 << "Wrong Password!" << endl;
            return 0;
        }
    }
};

int main()
{
    Student s1, s2;
    cout << s1.display(s1);
    cout << s2.display(s2);
    return 0;
}
