#include<iostream>
using namespace std;

int main() 
{
    int n, factorial = 1;
    cout<<"Enter number for calculating factorial: ";
    cin>>n;
    for(int i = 1; i <= n; i++) 
    {
        factorial = factorial * i;
    }
    cout<<"!"<<n<<" = "<<factorial<<endl;
    cout<<endl;   
    return 0;
}