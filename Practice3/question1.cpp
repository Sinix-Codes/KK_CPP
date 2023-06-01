#include <iostream>
using namespace std;

class MyClass
{
private:
    int a;

public:
    void getData()
    {
        cout << "Enter value of a : ";
        cin >> a;
    }
    void MySum(MyClass b)
    {
        cout << "\nSum is : " << a + b.a << endl;
    }
};

int main()
{
    MyClass c1, c2;
    c1.getData();
    c2.getData();
    c1.MySum(c2);
    return 0;
}