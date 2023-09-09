#include<iostream>
using namespace std;
int main()
{
    cout<<"Welcome to my calculator\nEnter '+' to add\nEnter '-' to subtract\nEnter '*' to multiply\nEnter '/' to divide\nEnter '%' to calculate modulus\nEnter '|' to calucate absolute value\nEnter '=' to display result\n";
    int b, result;
    char ch;
    cout<<"Enter a number: ";
    cin>>result;
    while (true)
    {
        cout<<"Enter an operator: ";
        cin>>ch;
        if (ch=='|') { result=abs(result); break;}
        else if (ch=='=') {break;}
        cout<<"Enter another number: ";
        cin>>b;
        switch(ch)
        {
            case '+':
            { result+=b; break;}
            case '-':
            { result-=b; break;}
            case '*':
            { result*=b; break;}
            case '/':
            { result/=b; break;}
            case '%':
            { result%=b; break;}
            default:
            cout<<"Invalid operator";
        }
    }
    cout<<"RESULT: "<<result;

}