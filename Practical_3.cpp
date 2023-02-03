#include <iostream>
using namespace std;

class Rectangle {
  public:
    int length;
    int breadth;

    void display() {
      cout << "Length: " << length << endl;
      cout << "Breadth: " << breadth << endl;
    }
    int area() {
      return length * breadth;
    }
};

int main() {
  Rectangle r;
  r.length = 10;
  r.breadth = 5;

  r.display();
  cout << "Area: " << r.area() << endl;
  return 0;
}