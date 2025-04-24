#include<iostream>
using namespace std;
int pas_tri(int a)
{
    int res=1;
    if(a==0)
    {
        res=1;
    }
    else
    {
    for(int i=0;i<a;i++)
    {
        res=res*11;
    }
    }
    return res;
}
int main()
{
    int i,j,num;
    cout<<"enter no. of rows:";
    cin>>num;
    for(i=0;i<num;i++)
    {
        for(j=num-1-i;j>0;j--)
        {
            cout<<" ";
        }
        int n=pas_tri(i);
        int rem;
        while(n!=0)
        {
            rem=n%10;
            n=n/10;
            cout<<rem<<" ";
            
            
           

        }
        cout<<endl;
    }
    return 0;
}