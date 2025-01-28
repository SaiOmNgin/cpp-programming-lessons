#include<iostream>

using namespace std;    

int main() {
    int x=0, y=0;
    char ch;
    cout<<"Do you want to start a program? (y/n): ";
    cin>>ch;
    while (ch == 'y') {
       
        cout<<"Enter x: ";
        cin>>x;
        y=y+x;
        cout<<"The answer is "<<y<<endl;

        cout<<"Want to continue? (y/n): ";
        cin>>ch;
        if(ch == 'n') {
            break;
        }

    }
    return 0;
}