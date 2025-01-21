#include<iostream>
using namespace std;

int main() {
    char letter[5];
    
    for (int i = 0; i < 5; i++) 
    {
        cout << "Enter characters at address" << i << ": ";
        cin >> letter[i];
    }

    for (int i = 4; i >= 0; i--) 
    {
        cout << "Reversed ordered Characters " << i << " is " << letter[i] << endl;
    }

    return 0;
}