#include<iostream>
using namespace std;
int main()
{
    int n,i,sum;
    cout<<"enter the no. of elements:";
    cin>>n;
    int a[n];
    cout<<"enter array elements :";
    for(i=0;i<n;i++)
    {
      cout<<"enter:";
      cin>>a[i];
    }
    cout<<"enter the sum:";
    cin>>sum;
   int * st=&a[0];
   int * en=&a[0];
   while(st <= &a[n-1])
   {
     
   }

}