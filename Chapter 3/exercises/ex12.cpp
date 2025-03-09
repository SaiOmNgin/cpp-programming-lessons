#include<iostream>
using namespace std;

int main() {
    int a, b, c, d, result_top, result_bottom;
    char dummychar, oper, ch; string answer;
    do
    {
        /* code */
        cout<<"Enter first fraction(e.g. 1/2): "; cin>>a>>dummychar>>b;
        cout<<"Enter second fraction(e.g. 2/5): "; cin>>c>>dummychar>>d;
        cout<<"Enter operator(+, -, *, /): "; cin>>oper;
        switch (oper){
            case '+': result_top = (a*d)+(c*b);result_bottom = b*d; answer = "Addition";break;
            case '-': result_top = (a*d)-(c*b);result_bottom = b*d; answer = "Difference";break;
            case '*': result_top = (a*c)+(b*d);result_bottom = b*d; answer = "Product";break;
            case '/': result_top = (a*d)+(c*b);result_bottom = b*d; answer = "Quotient";break;
            default: cout<<"Invalid operator."<<endl;break;
        }

        cout<<answer<<" of fraction numbers is "<<result_top<<"/"<<result_bottom<<endl;
        cout<<"Do you want to do Calculations?(y/n) ";
        cin>>ch;
    } while (ch != 'n');
    return 0;
}