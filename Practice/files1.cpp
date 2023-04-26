#include<iostream>
#include<fstream>

using namespace std;

int main(){
   string st="Hey there its Sinix here...";
    string st2;
   string st4 = "Hello";
    ofstream out("file1.txt");
    out<<st;

   out.seekp(10);

   ofstream fout("file1.txt",ios::app);
   fout<<st4;



    // ifstream in("file1.txt");
    // getline(in,st2);
    // cout<<st2;

   //  ofstream out("file1.txt",ios::app);
   //  out<<"This is appended text";
   return 0;
}