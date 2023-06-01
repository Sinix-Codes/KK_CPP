// /*
// Write a program to implement operator 
// overloading (polymorphism). 
// */

// #include<iostream>
// using namespace std;

// class number{
//     public:
//         int a;
//         number(int b){
//             a=b;
//         }

//         // operator float(){
//         //     return float(a);
//         // } 

//         int operator + (int c){
//             return a+c;
//         }
// };

// int main(){
//    number x(20);
//    cout<<x.a;
//    cout<< endl<< x+30;
//    return 0;
// }

#include<iostream>
using namespace std;

class adder{
	public:
	int x;
    void setx()
    {
        cout<< "ENter value of x : ";
        cin>>x;
    }

	int operator ++ (){
		return x++;
	}

    int operator -(){
        x=-x;
        return x;
    }
    friend adder operator + (adder a,adder b);

};

adder operator + (adder a,adder b){
    adder temp;
    temp.x = a.x+b.x;
    return temp;
}

int main()
{
	adder a,b,c;
    a.setx();
    b.setx();

	++a;

    cout<<a.x;

    -a;

    cout<<a.x;

    c = a+b;
    cout <<"\nValue of c.x : " << c.x;

	return 0;
}