#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> m(2*n);
    for( int i=0;i< 2* n;i++)
    {
        int a,b;
        cin>> a>>b;
        m[i]={a,b};
    }
    vector<int> res(n);
    int j=0;
    for(int i=0;i<(2*n);i+=2)
    {
        if(j<n)
        {
        int sum=m[i].first+m[i].second+m[i+1].first+m[i+1].second;
        if(sum==0)
        {
           res[j]=0;
           j++; 
        }
        else if(sum==4)
        {
            res[j]=2;
            j++;
        }
        else{
            res[j]=1;
            j++;
        }
    }
    }
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;

}