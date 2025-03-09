#include<iostream>
using namespace std;

int main() {
    int a, b, c, d, result_top, result_bottom;
    char dummychar;
    cout<<"Enter first fraction(e.g. 1/2): "; cin>>a>>dummychar>>b;
    cout<<"Enter second fraction(e.g. 2/5): "; cin>>c>>dummychar>>d;
    result_top = (a*d)+(c*b);
    result_bottom = b*d;
    cout<<"Sum of fraction numbers is "<<result_top<<"/"<<result_bottom<<endl;
    return 0;
}