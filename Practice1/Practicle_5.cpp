// /*
// Aim : 
// Write a program to implement
// following concepts: 
// a) Inline functions 
// b) Friend functions 
// c) Static function 
// d) Object as a function argument and 
// returning object
// e) Nesting of functions 
// */

// //code : 

// #include<iostream>
// using namespace std;

// class Myclass{
//     private:
//         int x;
//     public:
//         Myclass(){
//         }

//         Myclass(int b){
//             x=b;
//         }

//         inline int square_a(int a){
//           return a*a;
//         }

//         static void cube(int d){
//             cout<<"\nCube : "<<d*d*d;
//         }

//         friend int value_x(Myclass a2);
        
//         void show()
//         {
//             cout<<endl<<x;
//         }

//         Myclass add(Myclass a2)
//         {
//              Myclass temp(x+a2.x); 
//              temp.show();
//              return temp;
//         }
// };

// int value_x(Myclass a){
//     cout<< "\na1.x : " << a.x;
// }


// int main(){
   
//    Myclass a1(7);
//    value_x(a1); // Friend Function

//     Myclass :: cube(10); // Static Function

//     Myclass p1(20);

//     Myclass p2 = p1.add(a1); // returning object & nesting of function
//     p2.show(); 

//    cout<< "\nSquare : "<< a1.square_a(10); // inline function
//    return 0;
// }


#include<iostream>
using namespace std;
class myclass{
	private:
		int x;
	public:
		myclass(){}
		myclass(int b)
		{
			x=b;
		}

        void getval(){
            cout<<"Enter value of x : ";
            cin >> x;
        }

		void show(){
			cout<<"Value of x = "<<x<<endl;
		}
		
		myclass add(myclass a2)
		{
			myclass temp(x+a2.x);
				temp.show();
				return temp;
		}
		
};

int main()
{
    cout<<"FOR Class A : ";
	myclass a;
    a.getval();

    cout<<"\nFOR Class A2 : ";
	myclass a2;
    a2.getval();
	myclass a3 = a2.add(a);
	return 0;
}