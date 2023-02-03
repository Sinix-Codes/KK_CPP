#include <iostream>
using namespace std;

void addByValue(int x, int y) {
  x = x + y;
}

void addByReference(int &x, int &y) {
  x = x + y;
}

int main() {
  int a = 5, b = 10;
  addByValue(a, b);
  cout << "a after calling addByValue: " << a << endl;
  addByReference(a, b);
  cout << "a after calling addByReference: " << a << endl;
  return 0;
}