#include<iostream>
using namespace std;

int main() {
    int celsius;
    cout<<"Enter the temperature in celsius: ";
    cin>>celsius;
    int fahrenheit = (celsius * 9/5) + 32;
    cout<<"The temperature in fahrenheit is: "<<fahrenheit<<endl;
    return 0;
}