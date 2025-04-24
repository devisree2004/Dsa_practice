#include<bits/stdc++.h>
using namespace std;
string addb(string n,string m)
{
    int nl=n.length(),ml=m.length(),x;
    
    if(nl>ml) x=nl;
    else x=ml;
    string res;
    string b;
    for(int i=0;i<x;i++)
    {
      b[i]=0;
      res[i]=0;
    }
    for(int i=x-1;i>=0;i--)
    {
      if(n[i]==m[i]==0)
      {
        if(b[i]==0)
        {
        res[i]='0';
        }
        else{
          res[i]='1';
        }
      }
      else if( n[i]!=m[i]) 
      {
        if(b[i]==0)
        {
        res[i]='1';
        }
        else
        {
           res[i]='0';
           b[i-1]='1';
        }
      }
      else 
      {
        if(b[i]=='0')
        {

        
        res[i]='0';
        b[i-1]='1';
        }
        else{
          res[i]='1';
          b[i-1]='1';
        }
      }
    }
    
    return res;

}
int main()
{
    string a;
    cout<<"enter a number:";
    cin>>a;
    string b;
    cout<<"enter a number:";
    cin>>b;

    cout <<" the result of adding "<< a<< " and "<<b<< addb(a,b);
    return 0;
}