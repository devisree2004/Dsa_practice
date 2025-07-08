#include<bits/stdc++.h>
using namespace std;
int delnum(string s)
{
    int n=s.size();
    vector<string> ending ={"00","25","50","75"};
    int mindigit=INT_MAX;
    for(string end :ending)
    {
        for(int i=n-1;i>=0;i--)
        {
            char first=end[0];
            char last=end[1];
            if(s[i]==last)
            {
                for(int j=i-1;j>=0;j--)
                {
                    if(s[j]==first)
                    {
                       int mini=n-j-2;
                       mindigit=min(mini,mindigit);
                    }
                }
            }
        }
    
    }


return mindigit;
    
}

int main()
{
    int t;
    cin>>t;
    vector<string> arr(t);
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    vector<int> res(t);
    for(int i=0;i<t;i++)
    {
        res[i]=delnum(arr[i]);
    }
    for(int i=0;i<t;i++)
    {
        cout<<res[i]<<endl;
    }

}