#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cout<<"enter no. of elements:";
    cin>>n;
    int a[n];
    cout<<"enter array:";
    for(int i=0;i<n;i++)
    {
        cout<<"enter:";
        cin>>a[i];
    }
    int ans=2;
    int pd=a[1]-a[0];
    int j=2;
    int curr=2;
    while(j<n)
    {
        if(pd==a[j]-a[j-1])
        {
            curr++;
        }
        else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans<<endl;
    return 0;
}