#include<bits/stdc++.h>
using namespace std;

int main()
{
    int amt;
    cin>>amt;
    int coins[10]={1,2,5,10,20,50,100,200,500,2000};
    vector<int> res;
    int i=9;
    while(amt!=0 && i>=0)
    {
        if(amt<coins[i])
        {
            i--;
        }
        else{
            res.push_back(coins[i]);
            amt-=coins[i];
        }
    }
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}

