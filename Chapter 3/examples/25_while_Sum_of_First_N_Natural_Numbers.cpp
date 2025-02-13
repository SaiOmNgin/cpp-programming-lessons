#include<iostream>
using namespace std;

int main()
{
    int sum = 0, number, i=1;
    cout<<"Enter number: ";
    cin>>number;
    while(i<=number)
    {
        sum = sum + i;
        //sum += i;
        i++;
    }
    cout<<"Total is "<<sum<<endl;
    cout<<endl;
    return 0;
}