//22070123081
#include<iostream>

int main()
{
    std::cout<<"Hello World\n";
    int a,b,sum,sub,mul;
    float div;
    std::cout<<"Enter a number\n";
    std::cin>>a;
    std::cout<<"Enter another number\n";
    std::cin>>b;
    sum=a+b;
    sub=a-b;
    div=a/b;
    mul=a*b;
    std::cout<<"Addition \n"<<sum<<"\n" ;
    std::cout<<"Substraction\n"<<sub<<"\n" ;
    std::cout<<"Division\n"<<div<<"\n" ;
    std::cout<<"Multiplication\n"<<mul<<"\n";
}