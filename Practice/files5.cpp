#include<iostream>
#include<fstream>
using namespace std;


int main(){
   string buffer;
   
   char ch[20];
   
   char c;

   fstream fin("sample1.txt"),fout;
   fout.open("sample2.txt",ios::app);


   // Error Handling
   try{
   if (!fout.is_open())
   {
    throw runtime_error("File is not opened");  
   }
   }
   catch(exception& e){
      cerr<<e.what()<<endl;
   }

   if(!fin.is_open())
      fin.open("sample1.txt");
   

   // file pointer to the beginning
   fin.seekg(0,ios_base::beg);


   //copy single character
   fin.get(c);
   fout.put(c);


   // copy desired number characters 
   fin.read(ch,sizeof(ch));
   fout.write(ch,sizeof(ch));

   // file pointer to the end of the file to append the data
   fout.seekp(0,ios_base::end);

   //copy complete file
   while(getline(fin,buffer))
      fout<<buffer;

   
   fin.close();
   fout.close();
   return 0;
}