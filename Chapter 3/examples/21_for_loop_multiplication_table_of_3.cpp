#include<iostream>
#include<iomanip>
using namespace std;

//increment by 3
int main()
{
    for(int i=1;i<=12;i++)
    {
        cout<<setw(4)<<3
            <<setw(3)<<"x"
            <<setw(3)<<i
            <<setw(3)<<"="
            <<setw(4)<<3*i<<endl;
    }
    return 0;
}