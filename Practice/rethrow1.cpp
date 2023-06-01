#include<iostream>
#include<exception>
using namespace std;

class invalid_age : public exception{
    public:
        const char* what(){
            return "Invalid age!";
        }
};

void MyFunc(int c)
{
    invalid_age err;
    if(c>125)
        throw err;
    if(c<18)
        throw invalid_argument("Not old Enough");
}

void thisFunc()
{
    int age;
    cout << "Enter the age : ";
    cin >> age;
    try
    {
        MyFunc(age);
    }
    catch(invalid_age& err)
    {
        MyFunc(70);
    }
    catch(invalid_argument& e)
    {
        throw e; // Rethrowing the error
    }
    
}

int main(){
   try
   {
    thisFunc();
   }
   catch(invalid_age& e)
   {
     cerr << e.what() << '\n';
     return -1;
   }
   return 0;
}