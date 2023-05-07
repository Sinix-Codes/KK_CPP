#include <iostream>
#include <stdexcept>
using namespace std;

void someFunction()
{
    try {
        // Code that might throw an exception
        throw runtime_error("An error occurred.");
    } catch (const exception& e) {
        // Handle the exception or rethrow it
        cout << "Caught exception in someFunction(): " << e.what() << endl;
        throw; // Rethrow the exception
    }
}

int main()
{
    try {
        someFunction();
    } catch (const exception& e) {
        cout << "Caught exception in main(): " << e.what() << endl;
    }
    return 0;
}
