#include<iostream>
using namespace std;

int main() 
{
    int sum = 1, i = 1;
    while(i<=5)
    {
        sum = sum * i;
        i++;
        //sum += i;
    }
    cout<<"Total is "<<sum<<endl;
    cout<<endl;
    return 0;
}