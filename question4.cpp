#include<bits/stdc++.h>
using namespace std;

int main()
{
   
    int n,m;
    cin>>n >> m;

    vector<int> arr1(n);
    vector<int> arr2(m);

    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }

    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }

    vector<int> distinct(n,0);
    unordered_set<int> s;

    for(int i=n-1;i>=0;i--)
    {
        s.insert(arr1[i]);
        distinct[i]=s.size();
    }

    vector<int> res(m);

    for(int i=0;i<m;i++)
    {
     res[i]=distinct[arr2[i]-1];
     cout<<res[i]<<" ";
    }

    return 0;
    
}