#include<iostream>
using namespace std;
int fac(int m)
{
    int res=1;
    if(m==0||m==1)
    {
        return 1;
    }
    else
    {
        return m*fac(m-1);
    }
}
int nCr(int a, int b)
{
    int res;
    if(a==0||a==b)
    {
        res=1;
    }
    else
    {
        res=fac(a)/(fac(a-b)*fac(b));
    }
    return res;
}
int main()
{
    int i,j,n;
    cout<<"enter the no.of rows:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=n-1-i;j>0;j--)
        {
            cout<<" ";
        }
        for(j=0;j<=i;j++)
        {
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
}