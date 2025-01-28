#include<iostream>
using namespace std;

int main() {
    int y = 0;
    int x;
    cou<<"Enter x value: ";
    cin>>x;

    while(x!=0) 
    {
        y = y+x;
        cout<<"The answer is "<<y<<endl;

        cout<<"Enter x value: ";
        cin>>x;
    }

    return 0;
}