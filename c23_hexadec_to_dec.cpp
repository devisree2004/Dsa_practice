#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n,m;
    cout<<"enter the number:";
    cin>>n;
    m=n;
    int x=1,i,ans=0;
    int len=n.size();
    for(i=len-1;i>=0;i--)
    {
      if(n[i]>='0'&&n[i]<='9')
      {
        ans+=x*(n[i]-'0');

      }
      else if(n[i]>='A'&& n[i]<='F')
      {
        ans+=x*(n[i]-'A'+10);
      }
      x*=16;
    }
    cout<<"the decimal value of "<<m<<" is "<<ans;
    return 0;
}