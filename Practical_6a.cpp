#include <iostream>
#include <cstring> // for using pre-defined string functions
using namespace std;

int main() {
    // a) String concatenation
    string str1 = "Kunal ";
    string str2 = "Khairnar";
    string concat_str = str1 + str2;
    cout << "Concatenated string: " << concat_str << endl;

    // b) String Comparison
    string str3 = "hello";
    string str4 = "world";
    int cmp_result = str3.compare(str4);
    if (cmp_result == 0) {
        cout << "Strings are equal." << endl;
    }
    else if (cmp_result > 0) {
        cout << "String 1 is greater than String 2." << endl;
    }
    else {
        cout << "String 1 is less than String 2." << endl;
    }

    // c) Find position of a character in a given string
    
    char ch = 'n';
    size_t pos = str1.find(ch);
    if (pos != string::npos) {
        cout << "Position of " << ch << " in " << str1 << ": " << pos << endl;
    }
    else {
        cout << ch << " not found in " << str1 << endl;
    }

    // d) String reversing
    string rev_str = "";
    for (int i = str1.length() - 1; i >= 0; i--) {
        rev_str += str1[i];
    }
    cout << "Reversed string: " << rev_str << endl;

    return 0;
}
