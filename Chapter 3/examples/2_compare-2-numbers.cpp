#include<iostream>
using namespace std;

int main() {
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;

    if(num1<num2) 
        cout<<"Maximum number is second number "<<num2<<endl;
    else
        cout<<"Maximum number is first number "<<num1<<endl;
    return 0;
}