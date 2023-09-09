#include <iostream>

int main()
{
    int n1, n2, n3, largest;
    std::cout<<"Enter three numbers: "<<std::endl;
    std::cin>>n1>>n2>>n3;
    if((n1>n2)&&(n1>n3)) largest=n1;
    else if (n2>n3) largest=n2;
    else largest=n3;
    std::cout<<"The largest number of the three is: "<<largest;
}