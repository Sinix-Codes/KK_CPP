 #include <iostream>
#include <string>
using namespace std;

int main() {
  string message = "Hello, World!";

  cout << endl;

  int n = message.length();
  for (int i = 0; i < n + 4; i++) {
    cout << "*";
  }
  cout << endl;
  cout << "* " << message << " *" << endl;
  for (int i = 0; i < n + 4; i++) {
    cout << "*";
  }
  cout << endl << endl;

  return 0;
}