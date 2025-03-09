#include<iostream>
using namespace std;
int main(){
    float firstNum, secondNum;
    char ch, oper;
    cout<<"Do you want to do Calculations?(y/n) ";
    cin>>ch;
    cout<<"Enter first number, operator, second number: ";
    cin>>firstNum>>oper>>secondNum;
    while(ch == 'y')
    {
        switch (oper){
            case '+': cout<<"Answer: "<<firstNum+secondNum<<endl;
            break;
            case '-': cout<<"Answer: "<<firstNum-secondNum<<endl;
            break;
            case '*': cout<<"Answer: "<<firstNum*secondNum<<endl;
            break;
            case '/': cout<<"Answer: "<<firstNum/secondNum<<endl;
            break;
            default: cout<<"Invalid operator."<<endl;
            break;

        }
        cout<<"Do you want to do Calculations?(y/n) ";
        cin>>ch;
        
    }
    return 0;
    
}