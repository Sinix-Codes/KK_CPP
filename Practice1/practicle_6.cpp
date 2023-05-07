/*Write a program to perform following
string operations using pre-defined string
functions and without using pre-defined
string functions :- 
a) String concatenation
b) String Comparison
c) Find position of an character in a given
string
d) String reversing
*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){
   string str1="ghbc";
   string str2="def";
   string str3=str1+str2;
   cout<<"\nConcatinated string is : "<<str3;
   
   //comparison
   int str_comp = str1.compare(str2);
   if(str_comp==0)
   {
    cout<<"\nStrings are equal"<<endl;
   }
   else if(str_comp>0)
   {
    cout<<"\nString 1 is greater than string 2"<<endl;
   }
   else{
    cout<<"\nString 2 is greater than string 1"<<endl;
   }

//position find
    char ch='b';
    int pos = str1.find(ch);
    if(pos != string::npos)
    {
        cout<<"Position of "<<ch<<" in "<<str1<<" is : "<<pos<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }


//reverse the string

string str_rev;
for (int i = str1.length()-1; i >=0; i--)
{
    str_rev+=str1[i];
}


cout<<endl<<str_rev;
   return 0;
}