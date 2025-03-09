#include<iostream>
using namespace std;
int main(){
    float firstNum, secondNum;
    char ch, oper;
   
    do
    {
        cout<<"Enter first number, operator, second number: ";
        cin>>firstNum>>oper>>secondNum;
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
        
    }while(ch == 'y');
    
    return 0;
    
}