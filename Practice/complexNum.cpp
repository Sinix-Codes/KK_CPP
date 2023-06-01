#include<iostream>
using namespace std;

class Complex{
    private:
        double real;
        double imag;

    public:
        Complex(double r=0.0,double i = 0.0):real(r),imag(i){}

        void setNum()
        {
            cout << "Enter Real number : ";
            cin >> real;
            cout << "Enter Imaginary number : ";
            cin>> imag;
        }

        friend Complex operator +(Complex a,Complex b);
        void display()
        {
            cout<<"result : "<<this->real<<" "<<this->imag<<endl;
        }
};

Complex operator +(Complex a,Complex b){
    Complex result;
    result.real = a.real+b.real;
    result.imag = a.imag+b.imag;
    return result;
}
int main(){
   Complex a,b,c;
   a.setNum();
   b.setNum();
   c = a+b;
   c.display();
   return 0;
}