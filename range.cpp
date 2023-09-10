#include<iostream>
//function to calculate and display range of each data type
void rangeof(int size)
{
    //calc the number of bits of a datatype by size*8
    int n=size*8;
    //range of signed data type= -2^(no. of bits -1) to 2^(no. of bits-1)-1
    std::cout<<"SIGNED: "<<(-1*(pow(2,n-1)))<<" to "<<(pow(2,n-1)-1)<<std::endl;
    //range of unsigned data type= 0 to (2^no. of bits)-1
    std::cout<<"UNSIGNED: 0 to "<<(pow(2,n)-1)<<std::endl;
}
int main()
{
    short int a;
    int b;
    long int c;
    float d;
    double e;
    char f;
    std::cout<<"Range of CHAR:\n"; 
    //call rangeof() with sizeof(char) as parameter, which passes the value of bytes used by char
    rangeof(sizeof(f)); 
    std::cout<<"Range of SHORT INT:\n"; 
    //call rangeof() with sizeof(short int) as parameter, which passes the value of bytes used by short int
    rangeof(sizeof(a));
    std::cout<<"Range of INT:\n"; 
    //call rangeof() with sizeof(int) as parameter, which passes the value of bytes used by int 
    rangeof(sizeof(b));
    std::cout<<"Range of LONG INT:\n"; 
    //call rangeof() with sizeof(long int) as parameter, which passes the value of bytes used by long int
    rangeof(sizeof(c));
    std::cout<<"Range of FLOAT:\n"; 
    //call rangeof() with sizeof(float) as parameter, which passes the value of bytes used by float
    rangeof(sizeof(d));
    std::cout<<"Range of DOUBLE:\n"; 
    //call rangeof() with sizeof(double) as parameter, which passes the value of bytes used by double
    rangeof(sizeof(e));
}
