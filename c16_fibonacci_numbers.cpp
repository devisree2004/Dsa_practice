#include<iostream>
using namespace std;
int main()
{
    int i,fib1=0,fib2=1,fib=0;
    int n;
    cout<<"enter no.of elements:";
    cin>>n;
    /*0 1 1 2 3 5 8*/
    cout<<fib1<<" ";
    cout<<fib2<<" ";
    for(i=0;i<n-2;i++)
    {
       fib=fib1+fib2;
       cout<<fib<<" ";
       fib1=fib2;
       fib2=fib;
    }
    return 0;
}