#include<iostream>
#include<fstream>
using namespace std;

int main(){
   ifstream inputfile;
   string filename = "output.txt";

    try
    {
        // inputfile.open(filename);
        if (!inputfile.is_open())
        {
            throw runtime_error("File is not opend");
        }

        inputfile.close();
    }
    catch(exception& e)
    {
        cerr << e.what() << '\n';
    }

   return 0;
}