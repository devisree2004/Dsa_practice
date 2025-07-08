#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string res="";
    char ch='a';
    for(char c:s)
    {
        if(c>ch)
        {
            ch=c;
        }
        
    }
    for(char cha:s)
    {
        if(cha==ch)
        {
            continue;
        }
        else
        {
           res+=cha; 
        }
    }
    cout<<res;
    return 0;
}