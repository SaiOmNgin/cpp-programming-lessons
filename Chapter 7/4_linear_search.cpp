#include<iostream>
using namespace std;

int main() {
    char ch[5] = {'A', 'B', 'C', 'D', 'E'};
   
    char searchChar = 'C';

    for(int i = 0; i < 5; i++) {
        if(ch[i] == searchChar) {
            cout<<"Character found at index "<<i<<endl;
            break;
        }
                
        else
            cout<<"Character not found"<<endl;
    }
    return 0;
}