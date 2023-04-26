#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int width;
    public:
    int kk;
        Rectangle(int len, int wid) {
            length = len;
            width = wid;
            kk=length;
        }
       
        int area() {
            return length * width;
        }
};

int main() {
    Rectangle r1(5, 10);
    Rectangle *p = &r1; // pointer to object r1
    cout << "Area of r1: " << p->area() << endl; // accessing member function using pointer
    cout << "Length of r1: " << p->kk<<endl; // accessing member variable using pointer
    return 0;
}
