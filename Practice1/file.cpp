#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // creating and writing to a file
  ofstream outfile;
  outfile.open("example.txt");
  outfile << "This is an example file." << endl;
  outfile.close();

  // reading from a file
  ifstream infile;
  string line;
  infile.open("example.txt");
  if (infile.is_open()) {
    while (getline(infile, line)) {
      cout << line << endl;
    }
    infile.close();
  } else {
    cout << "Unable to open file." << endl;
  }

  // appending to a file
  ofstream outfile2;
  outfile2.open("example.txt", ios::app);
  outfile2 << "This is another line." << endl;
  outfile2.close();

  // updating a file
  fstream file;
  file.open("example.txt");
  file.seekp(0, ios::end);
  file << "This is an update to the file." << endl;
  file.close();

  // error handling
  ifstream infile2;
  infile2.open("nonexistentfile.txt");
  if (infile2.is_open()) {
    while (getline(infile2, line)) {
      cout << line << endl;
    }
    infile2.close();
  } else {
    cout << "Error: Unable to open file." << endl;
  }

  return 0;
}
