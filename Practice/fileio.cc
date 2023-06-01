#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // fstream, ifstream, ofstream
    char ch;
    char buffer[10];
    string buf;

    fstream fin("hello.txt"), fout;
    fout.open("output.txt", ios::out | ios::trunc);

    // fin.get(ch); // single character
    // fout.put(ch); // put single character

    // number of characters
    // fin.read(buffer, sizeof(buffer));
    // fout.write(buffer, sizeof(buffer));

    // // read a whole line
    // fout << "Hello World this is sample text";
    // fin.seekg(10);
    // fout.seekp(10);

    // while (getline(fin, buf)) 
    //     fout << buf << '\n';

    // if (fin.eof()) {
    //     cout << "End Of FILE\n";
    // }

    // getline(fin, buf);
    // if (fin.fail()) {
    //     cout << "Failed to Read\n";
    // }

    // fin.close();
    // fout.close();

    // if (!fin.is_open()) {
    //     cout << "File is Closed\n";
    // }

    // try {
    //     fstream newfile("nonexisting.txt", ios::in);
    //     if (!newfile.is_open()) {
    //         throw fstream::failure("File Does Not Exist");
    //     }
    // } catch (fstream::failure& e) {
    //     cout << e.what() << endl;
    //     return -1;
    // }


    return 0;
}
