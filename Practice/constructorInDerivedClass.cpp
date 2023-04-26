#include <iostream>
using namespace std;

// Base class
class Shape {
   protected:
      int width;
      int height;
   public:
      Shape(int w, int h) {
         width = w;
         height = h;
      }
      virtual int area() = 0;
};

// Derived class
class Rectangle : public Shape {
   public:
      Rectangle(int w, int h) : Shape(w, h) { }
      int area() {
         cout << "Rectangle class area: " << endl;
         return (width * height);
      }
};

int main() {
   Shape *shape1;
   Rectangle rec(10,7);

   shape1 = &rec;

   // Call area of Rectangle
   cout << shape1->area() << endl;

   return 0;
}
