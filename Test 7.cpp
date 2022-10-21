//Swap values of two int variables without using third variable
#include<iostream>
using namespace std;
main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a=   "<<a<<"b= "<<b;
    return 0;
}

