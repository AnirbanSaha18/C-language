//Add all the numbers of an array size 10;
#include<iostream>
using namespace std;
main()
{
    int a[10],size=10;
    int x=0;
    cout<<"Enter Ten numbers";
    int i;
    for(i=0;i<10;i++)
    {
        cin>>a[i];

    }
    for(i=0;i<size;i++)
        x=a[i]+x;
    cout<<"Sum of 10 numbers is"<<" "<<x;
    return 0;
}
