// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"enter no.of elements:";
    cin>>n;
     int fib1=0,fib2=1,fib;
     cout<<fib1<<endl;
     cout<<fib2<<endl;
     for(int i=0;i<n-2;i++)
     {
         fib=fib1+fib2;
         cout<<fib<<endl;
         fib1=fib2;
         fib2=fib;
     }
    
    return 0;
}