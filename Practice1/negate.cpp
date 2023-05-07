#include<iostream>
using namespace std;

class adder{
	public:
	int x;
	adder(int b)
	{
		x=b;
	}

	int operator -(){
		x=-x;
	return x;
	}

};

int main()
{
	adder a(10);
	cout<<-a;
	return 0;
}