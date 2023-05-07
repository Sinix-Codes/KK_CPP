#include<iostream>
using namespace std;

inline float interest(float p, float t, float r = 0.05){
   return p+p*t*r;
}

int main()
{
   float p,t,r;
   cout<<"Enter the Principal :"<<endl;
   cin>>p;
   cout<<"Enter the Time :"<<endl;
   cin>>t;

   cout<<"You will receive "<<interest(p,t)<<" rupees"<<endl;
   cout<<"If you are a subscriber then You will receive "<<interest(p,t,1.0)<<" rupees";
   return 0;
}