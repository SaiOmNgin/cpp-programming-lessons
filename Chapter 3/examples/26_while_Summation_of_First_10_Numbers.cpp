#include<iostream>
using namespace std;

int main() 
{
    int sum = 0, i = 1;
    while(i<=10)
    {
        sum = sum + i;
        i++;
        //sum += i;
    }
    cout<<"Total is "<<sum<<endl;
    cout<<endl;
    return 0;
}