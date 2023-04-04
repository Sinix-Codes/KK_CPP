#include <iostream>
using namespace std;

int main() {
    // a) String concatenation
    string str1 = "Kunal ";
    string str2 = "Khairnar";
    string concat_str = "";
    for (int i = 0; i < str1.length(); i++) {
        concat_str += str1[i];
    }
    for (int i = 0; i < str2.length(); i++) {
        concat_str += str2[i];
    }
    cout << "Concatenated string: " << concat_str << endl;

    // b) String Comparison
    int cmp_result = 0;
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            cmp_result = (str1[i] > str2[i]) ? 1 : -1;
            break;
        }
        i++;
    }
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
    size_t pos = string::npos;
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] == ch) {
            pos = i;
            break;
        }
    }
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
