#include<iostream>
using namespace std;

class adder{
	public:
	int x;
	adder(int b)
	{
		x=b;
	}

	adder(){
		x=0;
	}

    void print()
	{
		cout<<"Value of x"<< x<<endl;
	}


	friend adder operator + (adder m,adder n
	);

};

adder operator +(adder m,adder n)
{
	adder temp;
	temp.x = m.x +n.x;
	return temp;
}

int main()
{
	adder a(10);
	adder b(20);
	adder c;
    c = a+b;
	cout << c.x;
	return 0;
}