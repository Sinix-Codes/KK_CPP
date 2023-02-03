#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int num1, num2;
    char operation;
    int grade;
    int *arr,nums;

    cout<<endl<<"Calculator : ('Switch case' and 'if-else' are used)"<<endl<<endl;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0)
        {
            cout << "Error: division by zero" << endl;
        }
        else
        {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        break;
    default:
        cout << "Error: invalid operator" << endl;
        break;
    }

    cout<<endl<<endl;



    cout<<endl<<"Grade Calculator : ('if-else ladder' is used)"<<endl<<endl;
    cout<<"Enter your Grade : (Between 0 to 100)";
    cin>>grade;
    if (grade >= 90)
    {
        cout << "A" << endl;
    }
    else if (grade >= 80)
    {
        cout << "B" << endl;
    }
    else if (grade >= 70)
    {
        cout << "C" << endl;
    }
    else if (grade >= 60)
    {
        cout << "D" << endl;
    }
    else
    {
        cout << "F" << endl;
    }

    cout<<endl<<endl<<"Bubble Sort : "<<endl;
    cout<<endl<<"Enter how many numbers you want to insert : ";
    cin>>nums;
    arr=(int *)malloc(nums*sizeof(int));
    cout<<endl<<"Enter the unsorted list : ";
    for (int i = 0; i < nums; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < nums; i++)
    {
        for (int j = i+1; j < nums; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
    cout<<endl<<endl<<"Sorted List is : ";
    cout<<"[";
    for (int i = 0; i < nums; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"]";
    return 0;
}