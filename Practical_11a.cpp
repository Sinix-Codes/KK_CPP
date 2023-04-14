// Virtual function

#include <iostream>
using namespace std;

class Shape {
   public:
      virtual void draw() {
         cout << "Drawing a shape." << endl;
      }
};

class Circle : public Shape {
   public:
      void draw() {
         cout << "Drawing a circle." << endl;
      }
};

int main() {
   Shape* shapePtr;
   Circle circleObj;

   shapePtr = &circleObj;
   shapePtr->draw(); // calls the Circle::draw() function

   return 0;
}
