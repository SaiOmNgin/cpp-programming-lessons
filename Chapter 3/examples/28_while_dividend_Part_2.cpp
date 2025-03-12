#include<iostream>
using namespace std;

int main() 
{
    long dividend, divisor;
    char ch;

    cout<<"Want to do some calculation? (y/n): ";
    cin>>ch;
    while (ch == 'y')
    {
        cout<<"Enter dividend: ";
        cin>>dividend;
        cout<<"Enter divisor: ";
        cin>>divisor;
        if(divisor == 0) 
        {
            cout<<"Illegal divisor!"<<endl;
            continue;
        }
        cout<<"Quotient is "<<dividend/divisor<<endl;
        cout<<"Remainder is "<<dividend%divisor<<endl;
        
        cout<<"Want to continue? (y/n): ";
        cin>>ch;
    } while (ch == 'y'); //while(ch != 'n')
    return 0;
}