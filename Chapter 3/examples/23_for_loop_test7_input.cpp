#include<iostream>
#include<iomanip>
using namespace std;

int main() 
{
    int number;
    cout<<"Enter number: ";
    cin>>number;
    for(int i=1;i<=12;i++)
    {
        cout<<setw(4)<<number
            <<setw(3)<<"x"
            <<setw(3)<<i
            <<setw(3)<<"="
            <<setw(4)<<number*i<<endl;
    }
    
    cout<<endl;
    return 0;
}