#include <iostream>
using namespace std;

int main() {
   int var1 = 5;
   int *ptr;

   ptr = &var1;

   cout << "Value of var1 is: " << var1 << endl;
   cout << "Address of var1 is: " << &var1 << endl;
   cout << "Value of ptr is: " << ptr << endl;
   cout << "Value of var1 using ptr is: " << *ptr << endl;

   return 0;
}
