#include<iostream>
using namespace std;
int main() {
    int arr[5] = {5, 10, 15, 20, 15 };
    int i = 0, sum = 0;
    for (i = 0 ; i < 5; i++) 
    {
        cout<< "value of array index "<<i<<" is "<< arr[i]<<endl;
        sum = sum + arr[i];
    }
    cout<<"Final result is "<<sum<<endl;
    return 0;
}
