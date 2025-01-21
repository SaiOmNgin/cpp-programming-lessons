#include<iostream>
using namespace std;

int main() {
    int arr[5];

    for(int i = 0; i < 5; i++) {
        cout << "Enter the value for index " << i << ": ";
        cin >> arr[i];
    }

    for(int i = 4; i >= 0; i--) {
        cout << "Value of array index " << i << " is " << arr[i] << endl;
    }
    return 0;
}