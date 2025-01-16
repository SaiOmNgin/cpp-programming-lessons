#include<iostream>
using namespace std;

int main() 
{
    int num;
    cout<<"Enter a number to check if it is even or odd: ";
    cin>>num;

    if(num%2 == 0)
        cout<<"This number "<<num<<" is even"<<endl;
    else 
        cout<<"This number "<<num<<" is odd"<<endl;
    return 0;
}