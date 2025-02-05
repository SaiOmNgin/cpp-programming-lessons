#include<iostream>
using namespace std;

int main() 
{
    int num1, num2, tmp;

    cout<<"Enter first number: ";
    cin>>num1; //3

    cout<<"Enter second number: ";
    cin>>num2; //4

    tmp = num1;
    num1 = num2;
    num2 = tmp;

    cout<<'\n'<<"After swapping "<<'\n'<<"first number is "<<num1<<'\n'<<" second number is "<<num2<<endl;
    
    return 0;
}