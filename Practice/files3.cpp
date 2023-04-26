#include <iostream>
#include <fstream>
using namespace std;

int main() {
   // Open a file for writing
   ofstream myfile("example.txt");
   
   // Open a file for reading
   ifstream myfile("example.txt");
   
   // Open a file for both reading and writing
   fstream myfile("example.txt");

   return 0;
}
