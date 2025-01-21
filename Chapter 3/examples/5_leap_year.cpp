#include<iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0) {
        cout<<year<<" is a leap year. "<<endl;
    } 
    else if (year % 100 == 0) {
        cout<<year<<" is not a leap year. "<<endl;
    }
    else if (year % 100 != 0 && year % 400 == 0) {
        cout<<year<<" is a leap year. "<<endl;        
    } 
    else
<<<<<<< HEAD
        cout << year << " is a leap year." << endl;
=======
            cout << year << " is a leap year." << endl;
>>>>>>> fe6bbeabca111ab49b85f2fe8165bfcd4eb3afbb
    return 0;
}