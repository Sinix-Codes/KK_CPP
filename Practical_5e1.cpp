// nesting of fuctions

#include <iostream>
using namespace std;

   int factorial(int smallest)
    {
        if (smallest == 0)
        {
            return 1;
        }
        else
        {
            return smallest * factorial(smallest - 1);
        }
    }

int factorialOfsmallest(int a, int b, int c)
{
    int smallest = a;
    if (b < smallest)
    {
        smallest = b;
    }
    if (c < smallest)
    {
        smallest = c;
    }
  
    return factorial(smallest);
}

int main()
{
    int a, b, c;
    cout << "Enter three numbers" << endl;
    cin >> a >> b >> c;
    cout << factorialOfsmallest(a, b, c);
    return 0;
}