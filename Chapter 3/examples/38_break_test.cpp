#include<iostream>
using namespace std;

int main()
{
    int i;
    for(i = 1; i<= 10; i++)
    {
        cout<<"Hello\n";
        if(i==5){
            exit(0); //stop the program
        }
    }

    cout<<"This is outside of for loop"<<endl;

    return 0;
}