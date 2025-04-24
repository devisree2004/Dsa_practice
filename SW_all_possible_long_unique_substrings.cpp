#include<bits/stdc++.h>
using namespace std;

vector<string> all_long_unique_substrings(string s)
{
    int l=0,maxlen=0;
    unordered_set<char> f;
    vector<string> result;
    for(int r=0;r<s.size();r++)
    {
        while(f.find(s[r])!=f.end())
        {
            f.erase(s[l]);
            l++;
        }
        f.insert(s[r]);
        if((r-l+1)==maxlen)
        {
            result.push_back(s.substr(l,r-l+1));
        }
        if((r-l+1)>maxlen)
        {
            maxlen=r-l+1;
            result.clear();
            result.push_back(s.substr(l,r-l+1));
        }
        
    }
    return result;

}
int main()
{
    string s="abcdabcdd";
    vector<string> ans;
    ans=all_long_unique_substrings(s);
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<"   ";
    }
    return 0;
}