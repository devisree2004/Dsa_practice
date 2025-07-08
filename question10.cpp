
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int t=1;
    int n=s.length();
    int res=0;
    for(int i=n-1;i>=0;i--)

    {
        res+=(s[i]-'A'+1)*t;
        t*=26;
    }
    cout<<res;
    return 0;
}