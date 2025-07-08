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
    for(int j=n-1;j>=0;j--)
    {
        if(arr[j]<9)
        {
            arr[j]++;
            break;
        }
        else
        {
            arr[j]=0;
            
        }
    }
    if(arr[0]==0)
    {
        n++;
        arr.insert(arr.begin(),1);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }


    return 0;
}