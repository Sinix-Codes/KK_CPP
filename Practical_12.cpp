#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class FileHandler {
   private:
      ofstream fout; // output file stream object
      ifstream fin; // input file stream object
   public:
      void WriteToFile(string filename, string data) {
         fout.open(filename); // open file for writing
         fout << data; // write to file
         fout.close(); // close file
      }
      string ReadFromFile(string filename) {
         string line;
         fin.open(filename); // open file for reading
         getline(fin, line); // read from file
         fin.close(); // close file
         return line;
      }
      void AppendToFile(string filename, string data) {
         fout.open(filename, ios::app); // open file in append mode
         fout << data; // append to file
         fout.close(); // close file
      }
      void ReadFileLines(string filename) {
         string line;
         fin.open(filename); // open file for reading
         while(getline(fin, line)) { // read from file line by line
            cout << line << endl; // output read line
         }
         fin.close(); // close file
      }
};

int main() {
   FileHandler fh;

   // Writing to a file
   fh.WriteToFile("example.txt", "Hello, World!");

   // Reading from a file
   string line = fh.ReadFromFile("example.txt");
   cout << line << endl;

   // Appending to a file
   fh.AppendToFile("example.txt", " This is appended text.");

   // Reading from a file again
   fh.ReadFileLines("example.txt");

   return 0;
}
