// Nesting of member functions

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    void checkBinary(void);

public:
    void read(void);
    void onesComplement(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter any number" << endl;
    cin >> s;
}

void binary::display(void)
{
    cout << s << endl;
}

void binary::checkBinary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary" << endl;
            exit(0);
        }
    }
}

void binary::onesComplement(void)
{
    checkBinary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

int main()
{
    binary s;
    s.read();
    // void checkBinary(void); no need to call this fuction in main as it it nested earlier
    s.display();
    s.onesComplement();
    s.display();
    return 0;
}