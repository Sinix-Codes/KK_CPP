#include<iostream>
using namespace std;

int main(){
   string a = "COMPUTER";
   string b = "ENGINEERING";
    int d;
   string c;

   d = a.length(); 
   cout<<d;
   for (int i = 0; i < d; i++)
   {
        c[i]=a[i];
   }
   
   for (int j = 0; j < b.length(); j++)
   {
        c[d] += b[j];
        d++;
   }
   
   cout<<c;

   return 0;
}