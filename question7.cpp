#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c;
    cin>>c;
    vector<int> s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int total=0;
    for(int i=0;i<n;i++)
    {
        total += ceil((double)s[i] / c);

    }
    cout<<total;
    return 0;
}