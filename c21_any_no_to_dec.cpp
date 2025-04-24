#include<iostream>
using namespace std;
int pow(int a,int b)
{
 int i,pro=1;
 for(i=1;i<=b;i++)
 {
    pro=pro*a;
    
 }
 return pro;
}

int main()
{
    int n,m,i=0,j,b,rem=0,sum=0;
    cout<<"enter the number:";
    cin>>n;
    m=n;
    cout<<"enter the base value:";
    cin>>b;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem*(pow(b,i));
        i++;

    }
    cout<< "the decimal value of "<<m<<"with base "<<b<<" is "<<sum;
    
return 0;
    
}