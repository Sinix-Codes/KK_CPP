#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
   char ch;
   char buffer[20];
   string buf;
   
   fstream fin("hello.txt"),fout;
   fout.open("output.txt" , ios::out | ios:: trunc);

//    fin.read(buffer,sizeof(buffer));
//    fout.write(buffer,sizeof(buffer));

    
    fout<<"Hello world this is test line";
    fin.seekg(10);
    // fout.seekp(10);


    // while (getline(fin,buf))
    // {
    //     fout<<buf;
    // }

   

   return 0;
}