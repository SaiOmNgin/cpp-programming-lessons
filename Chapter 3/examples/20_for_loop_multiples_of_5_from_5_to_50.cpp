#include<iostream>
using namespace std;

//display 5 to 50

int main() 
{
    for(int i = 1; i <= 50; i ++) 
    {
       if(i % 5 == 0)
       {
        cout<<i<<" ";
       }
    }
    cout<<endl;
    return 0;
}