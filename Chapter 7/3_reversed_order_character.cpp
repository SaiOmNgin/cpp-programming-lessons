#include<iostream>
using namespace std;

int main() {
    char letter[5];
    
    for (int i = 0; i < 5; i++) 
    {
        cout << "Enter the value for index " << i << ": ";
        cin >> letter[i];
    }

    for (int i = 4; i >= 0; i--) 
    {
        cout << "Value of array index " << i << " is " << letter[i] << endl;
    }

    return 0;
}