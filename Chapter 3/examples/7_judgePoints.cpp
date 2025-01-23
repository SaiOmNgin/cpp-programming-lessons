#include<iostream>
using namespace std;

int main() {
    int points;
    cout<<"Enter points: ";
    cin>>points;
    if(points >= 80) {
        cout<<"Grade: A"<<endl;
    } else if(points >= 60) {
        cout<<"Grade: B"<<endl;
    } else if(points >= 40) {
        cout<<"Grade: C"<<endl;
    } else {
        cout<<"Grade: D"<<endl;
    } 
    return 0;
}