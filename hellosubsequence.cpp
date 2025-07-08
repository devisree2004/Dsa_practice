#include<bits/stdc++.h>
using namespace std;
bool hello(string s)
{
    string target="hello";
    int i=0,count=0;
    
    for(char ch:s)
    {
        if(i<5)
        {
            if(ch==target[i])
            {
                i++;
                count++;
            }    
        }
        else
        {
            break;
        }

    }
    if(count==5)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s;
    cout<<"enter the string:";
    cin>>s;
    bool res=hello(s);
    if(res)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    
    
    
}