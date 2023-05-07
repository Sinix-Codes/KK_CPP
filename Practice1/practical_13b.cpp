#include <iostream>
using namespace std;

class Myexception : public exception
{
public:
    const char *what() const throw()
    {
        return "Divide by zero";
    }
};

int main()
{
    int a = 10, b = 0, c;
    try
    {
        if (b == 0)
        {
            throw Myexception();
        }
        else
        {
            c = a/b;
            cout << c;
        }
    }
    catch(exception &e){
        cout << "Exception : "<<e.what()<<endl;
    }
    return 0;
}