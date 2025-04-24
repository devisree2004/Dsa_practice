#include<iostream>
using namespace std;
int fac(int a)
{
    if(a==1)
    {
        return 1;

    }
    
    else
    {
       return a*fac(a-1);
    }
}
int main()
{
    int n,r,res;
    cout<<"enter n value:";
    cin>>n;
    cout<<"enter r value:";
    cin>>r;
    if(n==r||r==0)
    {
        res=1;
    }
    else
    {
        res=fac(n)/(fac(n-r)*fac(r));
    }


    cout<<"nCr of the given number is "<<res;
    return 0;
}