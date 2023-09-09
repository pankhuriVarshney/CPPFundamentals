#include<iostream>
using namespace std;
int main()
{
    string name,college;
    cout<<"Enter your name: ";
    getline(cin, name);    
    cout<<"Enter the name of your college: ";
    getline(cin, college);
    cout<<"Enter your age: ";
    int age; cin>>age;
    cout<<"Hello "<<name<<", I see you are "<<age<<" years old and are currently studying at "<<college;
}
