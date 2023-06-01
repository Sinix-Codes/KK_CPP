// #include<iostream>
// #include<exception>
// using namespace std;

// class invalid_fee : public exception{
//     public:
//         const char* what(){
//          return "Invalid fee entered !";
//     }
// };

// void feess()
// {
//     int fee;
//     invalid_fee err;
//      cout << "Enter the fees : "<<endl;
//      cin >> fee;
//      if (fee<100)
//      {
//         throw err;
//      }
// }

// int main(){
//    try
//    {
//        feess();
//    }
//    catch(exception&err)
//    {
//      cerr << err.what() << '\n';
//      return -1;
//    }
//    return 0;
// }




#include <iostream>
#include <stdexcept>
#include <exception>

using namespace std;

class invalid_age : public exception {
public:
    const char* what() { return "Invalid Age Provided!"; }
};

void MyFunc(int c) throw (invalid_age, invalid_argument)
{
    invalid_age err;
    if (c > 120)
        throw err; // Raise/Throw an exception
    if (c < 18)
        throw invalid_argument("Not Old Enough");
}

void YourFunc() throw (invalid_argument) 
{
    int n = 129; // dynamic resolution 
    try {
        MyFunc(n);
    } catch (invalid_age& e) {
        MyFunc(100);
    } catch (invalid_argument& e) {
        // non-trivial error
        throw e;
    }
}


int main()
{
    try
    {
        YourFunc(); //cause an exception to throw
    }
    catch (invalid_argument& e)
    {
        cerr << e.what() << endl;
        return -1;
    } 
    //...
    return 0;
}
