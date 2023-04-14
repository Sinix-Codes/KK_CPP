#include <iostream>
using namespace std;

class MyClass {
   public:
      int num;

      // Constructor
      MyClass(int n) {
         num = n;
      }
};

int main() {
   // Declare a pointer to a MyClass object
   MyClass* ptr;

   // Create a new MyClass object and assign its address to the pointer
   ptr = new MyClass(42);

   // Use the arrow operator to access the member variable of the object through the pointer
   cout << "num = " << ptr->num << endl;

   // Delete the dynamically allocated object to avoid memory leaks
   delete ptr;

   return 0;
}
