#include<iostream>
#include<iomanip>
using namespace std;

int main() 
{
    int type;
    cout<<"Type 1 to convert Fahrenheit to Celsius, "<<endl<<"     "<<setw(1)<<"2 to convert Celsius to Fahrenheit: ";
    cin>>type;

    if(type == 1 ) 
    {
        int ftemp;
        cout<<"Enter temperature in Fahrenheit: ";
        cin>>ftemp;
        int ctemp = (ftemp-32) * 5/9;
        cout<<"The temperature in Celsius: "<<ctemp<<endl;
    }
    else if(type == 2) 
    {
        int ctemp;
        cout<<"Enter temperature in Celsius: ";
        cin>>ctemp;
        double ftemp = (ctemp * 9/5)+32;
        cout<<"The temperature in Fahrenheit: "<<ftemp<<endl;
    }
    else
        cout<<"You have entered the wrong type for calculations of temperature."<<endl;
    return 0;
   
}