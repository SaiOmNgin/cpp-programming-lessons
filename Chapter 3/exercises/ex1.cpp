#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    for(int i=1; i<=30; i++)
    {
        cout<<setw(4)<<num*i;
        if(i%10 == 0)
            cout<<endl;
    }
    return 0;
}