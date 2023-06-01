#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  // print the number of command line arguments
  cout << "Number of arguments: " << argc << endl;

  // print each argument
  for (int i = 0; i < argc; i++) {
    cout << "Argument " << i << ": " << argv[i] << endl;
  }
  return 0;
}
