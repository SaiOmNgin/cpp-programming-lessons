#include<iostream>
using namespace std;

int main() 
{
    int num, mark=0;
    cout<<"What is the answer of 10 + 5? Enter a number: ";
    cin>>num;
    if(num==15)
    {
        cout<<"Your answer is correct."<<endl;
        mark+=1;
    }
    else
        cout<<"Your answer is not correct. The correct answer is 15"<<endl;

    cout<<"What is the answer of 10 - 5? Enter a number: ";
    cin>>num;
    if(num==5)
    {
        cout<<"Your answer is correct."<<endl;
        mark+=1;
    }

    else
        cout<<"Your answer is not correct. The correct answer is 5"<<endl;

    cout<<"What is the answer of 10 * 5? Enter a number: ";
    cin>>num;
    if(num==50)
    {
        cout<<"Your answer is correct."<<endl;
        mark+=1;
    }

    else
        cout<<"Your answer is not correct. The correct answer is 50"<<endl;
    
    cout<<"What is the answer of 10 / 5? Enter a number: ";
    cin>>num;
    if(num==2)
    {
        cout<<"Your answer is correct."<<endl;
        mark+=1;
    }

    else
        cout<<"Your answer is not correct. The correct answer is 2"<<endl;
    cout<<"You are very excellent. Mark is "<<mark<<endl;
    return 0;
}