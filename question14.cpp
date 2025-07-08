#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    pair<int,int> p;
    cin>>p.first >> p.second;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(p.first%arr[i]==0 && p.second%arr[i]==0)
        {
            count++;
        }


    }
    cout<< count;
    return 0;
}