#include<iostream>
using namespace std;

int main() {
    int y = 0;
    int x;
    cout<<"Enter x value: ";
    cin>>x;

    do
    {
        y = y+x;
        cout<<"The answer is "<<y<<endl;

        cout<<"Enter x value: ";
        cin>>x;
    } while(x!=0);

    cout<<"The final answer is "<<y<<endl;
    return 0;
}