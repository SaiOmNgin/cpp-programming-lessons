#include<iostream>
using namespace std;

int main() 
{
    int sum = 0;
    for(int i = 1; i <= 10; i ++) 
    {
        sum = sum + i;
        //sum += i;
    }
    cout<<"Total is "<<sum<<endl;
    cout<<endl;
    return 0;
}