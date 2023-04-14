#include <iostream>
#include <exception>

using namespace std;

class MyException: public exception {
   public:
      const char* what() const throw() {
         return "My exception occurred";
      }
};

double divide(double x, double y) {
   if(y == 0) {
      throw MyException();
   }
   return x / y;
}

int main() {
   double a = 10, b = 0, c;
   try {
      c = divide(a, b);
   }
   catch(MyException& e) {
      cout << "Exception: " << e.what() << endl;
   }
   return 0;
}
