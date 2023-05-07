#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 0, c;
    
    try
    {
        if (b == 0)
        {
            throw runtime_error("Divide by ZERO Error");
        }
        else
        {
            c = a / b;
            cout << c;
        }
    }
    catch (exception &e)
    {
        cout << "Exception : " << e.what() << endl;
    }
    return 0;
}