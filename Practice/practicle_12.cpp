/*
Write a program to perform various 
operations using File concepts 
*/

#include<iostream>
#include<fstream>
using namespace std;

int main(){
   fstream os;
//    os.open("Example.txt",ios::in);
//    string line;
//  while (getline(os, line)) {
       
//         // Print line (read from file) in Console
//         cout << line << endl;
//     }

    os.open("Example.txt",ios::app);

//    os.open("Example.txt",ios::out);
   os << "this is Text\n";
   os.close();
   return 0;
}