#include<iostream>

using namespace std;    

int main() {
    int x=0, y=0;
    char ch;
    
    do {
       
        cout<<"Enter x: ";
        cin>>x;
        y=y+x;
        cout<<"The answer is "<<y<<endl;

        cout<<"Want to continue? (y/n): ";
        cin>>ch;
        if(ch == 'n') {
            break;
        }

    } while (ch == 'y') ;

    cout<<"The final answer is "<<y<<endl;
    return 0;
}