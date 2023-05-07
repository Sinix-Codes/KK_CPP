/*
Aim : Write a program to implement functions 
using call by reference and return by
value concept. 
*/

// Code : 
#include <iostream>
using namespace std;

class adder{
    private :
        int x;
        int y;

    public:
        // Function prototype
static int sumAndSquare(int& a, int& b);
};


// Function definition
int adder :: sumAndSquare(int& a, int& b) {
  int sum = a + b;
  a *= a;
  b *= b;
  return sum;
}

int main() {
  int x, y, result;

  cout << "Enter two integers: ";
  cin >> x >> y;

  result = adder :: sumAndSquare(x, y);

  cout << "Square of x :  " << x << " and " <<"Square of y :  "<< y << "\nAddition of x and y :  " << result << endl;

  return 0;
}