#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int e;
    cin>>e;
    int n;
    cin>>n;
    int mini=0;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
    for(int i=0;i<n;i++)
    {
        if(2*a[i]<=e)
        {
            mini+=2;
            e-=2*a[i];
        }
        else if(a[i]<=e)
        {
            mini+=1;
            e-=a[i];
        }
        if(e==0)
        {
            cout<< mini;
            break;
        }
    }
    if(e!=0)
    {
        cout<<-1;
    }
    return 0;
}