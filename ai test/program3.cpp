#include<iostream>
using namespace std;

int main()
{
    double celsius,fahrenheit;
    cout<<"Enter the temperature in celsius : ";
    cin>>celsius;

    fahrenheit=(celsius*9/5)+32;

    cout<<"Temperature in fahrenheit : "<<fahrenheit<<endl;
    return 0;
}
