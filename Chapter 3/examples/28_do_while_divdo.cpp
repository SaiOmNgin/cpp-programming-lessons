#include<iostream>
using namespace std;

int main() 
{
    long dividend, divisor;
    char ch;

    do
    {
        cout<<"Enter dividend: ";
        cin>>dividend;
        cout<<"Enter divisor: ";
        cin>>divisor;
        cout<<"Quotient is "<<dividend/divisor<<endl;

        cout<<"Want to continue? (y/n): ";
        cin>>ch;
    } while (ch == 'y'); //while(ch != 'n')
    return 0;
}