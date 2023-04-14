#include <iostream>
#include <exception>

using namespace std;

double divide(double x, double y) {
   if(y == 0) {
      throw runtime_error("Division by zero");
   }
   return x / y;
}

int main() {
   double a = 10, b = 0, c;
   try {
      c = divide(a, b);
   }
   catch(exception& e) {
      cout << "Exception: " << e.what() << endl;
   }
   return 0;
}
